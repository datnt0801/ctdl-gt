#include<iostream>
using namespace std;

int n,a[100],x;

void print(int a[],int n){
	for(int i = 1; i<=n;i++)
		cout<<a[i];
	cout<<endl;
}

void deQuyQuayLui(int x){
	for(int i = 0;i<=1;i++){
		a[x] = i;
		if(x==n){
			print(a,n);
		}
		else{
			deQuyQuayLui(x+1);
		}
	}
}


int main(){
	cout<<"Nhap n: ";
	cin>>n;
	deQuyQuayLui(1);
	
}
