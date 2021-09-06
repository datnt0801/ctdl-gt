#include<iostream>
using namespace std;
int n,OChuaTien[100];

void khoiTao(int a[]){
	for(int i = 1; i <=n;i++){
		a[i] = 0;
	}
	a[1] = n;
}

void print(){
	for(int i = 1; i <= n; i++){
		cout<<OChuaTien[i];
	}
	cout<<endl;
}


int main(){
	int tien = 0;
	cout<<"Nhap n: ";
	cin>>n;
	khoiTao(OChuaTien);
	print();
	
	while(OChuaTien[1]!=1){
		for(int i = n; i > 0; i--){
			tien = tien + OChuaTien[i];
			if(OChuaTien[i]>1){
				OChuaTien[i] = OChuaTien[i]-1;
				tien = tien - OChuaTien[i];
				for(int j = i + 1; j <= n ;j ++){
					if(tien >= OChuaTien[i]){
						OChuaTien[j] = OChuaTien[i];
						tien = tien - OChuaTien[i];
					}
					else{
						OChuaTien[j] = tien;
						tien = 0;
					}
				}
				break;
			}
		}
		print();
	}
}

