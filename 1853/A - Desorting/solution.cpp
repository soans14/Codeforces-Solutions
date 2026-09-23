#include <iostream>
 
using namespace std;
 
int main() {
    int t,n;
    cin>>t;
    long long min;
    for(int i=1;i<=t;i++){
        cin>>n;
        unsigned long long a[n];
        long long s[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                s[i-1]=a[i]-a[i-1];
            }
        }
        min=s[0];
        for(int i=0;i<n-1;i++){
            if(s[i]<min){
                min=s[i];
            }
        }
        if(min<0){
            cout<<0<<endl;
        }
        else if(min==0){
            cout<<1<<endl;
        }
        else{
            cout<<((int)min/2)+1<<endl;
        }
    }
    return 0;
}