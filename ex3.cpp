#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;
bool issquare(int x) {
	for (int i = 1; i < 10; i++) {
		if (i * i == x) {
			return true;
		}
	}
	return false;
}
int main(){
		string n;
		cin>>n;
		stack<int> st;
		for(int i=0; i<n.size(); i++){
			if (!st.empty() && issquare(st.top() * 10 + n[i] - '0') ) {
				st.pop();
			} else {
				st.push(n[i] - '0');
			}
		}
		string answer = "";
		if (st.empty()) {
			cout << "Stack is empty";
		} else {
		while (!st.empty()) {
			answer += char('0' + st.top());
			st.pop();
		}
		cout << answer;
		}
}