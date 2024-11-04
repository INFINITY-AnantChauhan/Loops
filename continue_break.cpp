#include<iostream>
using namespace std;
int main(){
    int pocket;
    cout<<"enter pocket money  ";
    cin>>pocket;
    for(int date =1;date<=30;date++){
        if(date%2==0){
            continue;
         }
         if(pocket==0){
             break;
         }
    cout<<"go out today::"<<date<<endl;
    pocket =pocket-500;
    }
    return 0;
}