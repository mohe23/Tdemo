#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<MMSystem.h>//播放音乐需要的头文件

#define SIZE 1400
//#pragma comment(lib,"winmm.lib")//告诉编译器，加载winmm.lib库文件 codeblocks中该方法不灵，仅适用于VC++。
// 项目-构建选项-链接器设置-链接库，点击“新增”，输入“winmm”，再点击保存。
/*
int main(){
    int i;
    IMAGE images[SIZE];// 再写项目时，对于数组的大小，要用“宏定义的常量”来表示，而不是简单的写1个数字
    char fileName[128];


 // 增加新功能,播放动画效果
 // 预先加载图片资源
    printf("正在加载....");
    for(i=1;i<=SIZE ;i++){
        sprintf(fileName,"D:\\Code\\Tdemo\\images\\Image%d.jpg",i);//将图片所在目录放在fileName中
        loadimage(&images[i-1],fileName);
    }

    // 先加载资源，再初始化画布，播放音乐。否则，播放音乐后，没有任何图片显示。
    initgraph(800,450);//根据图片大小，定义绘图窗口大小
    //loadimage(0,"jljt.jpg");//加载背景图片
    mciSendString(("play 极乐净土.mp3 repeat"),0,0,0);//重复播放极乐净土.mp3
    while(1){
        //依次播放各个图片
        for(i=0;i<SIZE;i++){//图片文件夹中有214张jpg图片
            //sprintf(fileName,"D:\\Code\\Tdemo\\images\\Image%d.jpg",i);//将图片所在目录放在fileName中
            //loadimage(0,fileName);
            putimage(0,0,&images[i]);
            Sleep(50);//"休眠"50ms，
        }


        //loadimage(0,_T("D:\\Code\\Tdemo\\images\\Image2.jpg"));
    }

    system("pause");
    closegraph();
return 0;
}
*/
