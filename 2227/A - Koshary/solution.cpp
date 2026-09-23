#include <iostream>
using namespace std;
 
int main() {
    int t,x,y;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        if(x%2==0 || y%2==0){
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