#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    bool good = false;
    pair<int, int> arr[100001];
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>a>>b;
        arr[i] = make_pair(a, b);
    }
    sort(arr, arr+n);
    for(int i = n-2; i>=0; i--){
        if(arr[i].second>arr[i+1].second) {
            good = true;
        }
    }
    if (good==false) {
        cout<<"Poor Alex";
    }
    else {
        cout<<"Happy Alex";
    }

return 0;
}
