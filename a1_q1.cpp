#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;

    while(i<=5){
        if(i==1|i==5){
            cout<<"*****";
        }
        else{
            int j=1;
            while(j<=n-i){
                cout<<" ";
                j++;

            }
            cout<<"*";
            int k=1;
            while(k<i){
                cout<<" ";
                k++;
            }


        }
        cout<<endl;
        i++;
    }

}
