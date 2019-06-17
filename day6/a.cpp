#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n, x, y, cnt = 0;
    int a[101];
    vector <int> v;
    set <int> S;
    cin>>n;
    for (int i = 0; i<n; i++) {
        cin>>x;
        v.push_back(x);
        S.insert(x);
    }
   for (int i = 0; i<S.size(); i++) {
        for (int j = i+1; j<S.size(); j++) {
            y = S.size();
            int b = abs(v[i] - v[j]);
            S.insert(b);
            if (S.size() == y+1){
                cnt++;
                v.push_back(b)
            }
        }
    }
    if (cnt%2 == 0)
        cout<<"Bob";
    else {
        cout<<"Alice";
    }
    return 0;
}
