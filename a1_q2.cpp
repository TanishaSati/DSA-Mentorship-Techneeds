#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter";

    cin>>marks;
    if(marks>90){
        cout<<"Excellent";

    }
    else if(marks>80 and marks<90){
        cout<<"good";
        
    }
    else if(marks>70 and marks<80){
        cout<<"fair";
        
    }
    else if(marks>60 and marks<70){
        cout<<"meets expctation";
        
    }
    else if(marks<=60){
        cout<<"Below";
        
    }
    return 0;
}
