#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,n,count;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        count=0;
        int a[5]={0};
        if(n==5){
            for(int i=0;i<s.size();i++){
                if(s[i]=='T'){
                    a[0]++;
                }
                else if(s[i]=='i'){
                    a[1]++;
                }
                else if(s[i]=='m'){
                    a[2]++;
                }
                else if(s[i]=='u'){
                    a[3]++;
                }
                else if(s[i]=='r'){
                    a[4]++;
                }
            }
            for(auto i:a){
                if(i!=1){
                    cout<<"NO
";
                    break;
                }
                else{
                    count++;
                }
            }
            if(count==5){
                cout<<"YES
";
            }
        }
        else{
            cout<<"NO
";
        }
    }
    return 0;
}