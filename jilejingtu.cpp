#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<MMSystem.h>//����������Ҫ��ͷ�ļ�

#define SIZE 1400
//#pragma comment(lib,"winmm.lib")//���߱�����������winmm.lib���ļ� codeblocks�и÷������飬��������VC++��
// ��Ŀ-����ѡ��-����������-���ӿ⣬����������������롰winmm�����ٵ�����档
/*
int main(){
    int i;
    IMAGE images[SIZE];// ��д��Ŀʱ����������Ĵ�С��Ҫ�á��궨��ĳ���������ʾ�������Ǽ򵥵�д1������
    char fileName[128];


 // �����¹���,���Ŷ���Ч��
 // Ԥ�ȼ���ͼƬ��Դ
    printf("���ڼ���....");
    for(i=1;i<=SIZE ;i++){
        sprintf(fileName,"D:\\Code\\Tdemo\\images\\Image%d.jpg",i);//��ͼƬ����Ŀ¼����fileName��
        loadimage(&images[i-1],fileName);
    }

    // �ȼ�����Դ���ٳ�ʼ���������������֡����򣬲������ֺ�û���κ�ͼƬ��ʾ��
    initgraph(800,450);//����ͼƬ��С�������ͼ���ڴ�С
    //loadimage(0,"jljt.jpg");//���ر���ͼƬ
    mciSendString(("play ���־���.mp3 repeat"),0,0,0);//�ظ����ż��־���.mp3
    while(1){
        //���β��Ÿ���ͼƬ
        for(i=0;i<SIZE;i++){//ͼƬ�ļ�������214��jpgͼƬ
            //sprintf(fileName,"D:\\Code\\Tdemo\\images\\Image%d.jpg",i);//��ͼƬ����Ŀ¼����fileName��
            //loadimage(0,fileName);
            putimage(0,0,&images[i]);
            Sleep(50);//"����"50ms��
        }


        //loadimage(0,_T("D:\\Code\\Tdemo\\images\\Image2.jpg"));
    }

    system("pause");
    closegraph();
return 0;
}
*/
