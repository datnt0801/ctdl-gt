#include<iostream>
using namespace std;
int main(){
	int n,k;
	
	cout<<"Nhap do dai danh sach: ";
	cin >> n;
	
	string b[n+1];
	for(int i = 1; i <= n; i++){
		fflush(stdin);
		getline(cin,b[i]);
	}
	
	cout<<"nhap so nguoi can chon: ";
	cin>>k;
	
	int a[n+1];
	
	cout<<"(";
	for(int i = 0;i<=k;i++){
		a[i]=i;
		if(i==0) continue;
		cout<<b[a[i]];
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
			cout<<b[a[i]];
			if(i==k) continue;
			cout<<",";
		}
		cout<<")"<<endl;
	}
}
