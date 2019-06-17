  #include <algorithm>
  #include <iostream>
  #include <cstring>
  #include <cstdlib>
  #include <string>
  #include <vector>
  #include <cstdio>
  #include <cmath>


  using namespace std;
  #define sz(a) (int)a.size()
  #define vi vector <int>
  #define pb push_back
  #define mp make_pair
  #define ll long long
  #define sc scanf
  #define pf printf
  const int inf = (int)1e9;
  const int mod = inf + 7;
  const double eps = 1e-9;
  const double pi = acos(-1.0);
  int n, m;
  char a[2222][2222];
  int main(){
    int hh, m, h, d, c, n;
    cin >> hh >> m;
    cin >> h >> d >> c >> n;
    double j = h*1.0/n*1.0;
    if (int (j) != j){
      j = int (j) + 1;
    }
    if (hh >= 20){

       double res = (c* 0.8) * j;
printf ("%.4f\n", res);

      return 0;
    }
    double ans = c * j;
    int mm = (60 - m) + ((19 - hh) * 60);

    h += (mm * d);

    double l = h*1.0/n*1.0;
    if (int (l) != l){
      l = int (l) + 1;
    }
    double ans2 = (c * 0.8) * l;
    double f = min (ans , ans2 );
    printf ("%.4f\n", f );

    return 0;
  }
