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
    int n,r,ans;
    cin>>n>>r;
    
    ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;

    return 0;
}