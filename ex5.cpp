#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;

int main(){
	int n, m;
	int x;
	string cityname;
	cin>>n;
	map<string, int> city;
	int sum=0;
	for(int day=1; day<=n; day++){
		cin>>m;
		for(int i=0; i<m; i++){
			cin>>cityname>>x;
			sum = sum+x;
			city[cityname]+=x;
		}
	}
	for(auto c:city){
		cout<<c.first<<" "<<c.second*100.0/sum<<endl;

	}
}