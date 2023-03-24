#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s; cin>>s;
    int up=0 , low=0;
    if(s.length()<1 && s.length() >100) return 0;
    for(int i=0;i<s.length();i++){
        if(s[i] >=65 && s[i] <=90){
            up++;
        }
        else if(s[i] >=97 && s[i] <=122){
            low++;
        }
    }
    int i=0;
    if(low>up || low==up){
        while(s[i]){
            char c = s[i];
            s[i] = tolower(c);
            i++;
        }
    }
    else if(low<up){
        while(s[i]){
            char c = s[i];
            s[i] = toupper(c);
            i++;
        }
    }
    cout<<s;
}