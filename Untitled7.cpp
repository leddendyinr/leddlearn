#include<iostream>
using namespace std;
int main(){	
	double score,grade;
	cin>>score,grade;
	if(score > 90){
		if(grade > 75){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}else{
		cout<<"NO";
	}
	return 0;
}
