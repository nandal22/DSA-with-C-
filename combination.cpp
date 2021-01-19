#include<iostream>
using namespace std;
int fact_by_fun(int n){
	
	int factorial = 1;
	for(int i=2;i<=n;i++){
		factorial = factorial * i;
	}
	return factorial;
}
int main(){
	cout<<"Enter the values of n and r "<<endl;
	int n , r;
	cin>>n>>r;
	int nCr ;
	nCr = fact_by_fun(n)/(fact_by_fun(n-r)*fact_by_fun(r));
	cout<<"The combination answer for the given values is = "<<nCr;
}
