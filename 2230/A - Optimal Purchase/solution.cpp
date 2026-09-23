#include <iostream>
using namespace std;
 
int main() {
    long long t,n,a,b,cost;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>a>>b;
        cost=0;
        if(a*n<b*(n/3)+b && a*n<b*(n/3)+a*(n%3)){
            cost+=a*n;
        }
        else{
            cost+=b*(n/3);
            if(b>a*(n%3)){
                cost+=a*(n%3);
            }
            else{
                cost+=b;
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}