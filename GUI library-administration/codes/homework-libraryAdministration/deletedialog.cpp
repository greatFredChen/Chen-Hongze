#include "deletedialog.h"
#include "ui_deletedialog.h"

deletedialog::deletedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletedialog)
{
    ui->setupUi(this);
    flag=true;
}

deletedialog::~deletedialog()
{
    delete ui;
}
void deletedialog::on_pushButton_2_clicked()
{
    this->reject();
}

void deletedialog::on_pushButton_clicked()
{
    if(ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("���������ϢΪ�գ�"),QMessageBox::Ok);
        ui->textEdit->clear();
    }
    else{
    QString strinsert=ui->textEdit->toPlainText();
    QTextStream readstr(&strinsert);
    while(!readstr.atEnd())//������,������ͷ֮ǰ
    {
        QString name1;
        readstr>>name1;
        char name[100];
        strcpy(name,name1.toLocal8Bit().data());
        if(strcmp(name,"\0")!=0)
        {
            this->Temp=Delete(this->T,name,flag);
        if(!flag)
            sum+="û���Ȿ�飡;";
        else{
            this->T=this->Temp;
            sum+=name;sum+="�ɹ�ɾ����;";
        }
        }
    }
    }
    //��ʼ����Ϣ����listview!
    ssum=ssum.fromLocal8Bit(sum.data());//��sumת�Ƶ�qstring!
    qlist=ssum.split(";");//qstringתqstringlist!!
    m_model=new QStringListModel(qlist);
    modelisempty=true;
    ui->resultline->setModel(m_model);
}
void deletedialog::on_pushButton_3_clicked()//�����
{
    ui->textEdit->clear();
    sum.clear();
    ssum.clear();
    qlist.clear();
    if(modelisempty){
    modelisempty=false;
    delete m_model;
    }
}
