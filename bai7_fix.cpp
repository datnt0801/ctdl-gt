#include<iostream>
using namespace std;

int n,l,r,a[100],b[100];
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

void anhXaDanXen(int a[],int b[],string A[],string B[],string C[]){
	for(int i = 0; i <= n; i++){
		C[2*i] = A[a[i]];	//c = 0 2 4 6 8 10
		if(2*i==10) break;	//i = 0 1 2 3 4 5
		C[2*i+1] = B[b[i]];	//c = 1 3 5 7 9
	}
	cout<<"xong";
}

void print(string C[]){
	for(int i = 1;i <= 2*n+1;i++) cout<<C[i];
	cout<<endl;
}

void print(int a[]){
	cout<<"(";
	for(int i = 1; i <= n; i++){
		cout<<a[i];
	}
	cout<<")"<<endl;
}


int main(){
	cout<<"Nhap n: ";
	cin>>n;
	
	a[n+1],b[n+1];
	string A[n+1],B[n+1],C[2*n+1];
	
	khoiTao(a);
	khoiTao(b);

	for(int i = 1;i <= n; i++){
		fflush(stdin);
		cout<<"Nhap ten nam: ";
		getline(cin,A[i]);
		cout<<"Nhap ten nu: ";
		fflush(stdin);
		getline(cin,B[i]);
	}
	
	while(check!=0){
		anhXaDanXen(a,b,A,B,C);
		print(C);
		print(a);
		print(b);
		sinh(a);
		check = 1;
		sinh(b);
	}
}
