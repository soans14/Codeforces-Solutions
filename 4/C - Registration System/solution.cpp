#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    vector<string> user;
    vector<int> count;
    int n,size;
    cin>>n;
    cin>>s;
    user.push_back(s);
    count.push_back(1);
    cout<<"OK
";
    for(int i=1;i<n;i++){
        cin>>s;
        size=user.size();
        for(int j=0;j<size;j++){
            if(s==user[j]){
                cout<<s<<count[j]<<endl;
                count[j]++;
                break;
            }
            else if(j==size-1){
                cout<<"OK
";
                user.push_back(s);
                count.push_back(1);
            }
        }
    }
    return 0;
}