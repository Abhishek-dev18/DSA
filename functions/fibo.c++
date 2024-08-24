#include <iostream>

using namespace std;

void fibo(int num){
    int a=0,b=1,s;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=num-2;i++){
        s=a+b;
        cout<<s<<endl;
        a=b;
        b=s;
        

    }
}

int main() {
    int n;
    cin>>n;
    
   fibo(n);

    return 0;
}