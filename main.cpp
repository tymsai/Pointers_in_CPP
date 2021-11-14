#include<iostream>
using namespace std;
int main(){
    int value=96, *ptr;
    ptr=&value;
    cout<<"Value is "<<value<<endl;
    cout<<"Address of value is "<<&value<<endl;
    cout<<"Data in ptr "<<ptr<<endl;
    cout<<"Address of pointer "<<&ptr<<endl;
    cout<<"astrek with ptr "<<*ptr<<endl;
}
