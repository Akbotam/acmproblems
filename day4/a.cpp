#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    int n, a, b;
    int c, d;
    vector <int> v;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
    }
    int max = 0;
    int min = 100001;
    for (int i = 0; i<v.size(); i+=2) {
        if (v[i] > max) {
            max = v[i];
            c = i;
        }
        if (v[i] < min){
            min = v[i];
            d = i;
        }
    }
    if (v[c+1]>v[d+1]) {
        cout<<"Poor Alex";
    }
    else {
        cout<<"Happy Alex";
    }
return 0;
}
