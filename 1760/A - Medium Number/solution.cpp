#include <iostream>
 
using namespace std;
 
int main() {
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if((c>a&&c<b)||(c>b&&c<a)){
            cout<<c<<endl;
        }
        else if((b>a&&b<c)||(b>c&&b<a)){
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}