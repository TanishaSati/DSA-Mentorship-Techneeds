#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n>0){
        c++;

        n=n/10;

    }
    cout<<c;
    
    return 0;
}
