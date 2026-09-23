#include <iostream>
using namespace std;
 
int main() {
    long long t,n,c1,c2;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        char s[n];
        cin>>s;
        c1=c2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1==c2){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
    return 0;
}