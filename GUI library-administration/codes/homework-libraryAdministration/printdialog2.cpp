#include "printdialog2.h"
#include "ui_printdialog2.h"

printdialog2::printdialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::printdialog2)
{
    ui->setupUi(this);
}
printdialog2::~printdialog2()
{
    rowcount=0;
    if(flag){
        delete m_model;
        flag=false;
    }
    delete ui;
}
void printdialog2::PrintTree(Tree t)
{
    if(t!=NULL)
    {
        std::string name,number,borrowed;
        QString sname,snumber,sborrowed;
        //先序遍历！ 记得，当进行string与QString的转换时（非常不建议用char*转qstring）,一定要用fromlocal8bit(str.data())/tolocal8bit().data()，只有使用local8bit.data才一定不会出现中文乱码！
        name=t->name;number=t->num;borrowed=(strcmp(t->Borrow,"0")==0?"In the library":"Has been borrowed");
        sname=sname.fromLocal8Bit(name.data());snumber=snumber.fromLocal8Bit(number.data());sborrowed=sborrowed.fromLocal8Bit(borrowed.data());
        QStandardItem *item=0;//初始化为0！
        item=new QStandardItem(snumber);//使用qstring初始化qstandarditem的指针item！！
        m_model->setItem(rowcount,0,item);//通过standarditem初始化model！
        item=new QStandardItem(sname);
        m_model->setItem(rowcount,1,item);
        item=new QStandardItem(sborrowed);
        m_model->setItem(rowcount,2,item);
        for(int i=0;i<3;i++)
        {
            m_model->item(rowcount,i)->setTextAlignment(Qt::AlignCenter);//设置文本居中！！
            m_model->item(rowcount,i)->setForeground(QBrush(Qt::white));//设置前景色（文本颜色）为白色！！
            //注意：QBrush上色方法有两个！1.使用纯色的时候可以使用Qt::color。2。如果要使用混合色，则使用QColor方法+RGB调色法来获得混合颜色！！
        }
        rowcount++;
        std::cout<<"hahaha"<<"\n";
        PrintTree(t->Left);
        PrintTree(t->Right);
    }
}
void printdialog2::on_okbutton_2_clicked()//清空按钮！
{
    rowcount=0;
    if(flag){
        delete m_model;
        flag=false;
    }
}

void printdialog2::on_okbutton_clicked()//退出按钮！
{
    rowcount=0;
    if(flag){
        delete m_model;
        flag=false;
    }
    this->reject();
}
void printdialog2::on_printbutton_clicked()//打印按钮！
{
    //先设置qstandarditem!
    //后设置qstandarditemmodel!
    ui->tableView->setShowGrid(true);
    m_model=new QStandardItemModel();
    m_model->setColumnCount(3);
    std::cout<<"ganniyade"<<"\n";
    m_model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("序号"));//表头！
    m_model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("书名"));
    m_model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("状态"));
    PrintTree(this->T);
    std::cout<<"hehe"<<"\n";
    ui->tableView->setModel(m_model);
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);//表头信息居中
    ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);//列头居中！
    ui->tableView->resizeColumnsToContents();//根据内容自动调整所有列的列宽！！若括号里有参数，则是调整某一列的列宽！
    ui->tableView->horizontalHeader()->setFixedHeight(45);
    ui->tableView->verticalHeader()->setFixedWidth(50);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//随着窗口大小改变！
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//禁止编辑！
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);//单击选中整行！！
    std::cout<<"sdfsdf"<<"\n";
    flag=true;
}
void printdialog2::on_okbutton_3_clicked()//上一页
{
    if(flag)
    {int rowCount = ui->tableView->model()->rowCount();
        int rowHeight = ui->tableView->rowHeight(0);
        int tableViewHeight = ui->tableView->height();
        int rowCountPerPage = tableViewHeight/rowHeight-1;		//每页显示行数
        int canNotViewCount = rowCount-rowCountPerPage;			//看不见的行数
        if(canNotViewCount == 0) return;
        int maxValue = ui->tableView->verticalScrollBar()->maximum();		// 当前SCROLLER最大显示值
        if(maxValue == 0) return;
        int pageValue = (maxValue*rowCountPerPage)/canNotViewCount;
        int nCurScroller = ui->tableView->verticalScrollBar()->value();		//获得当前scroller值
        if(nCurScroller>0)
            ui->tableView->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
        else
        {
                ui->tableView->verticalScrollBar()->setSliderPosition(maxValue);
        }
    }
}
void printdialog2::on_okbutton_4_clicked()//下一页
{
    if(flag)
    {
        int rowCount = ui->tableView->model()->rowCount();
        int rowHeight = ui->tableView->rowHeight(0);
        int tableViewHeight = ui->tableView->height();
        int rowCountPerPage = tableViewHeight/rowHeight-1;		//每页显示行数
        int canNotViewCount = rowCount-rowCountPerPage;			//看不见的行数
        if(canNotViewCount == 0) return;
        int maxValue = ui->tableView->verticalScrollBar()->maximum();		// 当前SCROLLER最大显示值
        if(maxValue == 0) return;
        int pageValue = (maxValue*rowCountPerPage)/canNotViewCount;
        int nCurScroller = ui->tableView->verticalScrollBar()->value();		//获得当前scroller值
        if(nCurScroller<maxValue)
            ui->tableView->verticalScrollBar()->setSliderPosition(nCurScroller+pageValue);
        else
        {
                ui->tableView->verticalScrollBar()->setSliderPosition(0);
        }
    }
}

void printdialog2::on_printbutton_2_clicked()//首页
{
    if(flag){
    int maxValue = ui->tableView->verticalScrollBar()->maximum(); // 当前SCROLLER最大显示值
       if(maxValue == 0)  return;
       ui->tableView->verticalScrollBar()->setSliderPosition(0);
    }
}
void printdialog2::on_printbutton_3_clicked()//末页
{
    if(flag){
        int maxValue = ui->tableView->verticalScrollBar()->maximum(); // 当前SCROLLER最大显示值
           if(maxValue == 0)  return;
           ui->tableView->verticalScrollBar()->setSliderPosition(maxValue);
    }
}
