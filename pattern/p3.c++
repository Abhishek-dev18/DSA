#include <iostream>
using namespace std;

int main() {
    
    int i,j;
    int k=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<k;
            cout<<" ";
            k++;
        }
        cout<<"\n";
    }
    

    return 0;
}