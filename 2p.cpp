#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

long long gen()
{
    static int x = -1, i;
    x++;

    long long ans = 1;
    for (i = 1; i <= x; i++) {
    	ans *= x;
    }
    return ans;
}
int main(){
	int n;
	cin>>n;
	n++;
	vector <long long> answer(n);
	generate(answer.begin(), answer.end(), gen);

	for(int j=0; j<n; j++){
		cout<<answer[j] << " ";
	}
}
