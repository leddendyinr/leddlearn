#include<iostream>
using namespace std;
int main(){
	int x = 5,y = 10,a = 0,b = 20;
	bool b1,b2,b3;
	b1 = a <= x && x <= b;
	b2 = a == b || x == y;
	b3 = ! a || a > b;
	cout <<"b1Ϊ:"<<b1<<endl;
	cout <<"b2Ϊ:"<<b2<<endl;
	cout <<"b3Ϊ;"<<b3<<endl;
	return 0;
}
