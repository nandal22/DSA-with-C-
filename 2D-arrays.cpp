#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Our matrix is : "<<endl;;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int x;
	cin>>x;
	bool flag = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(arr[i][j]==x){
			cout<<"Element Found at "<<i<<" "<<j<<endl;
			flag = true;
		}	
		}
	}
	if(flag){
		
	}
	else{
		cout<<"Elememt Not found! ";
	}
	
}
