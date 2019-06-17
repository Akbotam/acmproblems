#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, s, x;
    cin>>t>>s>>x;
    if (t==x) {
        cout<<"YES";
        return 0;
        }
    if (x-t>0 && ((x-t)%s==0  ) ) {

        cout<<"YES";
        return 0;
    }
    if (x-t - 1>0 && ((x-t -1 )%s==0  ) ) {

        cout<<"YES";
        return 0;
    }

    cout<<"NO";
    return 0;
}
