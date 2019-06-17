#include <iostream>

using namespace std;

const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);
vector <int > level;
int dp[100],n, x;

int main() {
  int pos = 0;
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
   ll n;
        cin >> n;
        int maxx = -1;
        level.clear();
        for (int j = 0; j  < n; ++j) {
          cin >> x;
          level.pb(x);
        }
        if (n == 1){
          cout << level[0] << endl;
          continue;
        }
        for (int x = 2;  x <= n; x += 1) {
          for (ll i = 0; i < (1 << x); ++i) {
            ll sum = 0;
            for (ll j = 0; j  < x ; ++j) {
              if ((i & (1 << j)) > 0) {
                if ( (j + 1 < n) && (i & (1 << (j + 1))) > 0)
                {
                  sum = 0;
                  break;
                }
                sum += level[j];
              }
              if (sum > maxx){
                maxx = sum;
              }
            }

          }
        }
        cout << maxx << endl;



  }


  return 0;
}
