#include <iostream>
using namespace std;
 
int main(){
    int n,h,temp,w=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>h){
            w+=2;
        }
        else{
            w++;
        }
    }
    cout<<w;
}