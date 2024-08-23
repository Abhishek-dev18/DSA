// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n;
    n=5;
    int p=1;
    for(i=2;i<n;i++){
        if(n%i==0){
            p=0;
        }
    }
    
    if(p==0){
        cout<<"Not A Prime";
    }else{
        cout<<"Prime";
    }
    return 0;
}