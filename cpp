#include<bits/stdc++.h>
using namespace std;

int rhombus(int n){
    if(n==1){
        return 1;
    }
    return (4n-1)+rhombus(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<rhombus(n)<<endl;
    
    return 0;
}
