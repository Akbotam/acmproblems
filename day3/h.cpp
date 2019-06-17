#include <iostream>

using namespace std;

int main() {
    int a, b;
    int cnt = 0;
    cin>>a>>b;
    if( a == 1 && b == 1){ cout << 0; return 0;
    }
    for(int i = 0;  i < 1e6;i++){

        if (a>b){
            a-=2;
            b++;
        }
        else {
            b-=2;
            a++;
        }
        cnt++;
        if(a==0 || b== 0) break;
    }

    cout<<cnt;
    return 0;
}
