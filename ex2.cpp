#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;
long long gen() 
{ 
    static int i = -1; 
    i++;

    long long res = 1;
    for (int j = 1; j <= i; j++) {
    	res *= i;
    }
    return res;
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