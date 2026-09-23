#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int t,n,temp;
    bool c1;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        c1=false;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==67){
                c1=true;
            }
        }
        if(c1){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
    return 0;
}