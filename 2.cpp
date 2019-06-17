#include <iostream>
#include <set>
#include <map>
#include <vector>




using namespace std;

#define sz(arr) (int)arr.size()
#define all(x) (x).begin(),(x).end()
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
#define y1 Emilia
#define forit(s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it ++)


#define N 1111
#define system ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = (int)1e9;
const int mod = inf + 7;

int t, k;
int arr[N], lstl[N], lstu[N], nxtl[N], nxtu[N], dp[N];

void solve(int test){
    cin >> k;
    for(int i = 0; i <= k; ++i) cin >> arr[i];
    for(int i = 0; i <= k; ++i){
        lstl[i] = -1, lstu[i] = -1;
        nxtl[i] = k +1, nxtu[i] = k+1;
    }
    for(int i = 0; i <= k; ++i){
        for(int j = 0; j < i; ++j){
            if(arr[j] < arr[i]){
                lstl[i] = j;
            }
        }
        for(int j = 0; j < i; ++j){
            if(arr[j] > arr[i]){
                lstu[i] = j;
            }
        }
        for(int j = i + 1; j <= k; ++j){
            if(arr[j] < arr[i]){
                nxtl[i] = j;
                break;
            }
        }
        for(int j = i + 1; j <= k; ++j){
            if(arr[j] > arr[i]){
                nxtu[i] = j;
                break;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= k; ) {
        int best = k + 1;
        for(int j = i; j <= k; ++j) {
            if(lstl[j] >= i) best = min(best, nxtl[j]);
            if(lstu[j] >= i) best = min(best, nxtu[j]);
        }
        if(best <= k) ans++;
        else ans--;
        i = best;
    }
    cout << ans << "\n";
}
int main(){
    system
    cin >> t;
    for(int i = 1; i <= t; ++i){

       cout<<"Case"<<" "<<"#"<<i<<":"<<" ";
       solve(i);

    }
    return 0;
}
