#include<iostream>
using namespace std;

int main(){
	int n,l,r;
	cin>>n;
	int check=1;
	int a[n];
	for(int i = 0; i <=n;i++){
		a[i]=i;
		if(i==0) continue;
		cout<<a[i];
	}
	cout<<endl;
	
	while(check!=0){
		int i = n;
		while(i > 0){
			if(i==1){
				check=0;
				break;
			}
			if(a[i]>a[i-1]){
				for(int j = n; j>i-1;j--){
					if(a[j]>a[i-1]){
						swap(a[j],a[i-1]);
						
						break;
					}
				}
				l=i;
				r=n;
				while(l<r){
					swap(a[l],a[r]);
					l++;
					r--;
				}
				
				for(int k = 1;k<=n;k++){
				cout<<a[k];
				}
				cout<<endl;
				break;
			}
			i--;
		}
	}
	
}
