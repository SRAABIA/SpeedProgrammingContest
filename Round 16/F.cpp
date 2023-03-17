#include<iostream>
#include<cmath>
using namespace std;
int count(int i){
    int c = 0, n;
    while(i){
        i = i/10;
        c++;
    }
    return c;
}
int sum(int i){
    int s = 0;
    while(i){
        s+=i%10;
        i=i/10;
    }
    return s;
}
int main(){
    int A,B,N;
    cin>>N>>A>>B;
    int s = 0;
    for(int i = 1 ; i <= N ; i++){
        if(sum(i) >= A && sum(i) <= B){
            s+=i;
        }
    }
    cout<<s;
    return 0;
}