#include<graphics.h>
#include<Windows.h>

///*
int main(){

    initgraph(1000,620);//�����ͼ���ڴ�С
    setbkcolor(RGB(0,200,200));//���ñ���ɫ
    cleardevice();//�����úõı���ɫ����ͼ����

    rectangle(40,50,240,200);
    rectangle(700,50,900,200);
    rectangle(700,430,900,580);
    rectangle(40,430,240,580);
    rectangle(360,240,560,390);

    setlinecolor(RGB(0,255,0));//���û�����ɫ
    setlinestyle(PS_SOLID,5);//���û��ʸ�ʽ

    line(240,50,700,200);
    line(900,200,700,430);
    line(700,580,240,430);
    line(40,430,360,240);

    settextcolor(RGB(255,255,0));//�����ı���ɫ
    settextstyle(50,0,"΢���ź�");//���ô�ӡ�ı�����

    outtextxy(85,100,"�Ӻ���");
    outtextxy(755,100,"����");
    outtextxy(745,480,"����Ӱ");
    outtextxy(95,480,"�Է�");
    outtextxy(405,290,"ѹ��·");
    /*
//����5������
    rectangle(10,20,160,120);
    rectangle(180,140,330,240);
    rectangle(350,260,500,360);
    rectangle(520,380,670,480);
    rectangle(690,500,840,600);

    setlinecolor(RGB(0,255,0));//���û�����ɫ
    setlinestyle(PS_SOLID,5);//���û��ʸ�ʽ

    line(160,120,180,140);
    line(330,240,350,260);
    line(500,360,520,380);
    line(670,480,690,500);

    settextcolor(RGB(255,255,0));//�����ı���ɫ
    settextstyle(50,0,"΢���ź�");//���ô�ӡ�ı�����

    outtextxy(30,45,"�Ӻ���");
    outtextxy(220,165,"����");
    outtextxy(370,285,"����Ӱ");
    outtextxy(560,405,"�Է�");
    outtextxy(710,525,"ѹ��·");
*/
    system("pause");//��ͣ����ִ�У�ʹ�û�ͼ���ڱ�������Ļǰ
    closegraph();

return 0;

}
//*/
