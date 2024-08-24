#include <iostream>

using namespace std;

int fact(int num){
   int sum=1;
    for(int i=1;i<=num;i++){
       sum=sum*i;
    }
    return sum;
}

int main() {
    int n,sum;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            sum=fact(i)/(fact(i-j)*fact(j));
            cout<<sum;
        }
        cout<<endl;
    }
    return 0;
}