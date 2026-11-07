#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 
int main() {
    long long t,n,k,count,start;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        vector<long long> sum(n+1,0);
        count=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum[i+1]=sum[i]+a[i];
        }
        unordered_map <int,int> rem;
        for(int j=0;j<n;j++){
            start=j-k;
            if(start>=0){
                rem[sum[start]%k]++;
            }
            if(rem.count(sum[j+1]%k)){
                count+=rem[sum[j+1]%k];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}