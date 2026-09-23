#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,t,temp;
    cin>>n>>t;
    vector<int> arr;
    for(int i=1;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<n-1;){
        i+=arr[i];
        if(i==t-1){
            cout<<"YES";
            break;
        }
        if(i>t-1){
            cout<<"NO";
            break;
        }
    }
    return 0;
}