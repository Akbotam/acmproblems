#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> v;
    cin>>n;
    if (n==0) {
        cout<<10;
        return 0;
    }
    else if (n<10){
        cout<<n;
        return 0;
    }
    else{
            for (int i = 9; i>=2; i--){
            while (n%i==0){
                n/=i;
                v.push_back(i);
            }
            }
    }

        reverse(v.begin(), v.end());
        if(n>10){
            cout << -1;
        }
        else{
        for (int i = 0; i<v.size(); i++)
            cout<<v[i];
        }
    return 0;
}
