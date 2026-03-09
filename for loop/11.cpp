// check prime or not;
#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
    if(n<=1){
        cout<<"neither prime nor composite";

    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Composite!";
    }
    else{
        cout<<"Prime!";
    }
}
