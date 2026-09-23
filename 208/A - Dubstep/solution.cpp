#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    int count=0,wubcount=0;
    vector<char> a;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i<s.size()-2 && s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(count>=1){
                a.push_back(' ');
            }
            count=0;
        }
        else{
            a.push_back(s[i]);
            count++;
        }
    }
    for(auto i:a){
        cout<<i;
    }
    return 0;
}