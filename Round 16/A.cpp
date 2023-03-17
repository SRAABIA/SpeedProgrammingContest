#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A;
    cin>>B;
    int s=0,count=0;
    while(B>0){
        s+=A;
        B = B-A;
        count++;
    }
    cout<<count;
    return 0;
}