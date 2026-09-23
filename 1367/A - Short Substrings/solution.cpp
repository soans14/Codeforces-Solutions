#include <iostream>
 
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        cout<<s[0];
        for(int i=1;i<s.size()-1;i+=2){
            cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    }
    return 0;
}