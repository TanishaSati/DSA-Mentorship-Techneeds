#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER ANY NUMBER";
    cin>>n;
    int i=2;
    
    

    while(i<=n){
        
        int j=2;
        bool isprime=true;

        while(j<i){
            if(i%j==0){
                isprime=false;
                break;
                
            }
            
            j++;}
        if(isprime==true){
            cout<<i<<endl;
        }
        i++;
        
        
        
    }

}
