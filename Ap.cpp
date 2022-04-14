#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    int count = 1;
    int i =1;
    while(count <= n){
        int res = (3*i)+2;
        if(res%4!=0){
            cout<<res<<endl;
            count++;
        }
        i++;
    }

}