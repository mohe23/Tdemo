#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h>//播放音乐需要的头文件
#pragma comment(lib,"winmm.lib")//告诉编译器，加载winmm.lib库文件

/*
int main(){
    initgraph(726,500);//根据图片大小，定义绘图窗口大小
    loadimage(0,"jljt.jpg");//加载图片
    mciSendString(_T("play 极乐净土.mp3 repeat"),0,0,0);//重复播放极乐净土.mp3

    system("pause");
    closegraph();
return 0;
}
*/
