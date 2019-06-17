#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstdio>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define sz(a) (int)a.size()
#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long
#define f first

const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);

const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

std::vector<int> v1;
int n;
int main()  {
    int n, k;
    cin >> n >> k;
    for (int i = 0, x; i < k; ++i) {
        cin >> x;
        v1.push_back(x);
    }

    int ans[n + 1];
    reverse (v1.begin(), v1.end());
    for (int i = 0; i < k; ++i ) {
        ans[i] = v1[i];
    }
    int pos = n - 1;
    for (int i =  0, x; i < n - k ; ++i) {
        cin >> x;
        ans[pos] = x;
        pos--;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
