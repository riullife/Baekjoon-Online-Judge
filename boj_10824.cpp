// 자연수 a,b,c,d 입력
// ab,bc 붙인 수 만들기 a,b 와 c,d를 strnig으로 형변환 후 다시 int 로 변환하여 더한다.
// stoi() 했더니 컴파일 에러남 -> int 범위 넘어서 그럼
// stll()로 형변환
// ab+bc출력
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	string ab = to_string(a) + to_string(b);
	string cd = to_string(c) + to_string(d);

	long long value = stoll(ab) + stoll(cd);
	cout << value << '\n';
}
