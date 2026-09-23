#include <iostream>
 
#include <string>
 
using namespace std;
 
int main() {
    int a,b,c,d,count=0;
    string s;
    cin>>a>>b>>c>>d>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            count+=a;
        }
        else if(s[i]=='2'){
            count+=b;
        }
        else if(s[i]=='3'){
            count+=c;
        }
        else{
            count+=d;
        }
    }
    cout<<count;
    return 0;
}