#include <iostream>
using namespace std;
 
int main() {
    long long t,x,n,a;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>n;
        if(x%2==0){
            if(n%4==0){
                cout<<x;
            }
            else if(n%4==1){
                cout<<x-n;
            }
            else if(n%4==2){
                cout<<x+1;
            }
            else{
                cout<<x+n+1;
            }
        }
        else{
            if(n%4==0){
                cout<<x;
            }
            else if(n%4==1){
                cout<<x+n;
            }
            else if(n%4==2){
                cout<<x-1;
            }
            else{
                cout<<x-n-1;
            }
        }
        cout<<endl;
    }
    return 0;
}