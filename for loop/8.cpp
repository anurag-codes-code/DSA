//POwer
#include<iostream>
using namespace std;
int main(){
    int n,pow;
    cin>>n;
    cin>>pow;
    int num=n;
    for(int i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num;
}