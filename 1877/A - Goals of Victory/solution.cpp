#include <iostream>
using namespace std;
 
int main() {
    int t,n,temp,a;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        a=0;
        for(int j=1;j<n;j++){
            cin>>temp;
            a+=temp;
        }
        cout<<(-1)*a<<endl;
    }
    return 0;
}