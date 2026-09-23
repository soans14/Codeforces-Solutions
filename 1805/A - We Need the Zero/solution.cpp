#include <iostream>
 
using namespace std;
 
int main() {
    long long t,n,temp,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        x=0;
        if(n%2==0){
            for(int i=0;i<n;i++){
                cin>>temp;
                x=x^temp;
            }
            if(x==0){
                x=2;
            }
            else{
                x=-1;
            }
        }
        else{
            for(int i=0;i<n;i++){
                cin>>temp;
                x=x^temp;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}