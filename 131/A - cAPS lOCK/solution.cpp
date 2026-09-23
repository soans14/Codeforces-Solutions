#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s,temp;
    cin>>s;
    temp=s;
    int l,u;
    if(temp[0]-'a'>=0){
        temp[0]=toupper(temp[0]);
    }
    else{
        temp[0]=tolower(temp[0]);
    }
    for(int i=1;i<s.size();i++){
        if(temp[i]-'a'<0){
            temp[i]=tolower(temp[i]);
        }
        else{
            cout<<s;
            return 0;
        }
    }
    cout<<temp;
    return 0;
}