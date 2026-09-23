#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    long long t,n,sum,sumt,j;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        sum=sumt=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(j=0;j<n;j++){
            sum+=a[j];
            sumt+=(j+1);
            if(sum<sumt){
                cout<<"NO
";
                break;
            }
        }
        if(j==n){
            cout<<"YES
";
        }
    }
    return 0;
}