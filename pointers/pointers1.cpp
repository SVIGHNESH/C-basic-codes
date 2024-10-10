#include<iostream>
using namespace std;
int main (){
    int num = 6;
    cout<<num<<endl;
    cout<<"address of the num is "<<&num<<endl;

    int *ptr=&num;
    // *ptr=*ptr+1;
    cout<<"The sixe of the integer is :"<<sizeof(num)<<endl;

    cout<<"The value is : "<<*ptr<<endl;
    

    double d = 4.2;
    double *p2=&d;
    cout<<"The size of the double is : "<<sizeof(d)<<endl;
    cout<<"The address of the d is : "<<p2<<endl;
    cout<<"The value at the p2 is : "<<*p2<<endl;

    cout<<"the size of the ptr is : "<<sizeof(ptr)<<endl;


    }