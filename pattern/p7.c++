#include <iostream>
using namespace std;

int main() {
    int n=5;
    int i,j;
    int k=1;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        
        cout<<"\n";
    }
    return 0;
}