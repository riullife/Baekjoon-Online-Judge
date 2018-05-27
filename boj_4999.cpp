//재환 목소리에서 a 개수 체크
//의사가 듣기 원하는 목소리에서 a 개수 체크
// 재환의 a개수 > 의사가 원하는 a 개수 -> go
// 재환의 a개수 < 의사가 원하는 a 개수 -> no

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string JHvoice;
	string DrWantVoice;
	int JHcnt = 0;
	int Drcnt = 0;
	getline(cin, JHvoice);
	getline(cin, DrWantVoice);

	for (int i = 0; i < JHvoice.length(); i++)
	{
		if (JHvoice[i] == 97) JHcnt++;
	}
	for (int i = 0; i < DrWantVoice.length(); i++)
	{
		if (DrWantVoice[i] == 97) Drcnt++;
	}

	if (JHcnt >= Drcnt) cout << "go" << endl;
	else if (JHcnt < Drcnt) cout << "no" << endl;

	return 0;

}
