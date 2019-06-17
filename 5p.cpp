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

using namespace std;
int main() {
    int n, m, x, sum = 0;
    string cname;
    map<string, int> city;
    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>m;
        for (int j = 0; j<m; j++){
            cin>>cname>>x;
            sum+=x;
            city[cname]+=x;
        }
    }

    for(auto c:city) {
        cout<<c.first<<" "<<c.second*100.0/sum<<endl;
    }
}









