#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen ("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, sum = 0;
    cin>>n;
    if (n>0){
        for (int i = 1; i<=n; i++)
            sum+=i;
    }
    else{
        for (int i = 1; i>=n; i--)
            sum+=i;
    }
        cout<<sum;
        fclose(stdout);

return 0;
}
