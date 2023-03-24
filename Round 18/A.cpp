#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N<1 && N>200000) return 0;
    int sum = 0;
    string *s= new string [N];
    for(int  i = 0 ; i < N ; i++){
        cin>>s[i];
        if(s[i] == "Icosahedron"){ sum+= 20;}
        else if(s[i] == "Tetrahedron"){ sum+= 4;}
        else if(s[i] == "Cube"){ sum+= 6;}
        else if(s[i] == "Octahedron"){ sum+= 8;}
        else if(s[i] == "Dodecahedron"){ sum+= 12;}
    }
    cout<<sum;
}