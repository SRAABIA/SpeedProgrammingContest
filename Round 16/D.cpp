#include<iostream>
#include<cmath>
using namespace std;
int ifprime(int i){
    for(int j = 2; j<i;j++){
            if(i%j == 0){
                return 0;
            }
        }
    return 1;
}
int prime(int X){
    int y;
    if(ifprime(X) == 1){
            return X;
    }
    int i = X;
    int f  = 0;
    while(!f){
        i++;
        if(ifprime(i)) f = 1;
    }
    return i;
}
int main(){
    int X; cin>>X;
    cout<<prime(X);
}