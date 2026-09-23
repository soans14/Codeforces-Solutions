#include <iostream>
using namespace std;
 
int main() {
    long long t,n,e,o,j,k,l,m;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int s[n],a[n];
        o=e=j=k=l=m=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]%2==0){
                if(s[i]%6==0){
                    a[j]=s[i];
                    j++;
                }
                else{
                    a[e-m-1]=s[i];
                    m++;
                }
            }
            else{
                if(s[i]%3==0){
                    a[n-1-k]=s[i];
                    k++;
                }
                else{
                    a[e+l]=s[i];
                    l++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}