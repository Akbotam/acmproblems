#include <iostream>

using namespace std;

int main() {
    int n, c = 0, d = 0, sum = 0;
    int t[100001];
    int a[100001], b[100001];
    cin>>n;
    for (int i = 1; i<=n; i++){
        cin>>t[i];
    }
   for (int i = 1; i<=n; i++){
        sum+=t[i];
    a[i]=sum;
   }
   sum = 0;
   for (int i = n; i>=1; i--){
        sum+=t[i];
    b[i]=sum;
   }
   for(int i =1; i<=n; i++)
    {
        if (a[i]<=b[i])
            c++;
        else d++;
    }
    cout<<c<<" "<<d;

    return 0;
}
