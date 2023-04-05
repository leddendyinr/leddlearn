#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if(num%2==0){
		cout<<num<<"为偶数"<<endl;
	}
	if(num%2!=0){
		cout<<num<<"为奇数"<<endl;
	}
	return 0;
}
