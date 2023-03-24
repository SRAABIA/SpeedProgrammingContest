#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    string g1 = "I hate ";
    string g2 = "I love ";
    if(n<1 && n>100) return 0;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 1){
            cout<<g2;
        }
        if(i%2 == 0){
            cout<<g1;
        }
        if(i==n-1)
        cout<<"it";
        else cout<<"that ";
    }
}