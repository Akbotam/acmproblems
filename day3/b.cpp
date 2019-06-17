#include <iostream>
#include <set>

using namespace std;

int cnt[100100];

int main() {
    int n,m;
    cin >> n>> m;
    int a[n];
    set<int> S;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    for(int i = n-1;i>= 0;i--){
        S.insert(a[i]);
        cnt[i] = S.size();
    }
    for(int i = 0;i < m;i++){
        int x;
        cin >> x;
        cout << cnt[x-1] << endl;
    }
    return 0;
}
