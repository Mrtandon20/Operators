#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    int a=0;
    int b=1;
    int c;

    for(int i=2; i<=n; i++){
        c=a+b;
        a = b;
        b = c;
    }
    cout<<"Answer : "<<b;

    if(n==0){
        cout<<"Answer : "<<a;
    }
    

}