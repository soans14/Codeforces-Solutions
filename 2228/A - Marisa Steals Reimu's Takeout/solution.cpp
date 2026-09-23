#include <iostream>
using namespace std;
 
int main() {
    int t,n,c0,c1,c2,c3;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        c0=c1=c2=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        c3=c0;
        if(c1<=c2){
            c3+=c1;
            c2-=c1;
            c3+=(c2/3);
        }
        else{
            c3+=c2;
            c1-=c2;
            c3+=(c1/3);
        }
        cout<<c3<<endl;
    }
    return 0;
}