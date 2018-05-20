#include<iostream>
#include<string>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	string s;
	int num;
	getline(cin, s);

	const char* pstr = s.c_str();

	char c[100];
	memcpy(c, pstr, s.length());

	char* res = strtok(c, ",");
	int n = stoi(res);

	int sum = n;

	while (res != NULL) {
		res = strtok(NULL, ",");
			if (res == NULL) break;
		num = stoi(res);
		sum += num;
	}
	cout << sum << endl;
	

}