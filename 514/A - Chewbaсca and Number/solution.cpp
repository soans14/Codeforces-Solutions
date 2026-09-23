#include <iostream>
 
using namespace std;
 
int main(){
    long long int n,temp,d=0,ans=0;
    cin>>n;
    temp=n;
    while(temp>0){
        temp/=10;
        d++;
    }
    if(d==1&&n==9){
        cout<<n;
        return 0;
    }
    temp=n;
    int a[d];
    for(int i=0;i<d;i++){
        a[i]=temp%10;
        temp/=10;
    }
    for(int i=d-1;i>=0;i--){
        if(i==d-1 && a[i]==9){
            a[i]=a[i];
        }
        else if(a[i]>=9-a[i]){
            a[i]=9-a[i];
        }
        ans=ans*10+a[i];
    }
    cout<<ans;
    return 0;
}