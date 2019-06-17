#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;

int main(){
	int n;
	cin>>n;
	int z=0;
	int sum=0;
	int csum=0;
	int a1[n], a2[n], f[n], c[n];
	for(int i=0; i<n; i++){
		cin>>a1[i]>>a2[i]>>f[i]>>c[i];
	}
	for(int j=0; j<n; j++){
		z = (a1[j]+a2[j]+f[j])*c[j];
		sum += z;
	}
	for(int k=0; k<n; k++){
		csum += c[k];
	}
	double gpa;
	gpa=1.0*sum/csum/100.0;
	cout<<gpa;
	
}