#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
 
int main() {
    int t,n,temp,count;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>s;
        count=0;
        stack<int> st;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                st.push(i);
            }
            else if(s[i]=='2'){
                if(st.empty()){
                    v[i]=1;
                }
                else{
                    temp=st.top();
                    v[temp]=1;
                    st.pop();
                }
            }
            else{
                v[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
            }
        }
        cout<<count<<endl;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}