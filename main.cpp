#include <iostream>
using namespace std;
//函数指针的使用
//函数声明
const double * f1(const double ar[],int n);
const double * f2(const double [],int n);
const double * f3(const double *,int);





int main() {
    using namespace  std;
    double av[3] = {1112.3,1542.6,2227.9};

    //定义一个函数指针指向函数f1
    const double * (*p1)(const double *,int) = f1;
    auto p2 = f2;//使用auto定义一个指向f2的函数指针
    cout << "Using pointers to function:\n";
    cout << "Address Value\n";
    cout << (*p1)(av,3) << ": " << (*p1)(av,3) << endl;
    cout << p2(av,3) <<": " << "p2(av,3)" << endl;

    //创建一个函数指针数组
    //auto关键字不能用在列表初始化，只能用在单值初始化
//    const double *(*pa[3])(const double *,int) = {f1,f2,f3};
//    auto pb = pa;
//    cout << "\nUsing an array of pointers to functions:\n";
//    cout << "Address Value\n";
//    for(int i = 0;i < 3;i++){
//        cout << pb[i](av,3) << ":" <<
//    }



    return 0;
}

//函数定义
const double * f1(const double * ar,int n){
    return ar;
}

const double * f2(const double ar[],int n){
    return ar + 1;
}

const double * f3(const double ar[],int n){
    return ar + 2;
}

