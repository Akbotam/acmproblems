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
int used[1000];
stack<int> st;
int main() {
    string s, ans = "";
    cin >> s;
    int n = 3;
    while (1) {
        if (n* n >= 100){
            break;
        }
        used[n * n] = 1;
        n++;
    }
    int pos = 1;
    if (s.size() < 2) {
       for (int i = s.size() -1; i >= 0; --i)
        cout << s[i];
        return 0;
    }
    st.push(s[0] - '0');
    while (pos != s.size()) {
        if (!st.empty()) {
            //cout << st.top() << endl;
            if (used[(st.top() * 10 + s[pos] -'0')]) {
                //cout << (st.top() * 10 + s[pos] -'0') << endl;
                pos++;
                st.pop();
            }
            else {
                st.push(s[pos] -'0');
                pos++;
            }
        }
        else {
                st.push(s[pos] -'0');
                pos++;
        }
    }
    if (st.empty())
        return cout << "Stack is empty", 0;
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}
