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
	cout<<"Enter the number of rows for the PASCAL triangle "<<endl;
	int n ;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<fact_by_fun(i)/(fact_by_fun(i-j)*fact_by_fun(j))<<" ";
		}
		cout<<endl;
	}
	
}
