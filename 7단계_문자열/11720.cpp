#include <iostream>
#include <string>

using namespace std;

/*
����
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

���
�Է����� �־��� ���� N���� ���� ����Ѵ�.
*/


int main()
{
	int sum = 0;
	short size;
	string input;

	cin >> size >> input;

	for(int i = 0; i < size; i++)
	{
		sum += int(input[i] - '0');
	}

	cout << sum << endl;

	return 0;
}