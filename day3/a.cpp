#include <iostream>

using namespace std;

int main(){
    int n, k;
    int dp[18], dp0[18];
    cin>>n>>k;
    dp[1] = k-1;
    dp0[1] = 0;
    for (int i = 2; i<=n; i++) {
        dp0[i] = dp[i-1];
        dp[i] = dp[i-1]*(k-1) + dp0[i-1]*(k-1);
    }
        cout<<dp[n]+dp0[n];
return 0;
}
