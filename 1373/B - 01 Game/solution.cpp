#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t,count;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        count=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                s.erase(i,2);
                i=-1;
                count++;
                if(s.size()==0){
                    break;
                }
            }
        }
        if(count%2!=0){
            cout<<"DA
";
        }
        else{
            cout<<"NET
";
        }
    }
    return 0;
}