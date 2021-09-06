#include<iostream>
using namespace std;

int n,l,r,a[100];
int check = 1;
void khoiTao(int a[]){
	for(int i = 0; i <=n;i++) a[i]=i;
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

void print(int a[]){
	cout<<"(";
	for(int i = 1; i <= n; i++){
		cout<<a[i];
	}
	cout<<")"<<endl;
}

int main(){
	cin>>n;
	int a[n+1];
	khoiTao(a);
	while(check!=0){
		print(a);
		sinh(a);
	}
}
