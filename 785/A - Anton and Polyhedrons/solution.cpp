#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
            sum+=4;
        }
        else if(s=="Cube"){
            sum+=6;
        }
        else if(s=="Octahedron"){
            sum+=8;
        }
        else if(s=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=20;
        }
    }
    cout<<sum;
    return 0;
}