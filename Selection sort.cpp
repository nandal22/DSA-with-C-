#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of element u have in your array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
		
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
