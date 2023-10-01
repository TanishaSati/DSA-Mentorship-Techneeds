#include<iostream>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    int gcd;
    while(b!=0){
        if(a%b==0){
            gcd=b;
            break;
        }
        else{
            int temp=b;
            b=a%b;
            a=temp;

        }

        

        
    }
    cout<<gcd;


}

