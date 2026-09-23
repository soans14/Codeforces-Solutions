#include <iostream>
using namespace std;
 
int main() {
    int t,n,count;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        count=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                break;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}