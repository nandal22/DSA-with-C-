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
	int fact;
	cout<<"Enter the number for factorial...."<<endl;
	cin>>fact;
	cout<<fact_by_fun(fact);
}
