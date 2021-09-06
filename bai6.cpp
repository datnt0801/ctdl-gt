#include<iostream>
using namespace std;

void in(string s){
	for(int i = 0; i < s.length();i++) cout<<s.at(i);
}

int main(){
	int n,l,r;
	cout<<"Nhap so luong nguoi: ";
	cin>>n;
	int check=1;
	int a[n];
	string s[n+1];
	for(int i=1; i <= n; i++){
		fflush(stdin);
		getline(cin,s[i]);
	}

	
	for(int i = 0; i <=n;i++){
		a[i]=i;
		if(i==0) continue;
		cout<<s[a[i]];
		if(i==n) continue;
		cout<<";";
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
					in(s[a[k]]);
					if(k==n) continue;
					cout<<";";
				}
				cout<<endl;
				break;
			}
			i--;
		}
	}
	
}

