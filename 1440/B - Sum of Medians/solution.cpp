#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
 
int main() {
    int t,n,k,count;
    long long sum;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        sum=0;
        count=k;
        int a[n*k];
        for(int i=0;i<n*k;i++){
            cin>>a[i];
        }
        if(n%2==0){
            for(int i=n*k-n/2-1;i>=0;i-=(n-n/2+1)){
                if(!k){
                    break;
                }
                sum+=a[i];
                k--;
            }
        }
        else{
            for(int i=n*k-n/2-1;i>=0;i-=(n-n/2)){
                if(!k){
                    break;
                }
                sum+=a[i];
                k--;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}