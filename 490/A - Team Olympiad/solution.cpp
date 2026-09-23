#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n,ans;
    cin>>n;
    vector<int> one,two,three;
    int a[n],count[3]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            count[0]++;
            one.push_back(i+1);
        }
        else if(a[i]==2){
            count[1]++;
            two.push_back(i+1);
        }
        else{
            count[2]++;
            three.push_back(i+1);
        }
    }
    ans=min(min(count[0],count[1]),count[2]);
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}