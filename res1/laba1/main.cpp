#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	//�������� ���� ������
	short sh = 358;//2 �����, -2^15..2^15-1
	unsigned short sh1 = 123;//2 �����, 0..2^16-1
	int n = -7;//4 �����, -2^31...2^31-1
	unsigned int in1 = 7;//4 ����,0..2^32-1
	long long ll = 8969;//8 ����, -2^63..2^63-1
	unsigned long long ll1 = 34567;//8 ����,0...2^64-1
	double dbl = 48.89678;//15 �������� ����
	float ft = 2.456;//7 �������� ����

	return 0;
}
