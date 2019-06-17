#include <iostream>

using namespace std;

int main() {
    int n, a, b ,c, cnt = 0;
    cin>>n>>a>>b>>c;
    while (n!=0 && n>0) {
         if (a>=b){
            n-=b;
            if (n<0) { cout<<cnt; return 0; }
            n+=c;
            cnt++;
         }
         else {
            n-=a;
            if (n<0) { cout<<cnt; return 0; }
            n+=c;
            cnt++;
         }
    }
    cout<<cnt;

    return 0;
}
