#include "returndialog.h"
#include "ui_returndialog.h"

returndialog::returndialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returndialog)
{
    ui->setupUi(this);
}
returndialog::~returndialog()
{
    delete ui;
}
void returndialog::closeEvent(QCloseEvent *event)//��д�رպ�����
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    //delete m_model;
    event->accept();
}
void returndialog::on_pushButton_2_clicked()//ȡ����ť��
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    //delete m_model;
    this->reject();
}
void returndialog::on_pushButton_clicked()//ȷ�ϰ�ť��
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("����Ϊ�գ�"),QMessageBox::Ok);
    else{
    QString str=ui->lineEdit->text();
    char name[30];strcpy(name,str.toLocal8Bit().data());
    std::cout<<name<<"\n";//���Դ���
    this->T=returner(this->T,this->User,flag,name);
    std::cout<<flag<<"\n";//���Դ���
    if(flag==0)
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("���޴��飡"),QMessageBox::Ok);
    else if(flag==4)
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("�����Ѿ���ͼ����У�"),QMessageBox::Ok);
    else if(flag==2)
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("���鱻�����˽��ߣ��������黹��"),QMessageBox::Ok);
    else{
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("�ɹ��黹!"),QMessageBox::Ok);
        FILE *fp;
        if((fp=fopen("D:/books.txt","w"))==NULL)
        {
            std::cout<<"failed!"<<"\n";
            system("pause");
        }
        SaveTree(this->T,fp);
    }
    ui->lineEdit->clear();
    }
}

void returndialog::on_pushButton_3_clicked()//�鿴��ť
{
    FindBorrow(this->T,User,sum);
    ssum=ssum.fromLocal8Bit(sum.data());
    qlist=ssum.split(";");
    m_model=new QStringListModel(qlist);
    modelisempty=true;
    ui->listView->setModel(m_model);
}

void returndialog::on_pushButton_4_clicked()//��հ�ť
{
    sum.clear();
    ssum.clear();
    qlist.clear();
    if(modelisempty){
    delete m_model;
    modelisempty=false;
    }
}
