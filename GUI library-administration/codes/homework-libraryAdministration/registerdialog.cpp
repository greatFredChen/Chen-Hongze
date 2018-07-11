#include "registerdialog.h"
#include "ui_registerdialog.h"

registerdialog::registerdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerdialog)
{
    ui->setupUi(this);
}

registerdialog::~registerdialog()
{
    delete ui;
}

void registerdialog::on_pushButton_2_clicked()//�˳���ť��
{
    ui->accountline->clear();
    ui->passwordline->clear();
    this->reject();
}

void registerdialog::on_pushButton_clicked()//ע�ᰴť��
{
    //��Ϣ��ò����bug������ʹ��fromlocal8bit!
    if(ui->accountline->text().isEmpty()||ui->passwordline->text().isEmpty())
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("��������˺�Ϊ�գ�"),QMessageBox::Ok);
        ui->accountline->clear();
        ui->passwordline->clear();
    }
    else
    {
    QString account=ui->accountline->text();
    QString password=ui->passwordline->text();
    char fname[30],fpwd[30];
    strcpy(fname,account.toLocal8Bit().data());strcpy(fpwd,password.toLocal8Bit().data());
    int r=Createuser(fname,fpwd);//=0��ʧ�ܣ�=1��ɹ���
    if(!r) QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("�û��Ѵ��ڣ�ע��ʧ�ܣ�"),QMessageBox::Ok);
    else  QMessageBox::warning(this,QString::fromLocal8Bit("ͼ�����ϵͳ"),QString::fromLocal8Bit("ע��ɹ���"),QMessageBox::Ok);//��ʱ���Ѿ����д����Ϣ��
    ui->accountline->clear();ui->passwordline->clear();//���ע����Ϣ��
    }
}
