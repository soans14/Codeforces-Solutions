#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main() {
    long long t,n,count,ans;
    int k;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        count=ans=0;
        vector<long long> v(n,0);
        unordered_map<long long,vector<int>> mpp;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-4;i++){
            v[i]=v[i]+v[i+2]-v[i+4];
            mpp[v[i]].push_back(i);
        }
        for(auto i:mpp){
            if(i.second.size()>1){
                vector<long long> prefix;
                for(int j=0;j<i.second.size();j++){
                    for(k=j+1;k<min(j+5,(int)i.second.size());k++){
                        if(i.second[k]-i.second[j]!=2&&i.second[k]-i.second[j]!=4){
                            count++;
                        }
                    }
                    if(i.second.size()>j+5){
                        ans+=(i.second.size()-j-5);
                    }
                    ans+=count;
                    count=0;
                }
            }
        }
        cout<<ans<<"
";
    }
    return 0;
}