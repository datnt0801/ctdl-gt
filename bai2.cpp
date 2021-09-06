#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k,t;
	cout<<"\nNhap do dai chuoi n: ";
	cin>>n;
	cout<<"\nNhap he co so k: ";
	cin>>k;
	t = pow(k,n);
	cout<<"so cau hinh: "<<t<<endl;
	int a[n];
	cout<<"(";
	for(int i = 1; i <=n;i++){
		a[i] = 0;
		if(i==n){
			cout<<a[i];
			break;
		}
		cout<<a[i]<<";";
	}
	cout<<")"<<endl;
	
	while(t>1){
		for(int i = n; i > 0; i--){
			if(a[i]<k-1){
				a[i]++;
				break;
			}
			else{
				a[i]=0;
				continue;
			} 
		}
		
		cout<<"(";
		for(int i = 1;i <=n;i++){
			if(i==n){
				cout<<a[i];
				break;
			}
			cout<<a[i]<<";";
		}
		cout<<")"<<endl;
		
		t--;
	}
	
}
