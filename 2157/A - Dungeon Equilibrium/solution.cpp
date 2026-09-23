#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int t,n,temp,ans;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        map<int,int> mpp;
        ans=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            mpp[temp]++;
        }
        for(auto i:mpp){
            if(i.second>i.first){
                ans+=i.second-i.first;
            }
            else if(i.second!=i.first){
                ans+=i.second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}