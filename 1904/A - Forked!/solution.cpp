#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,a,b,xk,yk,xq,yq,count;
    
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>xk>>yk>>xq>>yq;
        count=0;
        set<pair<int,int>> k,q;
        k.insert({xk+a,yk+b});
        k.insert({xk-a,yk+b});
        k.insert({xk+a,yk-b});
        k.insert({xk-a,yk-b});
        k.insert({xk+b,yk+a});
        k.insert({xk-b,yk+a});
        k.insert({xk+b,yk-a});
        k.insert({xk-b,yk-a});
        q.insert({xq+a,yq+b});
        q.insert({xq-a,yq+b});
        q.insert({xq+a,yq-b});
        q.insert({xq-a,yq-b});
        q.insert({xq+b,yq+a});
        q.insert({xq-b,yq+a});
        q.insert({xq+b,yq-a});
        q.insert({xq-b,yq-a});
        for(auto& p:q){
            if(k.count(p)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}