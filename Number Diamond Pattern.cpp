#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number(for width of the diamond) "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int s=1;s<=i;s++){
			cout<<s;
		}
		for(int r=i-1;r>0;r--){
			cout<<r;
		}
		cout<<endl;
	}
	for(int i=n-1;i>0;i--){
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int s=1;s<=i;s++){
			cout<<s;
		}
		for(int r=i-1;r>0;r--){
			cout<<r;
		}
		cout<<endl;
	}
	return 0;
}
