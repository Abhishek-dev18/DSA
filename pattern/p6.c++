#include <iostream>
using namespace std;

int main() {
    int n=5;
    int i,j,k;
    int s;
    
    for(i=n;i>=1;i--){
        s=i-1;
            for(k=1;k<=s;k++){
                cout<<" ";
            }
        
        for(j=n;j>=1;j--){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    return 0;
}