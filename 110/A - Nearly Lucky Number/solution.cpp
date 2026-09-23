#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int lucky=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            lucky++;
        }
    }
    if(lucky==0){
        cout<<"NO";
        return 0;
    }
    int d;
    while(lucky>0){
        d=lucky%10;
        lucky/=10;
        if(d!=4 && d!=7){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}