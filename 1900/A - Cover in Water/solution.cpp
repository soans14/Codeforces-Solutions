#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t,n,count;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        cin>>s;
        count=0;
        if(s.find("...")!=string::npos){
            cout<<2<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='.'){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}