#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    int choice;
    cout<<"Enter the choice  1 or 2 : ";
    cin>>choice;

    int sum = 0;
    int pro =1;
    int temp = n;

    if(choice == 1){
        while(temp!=0){
        int ld = temp%10;
        sum = sum +ld;
        temp = temp/10;
        }
        cout<<"Sum of N Numbers : "<<sum;

    }else if(choice == 2){
        while(temp!=0){
            int ld = temp%10;
            pro = pro*ld;
            temp = temp/10;
        }
        cout<<"Product of N NUmbers : "<<pro;

    }else{
        cout<<"Wrong Choice Please Enter 1 or 2 : ";
    }

}