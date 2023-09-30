#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER ANY NUMBER";
    cin>>n;
    int temp=2;
    bool flag=true;

    while(temp<n){
        if(n%temp==0){
            flag=false;

        }
        
        temp++;

    }
    if(flag==true){
        cout<<"It is prime";
    }
    if(flag==false){
        cout<<"It is not prime";

    }
}
