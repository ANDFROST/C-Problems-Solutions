#include <bits/stdc++.h>
using namespace std;
int N,r;
const unsigned int M = 1000000007; 
int main(){
	cin>>N;
	r=1;
	for(int i=0;i<N;i++){
		r=r+r;
		r=r % M;
	}
	cout<<r%M;
}
