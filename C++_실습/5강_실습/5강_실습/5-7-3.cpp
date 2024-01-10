#include <iostream>
using namespace std;
int main(void)
{
	/*
	유클리드 호제법을 이용한 두 수의 최대공약수와 최소공배수 구하기
	*/
	unsigned int num1, num2;
	unsigned int num1num2;
	cout << "두 자연수를 입력해주세요: ";
	cin >> num1 >> num2;

	num1num2 = num1 * num2;
	while (num2 != 0)
	{
		unsigned int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << "\n두 수 num1과 num2의 최대공약수: " << num1 << endl;
	cout << "\n두 수 num1과 num2의 최소공약수: " << (num1num2 / num1) << endl;
	return 0;
}