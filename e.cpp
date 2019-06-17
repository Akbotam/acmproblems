#include <iostream>
#include <cstdlib>
using namespace std;

    int count(int a, int b, int n){
        if (n>2) {
               return (a*count(a, b, n-1) + b*count(a, b, n-2))%7;
        }
       else
        return 1;
    }
int main() {
    int a, b, n;
    cin>>a>>b>>n;
        while(a!=0 && b!=0 && n!=0) {
            cout<<count(a, b, n);
            cin>>a>>b>>n;
        }
        exit(1);
    return 0;
}


