#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t,count;
    cin>>t;
    string s,test="codeforces";
    for(int i=0;i<t;i++){
        cin>>s;
        count=0;
        for(int i=0;i<10;i++){
            if(s[i]!=test[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}