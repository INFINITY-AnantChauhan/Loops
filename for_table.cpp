#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number whose table u want to print:";
    cin>>a;
    for(int i =1;i<=10;i++){
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}