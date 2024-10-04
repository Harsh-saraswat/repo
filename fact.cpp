#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int fact = 1;

    for(int i= 1;i<=n;i++){
        fact*=i;     
    }
    cout<<fact<<endl;
}
// This is from a branch

int solve(int n){
    static  int fact = 1;
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<n<<endl;
}

