#include <iostream>

using namespace std;

/*
����
� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. ���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� 1,000���� �۰ų� ���� �ڿ��� N�� �־�����.

���
ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.
*/

int hansu(int input);

int main()
{
	int max;
	
	cin >> max;

	cout << hansu(max);

	return 0;
}

int hansu(int input)
{
	int count = 0;
	int buf, cha;
	int i_buf;

	for (int i = 1; i <= input; i++)
	{
		if (i / 10 == 0)
		{
			count++;
			continue;
		}
		i_buf = i / 10;

		buf = i_buf % 10;
		cha = buf - (i % 10);

		while (true)
		{
			if (i_buf / 10 == 0)
			{
				count++;
				break;
			}
				
			buf = (i_buf / 10) % 10;

			if (cha != (buf - (i_buf % 10)))
			{
				break;
			}
			i_buf /= 10;
		}
	}

	return count;
}