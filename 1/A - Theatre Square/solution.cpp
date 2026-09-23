#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    long long n,m,a,count1=0,count2=0;
    cin>>n>>m>>a;
    int max_num=max(n,m);
    while(max_num>0){
        count1++;
        max_num-=a;
    }
    int min_num=min(n,m);
    while(min_num>0){
        count2++;
        min_num-=a;
    }
    cout<<count1*count2;
    return 0;
}