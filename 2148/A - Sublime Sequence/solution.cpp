#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int t,n,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>n;
        if(n%2){
            cout<<x<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}