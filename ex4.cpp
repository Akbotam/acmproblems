#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;
bool cmp(vector <int> a, vector<int> b) {
	int suma = 0;
	for (int i=0;i < a.size(); i++) {
		suma += a[i];
	}
		int sumb = 0;
	for (int j=0;j < b.size(); j++) {
		sumb += b[j];
	}
	if (suma < sumb) {
		return true;
	}
	if (suma > sumb) {
		return false;
	}
	if (a.size() < b.size()) {
		return true;
	}
	if (a.size() > b.size()) {
		return false;
	}
	if (a < b) {
		return true;
	}
	return false;
}
int main(){
	int n;
	cin >> n;
	vector <vector<int> > answer; 
	for (int i = 1; i <= n; i++) {
		int m;
		cin >> m;
		vector <int> a;
		for (int j = 1; j <= m; j++) {
			int x;
			cin >> x;
			a.push_back(x);
		}
		answer.push_back(a);
	}
	sort(answer.begin(), answer.end(), cmp);
	for (int i = 0; i < answer.size(); i++) {
		for (int j=0; j<answer[i].size(); j++) {
			cout <<answer[i][j] <<' '; 
		}
		cout <<endl;
	}
}