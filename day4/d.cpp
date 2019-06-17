#include <map>
#include <iostream>
#include <vector>

using namespace std;
map<int, bool> mm;

int main() {
    int n, x, m, max = 0;
    cin >> n >> m;
    for(int i = 0; i < n;++i)
    {
        cin >> x;
        mm[x] = true;
    }
    vector<int> v;
    for(int i = 1; i <= m; i++){
        if(mm[i] == false && m > 0){
            v.push_back(i);
            m -= i;
        }
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
return 0;
}
