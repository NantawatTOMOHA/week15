#include <iostream>
#include <string.h>
using namespace std;
unsigned int ch[4] = {0,0,0,0};
void calcu(unsigned int, unsigned int, unsigned int, unsigned int,char);
struct NEW
{
	string data;
	char data2[50];
	char a = 0;
		
};
NEW N;
int main()
{
	
	
	calcu(ch[0],ch[1],ch[2],ch[3],N.a);
}

void calcu(unsigned int k, unsigned int y, unsigned int o, unsigned int j,char g) {
	while (g!=89) {
		cin >> N.data;
		for (int i = 0; i < N.data.size(); i++)
		{

			if (N.data[i] != 66 && N.data[i] != 98) {

				N.data2[j] = N.data[i];
				j = j + 1;
				
			}
			else if (N.data[i] == 66 || N.data[i] == 98) {
				N.data2[j] = ' ';
				j = j + 1;
				o = o + 1;
			}
		}
		cout << "Confrim or Retry"<<endl;
		cout << "(Y/N)" ;
		cout << "::" << endl;
		cout << ":: ";
		cin >> g;
		if (g == 78)
		{
			for (int i = 0; i < N.data.size(); i++)
			{

				N.data2[i] = ' ';

			}
			int a = N.data.size();
			for (int i = 0; i < a; i++)
			{

				N.data[a] = ' ';

			}
			j = 0;
		}
		if (g != 78 && g != 89)
		{
			break;
		}
		
		
	}
	if (g == 89) {
		cout << "DATA::" << N.data2 << endl;
		cout << "NUMBER OF LETTER B::" << o;
	}
	if (g != 78 && g != 89) {
		cout << "++++ERROR+++++";
	}
}