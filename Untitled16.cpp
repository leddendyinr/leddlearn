#include<iostream>
using namespace std;
int main(){
	int a[4][4] = {},b[4][4] = {};
	for(int i=1;i<=3;++i)
		for(int j=1;j<=3;++j){
			cin>>a[i][j];
			b[i][j] = a[i][j]%10;
		}
	for(int i=1;i<=3;++i){
		for(int j=1;j<=3;++j)
			cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=3;++i){
		for(int j=1;j<=3;++j)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
