#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[10];
	cin.getline(str,100);
	int len = strlen(str);
	cout << len;
	return 0;
}
