#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of elements of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Unsorted array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
