#include<iostream>
using namespace std;
int main(){
	int arr[41] = {};
	int n;
	cin>>n;
	arr[1] = 0;
	arr[2] = 1;
	if(n!=1&&n!=2)
		for(int i = 3;i<=n;i++){
			arr[i] = arr[i-1]+arr[i-2];	
		}
		cout<<arr[n];
		return 0;
}
