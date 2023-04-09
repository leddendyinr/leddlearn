#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[101];
	int n,sum = 0;
	cin.getline(a,101);
	n = strlen(a);
	for(int i = 0;i<n;i++){
		if(a[i]>= '0'&&a[i]<= '9'){
			sum++;
		}else{
			cout<<a[i];
		}
	}
	cout<<endl;
	cout<<sum<<endl;
	return 0;
}
