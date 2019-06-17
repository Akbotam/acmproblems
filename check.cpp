#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
#define ll long long

      int b[101][101];
      int used[101];
      int cnt = 0;
      vector<int> vi;

     void dfs (int n, int c ){
        used[c] = 1;
        for (int i=1; i<=n; i++) {
            if (i==c) continue;
            if (b[c][i] == 1 && used[i]==0) {
                dfs(n, i);
            }
        }
        return;
        }

int main() {
    int n, m, u, v;
    int a[101];
    cin>>n;
    for (int i = 1; i<=n; i++)
        cin>>a[i];
    cin>>m;
    for (int i = 1; i<=m; i++){
        cin>>u>>v;
        b[u][v] = 1;
    }


    for (int i = 1; i<=n; i++) {
            cnt = 0;
        dfs(n, i);
        for (int j =1; j<=n; j++) {
            if (used[j] == 0)
                cnt++;
        }
        vi.push_back(n-cnt);
    }







return 0;
}
