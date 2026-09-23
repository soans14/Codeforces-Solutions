#include <iostream>
using namespace std;
 
int main() {
    int t,n,k,temp,sum;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        sum=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum+=temp;
        }
        if(sum%2==0 && (k*n)%2==1){
            cout<<"NO
";
        }
        else{
            cout<<"YES
";
        }
    }
    return 0;
}