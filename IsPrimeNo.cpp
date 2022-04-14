#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    bool divide = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            divide = false;
            break;
        }
    }
    if(divide == false){
        cout<<"Not A Prime NO ";
    }else{
        cout<<"A Prime NO";
    }
}