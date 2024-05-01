// cin相关的练习
#include<iostream>

using namespace std;

/*
int main(){
    int a,b,c;
    /*
    cin>>a>>b>>c;
// 当前面的变量输入错误时，后面变量数据就无法输入了
//输入 a 23 67，那么3个变量打印时，数据是其他值了
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;*/

/*    cout<<"请输入a: "<<endl;
    cin>>a;
    if(cin.fail()){//输入发生错误
        cout<<"输入失败，应该输入1个整数"<<endl;
        cin.clear();//清除cin的错误标志
        cin.sync();//清空输入缓冲区
    }

    cout<<"请输入b: "<<endl;
    cin>>b;
    if(cin.fail()){//输入发生错误
        cout<<"输入失败，应该输入1个整数"<<endl;
        cin.clear();//清除cin的错误标志
        cin.sync();//清空输入缓冲区
    }

    cout<<"请输入c: "<<endl;
    cin>>c;
    if(cin.fail()){//输入发生错误
        cout<<"输入失败，应该输入1个整数"<<endl;
        cin.clear();//清除cin的错误标志
        cin.sync();//清空输入缓冲区
    }

    /*
    char girlType;
    int salary;
    float high;

    cout<<"请输入您的理想类型："<<endl;
    cout<<"  A: 贤惠型"<<endl;
    cout<<"  B: 泼辣型"<<endl;
    cout<<"  C: 文艺型"<<endl;
    cout<<"  D: 运动型"<<endl;
    cin>>girlType;

    cout<<"请输入您的月收入：";
    cin>>salary;

    cout<<"请输入您的身高：[单位-米]";
    cin>>high;


    cout<<"您的理想类型是："<<girlType<<endl;
    cout<<"您的月收入是："<<salary<<endl;
    cout<<"您的身高是："<<high<<"米"<<endl;

return 0;
}


//*/
