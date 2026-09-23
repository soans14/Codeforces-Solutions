#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,n,temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==a[1]){
            temp=a[0];
            for(int i=2;i<n;i++){
                if(temp!=a[i]){
                    cout<<i+1<<endl;
                }
            }
        }
        else{
            temp=a[2];
            if(temp==a[0]){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}