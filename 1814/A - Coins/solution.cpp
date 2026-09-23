#include <iostream>
using namespace std;
 
int main() {
    unsigned long long t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        if(n%2==0){
            cout<<"YES
";
        }
        else{
            if(k%2==1 && k<=n){
                cout<<"YES
";
            }
            else{
                cout<<"NO
";
            }
        }
    }
    return 0;
}