#include <iostream>
using namespace std;
 
int main() {
    long long a,b,c,n,t,temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>n;
        c=b;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(1+temp<=a){
                c+=temp;
            }
            else{
                c+=a-1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}