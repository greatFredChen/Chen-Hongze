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
        //��������� �ǵã�������string��QString��ת��ʱ���ǳ���������char*תqstring��,һ��Ҫ��fromlocal8bit(str.data())/tolocal8bit().data()��ֻ��ʹ��local8bit.data��һ����������������룡
        name=t->name;number=t->num;borrowed=(strcmp(t->Borrow,"0")==0?"In the library":"Has been borrowed");
        sname=sname.fromLocal8Bit(name.data());snumber=snumber.fromLocal8Bit(number.data());sborrowed=sborrowed.fromLocal8Bit(borrowed.data());
        QStandardItem *item=0;//��ʼ��Ϊ0��
        item=new QStandardItem(snumber);//ʹ��qstring��ʼ��qstandarditem��ָ��item����
        m_model->setItem(rowcount,0,item);//ͨ��standarditem��ʼ��model��
        item=new QStandardItem(sname);
        m_model->setItem(rowcount,1,item);
        item=new QStandardItem(sborrowed);
        m_model->setItem(rowcount,2,item);
        for(int i=0;i<3;i++)
        {
            m_model->item(rowcount,i)->setTextAlignment(Qt::AlignCenter);//�����ı����У���
            m_model->item(rowcount,i)->setForeground(QBrush(Qt::white));//����ǰ��ɫ���ı���ɫ��Ϊ��ɫ����
            //ע�⣺QBrush��ɫ������������1.ʹ�ô�ɫ��ʱ�����ʹ��Qt::color��2�����Ҫʹ�û��ɫ����ʹ��QColor����+RGB��ɫ������û����ɫ����
        }
        rowcount++;
        std::cout<<"hahaha"<<"\n";
        PrintTree(t->Left);
        PrintTree(t->Right);
    }
}
void printdialog2::on_okbutton_2_clicked()//��հ�ť��
{
    rowcount=0;
    if(flag){
        delete m_model;
        flag=false;
    }
}

void printdialog2::on_okbutton_clicked()//�˳���ť��
{
    rowcount=0;
    if(flag){
        delete m_model;
        flag=false;
    }
    this->reject();
}
void printdialog2::on_printbutton_clicked()//��ӡ��ť��
{
    //������qstandarditem!
    //������qstandarditemmodel!
    ui->tableView->setShowGrid(true);
    m_model=new QStandardItemModel();
    m_model->setColumnCount(3);
    std::cout<<"ganniyade"<<"\n";
    m_model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("���"));//��ͷ��
    m_model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("����"));
    m_model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("״̬"));
    PrintTree(this->T);
    std::cout<<"hehe"<<"\n";
    ui->tableView->setModel(m_model);
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);//��ͷ��Ϣ����
    ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);//��ͷ���У�
    ui->tableView->resizeColumnsToContents();//���������Զ����������е��п������������в��������ǵ���ĳһ�е��п�
    ui->tableView->horizontalHeader()->setFixedHeight(45);
    ui->tableView->verticalHeader()->setFixedWidth(50);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//���Ŵ��ڴ�С�ı䣡
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//��ֹ�༭��
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);//����ѡ�����У���
    std::cout<<"sdfsdf"<<"\n";
    flag=true;
}
void printdialog2::on_okbutton_3_clicked()//��һҳ
{
    if(flag)
    {int rowCount = ui->tableView->model()->rowCount();
        int rowHeight = ui->tableView->rowHeight(0);
        int tableViewHeight = ui->tableView->height();
        int rowCountPerPage = tableViewHeight/rowHeight-1;		//ÿҳ��ʾ����
        int canNotViewCount = rowCount-rowCountPerPage;			//������������
        if(canNotViewCount == 0) return;
        int maxValue = ui->tableView->verticalScrollBar()->maximum();		// ��ǰSCROLLER�����ʾֵ
        if(maxValue == 0) return;
        int pageValue = (maxValue*rowCountPerPage)/canNotViewCount;
        int nCurScroller = ui->tableView->verticalScrollBar()->value();		//��õ�ǰscrollerֵ
        if(nCurScroller>0)
            ui->tableView->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
        else
        {
                ui->tableView->verticalScrollBar()->setSliderPosition(maxValue);
        }
    }
}
void printdialog2::on_okbutton_4_clicked()//��һҳ
{
    if(flag)
    {
        int rowCount = ui->tableView->model()->rowCount();
        int rowHeight = ui->tableView->rowHeight(0);
        int tableViewHeight = ui->tableView->height();
        int rowCountPerPage = tableViewHeight/rowHeight-1;		//ÿҳ��ʾ����
        int canNotViewCount = rowCount-rowCountPerPage;			//������������
        if(canNotViewCount == 0) return;
        int maxValue = ui->tableView->verticalScrollBar()->maximum();		// ��ǰSCROLLER�����ʾֵ
        if(maxValue == 0) return;
        int pageValue = (maxValue*rowCountPerPage)/canNotViewCount;
        int nCurScroller = ui->tableView->verticalScrollBar()->value();		//��õ�ǰscrollerֵ
        if(nCurScroller<maxValue)
            ui->tableView->verticalScrollBar()->setSliderPosition(nCurScroller+pageValue);
        else
        {
                ui->tableView->verticalScrollBar()->setSliderPosition(0);
        }
    }
}

void printdialog2::on_printbutton_2_clicked()//��ҳ
{
    if(flag){
    int maxValue = ui->tableView->verticalScrollBar()->maximum(); // ��ǰSCROLLER�����ʾֵ
       if(maxValue == 0)  return;
       ui->tableView->verticalScrollBar()->setSliderPosition(0);
    }
}
void printdialog2::on_printbutton_3_clicked()//ĩҳ
{
    if(flag){
        int maxValue = ui->tableView->verticalScrollBar()->maximum(); // ��ǰSCROLLER�����ʾֵ
           if(maxValue == 0)  return;
           ui->tableView->verticalScrollBar()->setSliderPosition(maxValue);
    }
}
