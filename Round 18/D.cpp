#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cin>>n; if(n<1 && n > pow(10,5)) return 0;
    int *s = new int[n];
    int sum=0;
    int prev=0;
    for(int i = 0 ; i < n ; i++){
        cin>>s[i];
        if(s[i]<1 && s[i] > 4) return 0;
        if(s[i] % 4 ==0 ){
            sum++;
        }
        else{
            prev+=s[i];
            
        }
    }
    while(prev > 4 ){
        prev = prev-4;
        sum++;
    }
    if(prev>0)
    sum++;
    cout<<sum;
}
