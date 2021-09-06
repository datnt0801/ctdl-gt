#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"Nhap do dai xau nhi phan: ";
	cin >> n;
	int a[n];
	
	for(int i = 1;i<=n;i++){
		a[i]=0;
		cout<<a[i];
	}
	cout<<endl;
	
	for(int c = 1; c < pow(2,n); c++){
		
		for(int i = n; i>0; i--){
			if(a[i] == 0){
				a[i] = 1;
				break;
			}
			else{
				a[i]=0;
			} 	
		}
		
		for(int i = 1; i<=n; i++){
			cout<<a[i];
		}
		cout<<endl;	
	}
}
