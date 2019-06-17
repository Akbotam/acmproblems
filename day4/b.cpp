#include <iostream>

using namespace std;

    int binpow (int a, int n){
        if (n==0)
            return 1;
        if (n%2==1)
            return binpow(a, n-1)*a%10;
        else {
            int b = binpow(a, n/2)%10;
            return b*b;
        }
    }
int main(){
    int n;
    cin>>n;
    cout<<(binpow(1378, n))%10;
return 0;
}
