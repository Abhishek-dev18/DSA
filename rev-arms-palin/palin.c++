#include <iostream>
using namespace std;

int main() {
    int n;
    n=1121;
    int org=n;
    int rev=0;
    while(n>0){
        int last=n%10;
        rev= rev*10 + last;
        n=n/10;
        
    }
    cout<<rev<<endl;
    
    if(rev==org){
        cout<<"Number is Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    
    return 0;
}