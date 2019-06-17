#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

#define all(x) (x).begin(),(x).end()
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
#define y1 Emilia
#define forit(s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it ++)


#define N 400400
#define dracarys ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = (int)1e9;
const int mod = inf + 7;

int n;

string bin(int x){
    string res = "";
    while(x){
        res += char((x % 2) + '0');
        x /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    dracarys
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        cout << bin(x) << "\n";
    }
    return 0;
}
