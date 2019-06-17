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
vector <vector <int > > v;
bool cmp (vector <int> a, vector <int> b) {
    ll sum = 0, sum2 = 0;
    for (int i = 0; i < a.size(); ++i) {
        sum += a[i];
    }
    for (int i = 0; i  < b.size(); ++i) {
        sum2 += b[i];
    }
    if (sum2 > sum)
        return true;
    else if (sum > sum2)
        return false;
    else {
        if (a.size() > b.size())
            return false;
        else if (b.size () > a.size() ) return true;
        else {
            for (int i = 0; i < a.size(); ++i) {
                if (a[i] > b[i])
                    return false;
                else if (a[i] < b[i])
                    return true;
            }
            return true;
        }
    }

}
int main() {
    int n, m, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        vector <int> cur;
        for (int j = 0; j < m; ++j) {
            cin >> x;
            cur.push_back(x);
        }
        v.push_back(cur);
    }
    sort (v.begin(), v.end(), cmp);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < v[i].size(); ++j)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}

