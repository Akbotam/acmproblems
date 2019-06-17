#include <iostream>
#include <set>
#include <algorithm>
#include <cstdio>

using namespace std;

  int fib[1001];
  bool b[1001];

   void ff  () {
   fib[0] = 1;
   fib[1] = 1;
   int i = 2;
   b[1] = 1;
   while (1){
        fib[i] = fib[i-1] + fib[i-2];
        if (fib[i] >= 1000){
         break;
        }
        else
         b[fib[i]] = 1;
         i++;
    }
  }
  int main(){
    int n;
    cin >> n;
    ff();
    for (int i = 1; i <= n; ++i) {
     if (b[i])
      cout << "O";
     else
      cout << "o";
    }
    cout << endl;
    return 0;
  }
