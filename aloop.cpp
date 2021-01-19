#include<iostream>
using namespace std;
/*int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i);j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i);j++){
			cout<<"  ";
		}
		for(int k=i;k>1;k--){
			cout<<k<<" ";
		}
		for(int l=1;l<=i;l++){
			cout<<l<<" ";
		}
		cout<<endl;
	}
}
/*int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i);j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}*/
/*int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i);j++){
			cout<<"  ";
		}
		for(int k=1;k<=n;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
}*/
/*int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){            //row + column is an odd number we print 1
				cout<<"1 ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}*/
/*int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int count =1;
		for(int j=1;j<=n+1-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}*/
/*int main(){
	int n,count =1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
}*/
