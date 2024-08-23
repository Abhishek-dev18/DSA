#include <iostream>

using namespace std;

int main() {
    int n,org,rev=0;
    
    n=153;
    org=n;
    
    while(n>0){
        int last=n%10;
        rev= rev + (last*last*last);
        n=n/10;
        
    }
    cout<<rev<<endl;
    
    if(rev==org){
        cout<<"Number is Armstronge";
    }else{
        cout<<"Not Armstronge";
    }
    
    return 0;
}