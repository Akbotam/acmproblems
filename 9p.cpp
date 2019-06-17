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

std::vector<int> v;
int n;
int main()  {
    cin >> n;
    for (int i  = 0, x; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    int pos = n - 1;
    for (int i = 0; i < n; ++i) {
        if (v[pos] == v[i])
            cout << "OK" << endl;
        else
            cout << "Instead of " << v[i] << " here was " << v[pos] << endl;
        pos--;
    }
    return 0;
}
