#include<graphics.h>
#include<Windows.h>

///*
int main(){

    initgraph(1000,620);//定义绘图窗口大小
    setbkcolor(RGB(0,200,200));//设置背景色
    cleardevice();//用设置好的背景色填充绘图窗口

    rectangle(40,50,240,200);
    rectangle(700,50,900,200);
    rectangle(700,430,900,580);
    rectangle(40,430,240,580);
    rectangle(360,240,560,390);

    setlinecolor(RGB(0,255,0));//设置画笔颜色
    setlinestyle(PS_SOLID,5);//设置画笔格式

    line(240,50,700,200);
    line(900,200,700,430);
    line(700,580,240,430);
    line(40,430,360,240);

    settextcolor(RGB(255,255,0));//设置文本颜色
    settextstyle(50,0,"微软雅黑");//设置打印文本字体

    outtextxy(85,100,"加好友");
    outtextxy(755,100,"聊天");
    outtextxy(745,480,"看电影");
    outtextxy(95,480,"吃饭");
    outtextxy(405,290,"压马路");
    /*
//画出5个矩形
    rectangle(10,20,160,120);
    rectangle(180,140,330,240);
    rectangle(350,260,500,360);
    rectangle(520,380,670,480);
    rectangle(690,500,840,600);

    setlinecolor(RGB(0,255,0));//设置画笔颜色
    setlinestyle(PS_SOLID,5);//设置画笔格式

    line(160,120,180,140);
    line(330,240,350,260);
    line(500,360,520,380);
    line(670,480,690,500);

    settextcolor(RGB(255,255,0));//设置文本颜色
    settextstyle(50,0,"微软雅黑");//设置打印文本字体

    outtextxy(30,45,"加好友");
    outtextxy(220,165,"聊天");
    outtextxy(370,285,"看电影");
    outtextxy(560,405,"吃饭");
    outtextxy(710,525,"压马路");
*/
    system("pause");//暂停程序执行，使得绘图窗口保持在屏幕前
    closegraph();

return 0;

}
//*/
