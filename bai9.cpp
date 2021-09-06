#include<iostream>
using namespace std;

int check = 1;
string s;
int a[100],n,l,r;

void khoiTao(int a[]){
	for(int i = 0; i <= n; i++){
		a[i] = i;
	}
}

void sinh(int a[]){
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
				break;
			}
			i--;
		}
}

void print(int a[],string s){
	for(int i = 1; i <= n; i++){
		cout<<s.at(a[i]-1);
	}
	cout<<endl;
}

int main(){
	cout<<"Nhap: ";
	fflush(stdin);
	getline(cin,s);
	n = s.length();
	khoiTao(a);
	while(check!=0){
		print(a,s);
		sinh(a);
	}
}
