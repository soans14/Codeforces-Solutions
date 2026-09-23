#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,m,temp=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout<<'#';
            }
            else{
                if(temp==0){
                    if(j<m-1){
                        cout<<'.';
                    }
                    else{
                        cout<<'#';
                        temp=1;
                    }
                }
                else{
                    if(j==0){
                        cout<<'#';
                    }
                    else if(j==m-1){
                        cout<<'.';
                        temp=0;
                    }
                    else{
                        cout<<'.';
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}