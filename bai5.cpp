#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k;
	
	cout<<"Nhap do dai day: ";
	cin >> n;
	
	cout<<"nhap so phan tu cua tap con: ";
	cin>>k;
	
	int a[n+1];
	int b[n+1]={0};
	cout<<"(";
	for(int i = 1; i <= k; i++){
		b[i] = 1;
	}
	for(int i = 1; i <= n; i++){
		cout<<b[i];
	}
	cout<<")"<<endl;
	
	cout<<"(";
	for(int i = 0;i<=k;i++){
		a[i]=i;
		if(i==0) continue;
		cout<<a[i];
		if(i==k) continue;
		cout<<",";
	}
	cout<<")"<<endl;
	
	
	
	int i = k;
	while(i!=0){
		for( ; i > 0; i--){
			if(a[i]<n-k+i){
				a[i]++;
				for(int j = i + 1; j <= k; j++ ){
					a[j]=a[j-1]+1;
				}
				break;
			}
			else{
				continue;
			}
		}
		
		cout<<"(";
		for(int j = 1; j <= k;j++ ){
			b[a[j]] = 1;
		}
		for(int j = 1; j <= n;j++) cout<<b[j];
		cout<<")"<<endl;
		for(int j = 0;j<=n;j++) b[j] = 0;
		
		if(i == 0) break;
		else i = k;
		
		cout<<"(";
		for(int i = 1; i <= k; i ++){
			cout<<a[i];
			if(i==k) continue;
			cout<<",";
		}
		cout<<")"<<endl;
	}
	
	
}
