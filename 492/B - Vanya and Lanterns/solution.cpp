#include <iostream>
using namespace std;
 
int main(){
    int n,l,temp;
    long double d;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    d=a[0];
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>2*d){
            d=(a[i+1]-a[i])/2.0;
        }
    }
    if(l-a[n-1]>d){
        d=(l-a[n-1]);
    }
    cout<<fixed<<d;
    return 0;
}