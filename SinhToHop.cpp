#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k;
	
	cout<<"Nhap do dai day: ";
	cin >> n;
	
	cout<<"nhap so phan tu cua tap con: ";
	cin>>k;
	
	int a[n];
	
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
