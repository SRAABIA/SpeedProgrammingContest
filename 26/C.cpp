#include<iostream>
#include<cmath>
using namespace std;
void swap(int *a, int *b){
    int t = *a;
    *a=*b;
    *b=t;
}
void arrange(int *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++ )
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int n;
    long long int v;
    cin>>n>>v;
    if(n>50 || n<1 || v> pow(10,6) || v<pow(10,4)){ return 0;}
    int count = 0;
    bool flag = false;
    int*arr = new int[n]{0};
   
    int *x = new int[n]{0};

    for(int i=0;i<n;i++){
        cin>>x[i];
        int k = x[i];
        long long int *item = new long long int[k];
        for(int j = 0 ; j < k ; j++ ){
            cin>>item[j];
        if(item[j]<pow(10,4) || item[j]>pow(10,6)) return 0;

            if(v>item[j]){
                flag = true;
            }

        }
        if(flag){
            arr[count] = i+1;
            count++;
        }
        flag = false;
        delete(item);
    }
    if(count==0){
        cout<<0; return 0;
    }
    cout<<count<<endl;
    arrange(arr,count);
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}