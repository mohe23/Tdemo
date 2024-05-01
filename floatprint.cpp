// 输出cout相关
#include<iostream>

using namespace std;

/*
int main(){
    double value = 12.3456789;
   // 默认情况下，cout只能输出6位数字（十进制数），这6位包括整数位，小数位
    cout<<"value: "<<value<<endl;//打印 12.3457("7"是四舍五入得到的)

    cout.precision(4);//整体输出4位数字
    cout<<"value: "<<value<<endl;//打印“12.35”(位'5'是四舍五入的结果)
    // 指定小数点后的精度位数
    cout.flags(cout.fixed);//定点法，精度只表示小数点后的位数
    cout<<"value: "<<value<<endl;//打印 12.3457
    cout<<3.1415926<<endl;//打印 3.1416

    cout.unsetf(cout.fixed);//取消小数后的精度的定点法
    cout<<3.1415926<<endl;// 打印 3.142

    cout.precision(8);
    cout.flags(cout.fixed);//精度是小数点后8位
    cout<<"value: "<<value<<endl;// 打印12.34567890

    cout.unsetf(cout.fixed);//取消小数后的精度的定点法

    cout.precision(2);//精度为2位（包括整数位+小数位）
    cout<<"value: "<<value<<endl;// 打印12

return 0;
}

*/
