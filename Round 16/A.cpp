#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    int s=1,count=0;
    if( A<2 || A>20 || B<1 || B>20) return 0;
    while(s<B){
        s+=A-1;
        count++;
    }
    cout<<count;
    return 0;
}