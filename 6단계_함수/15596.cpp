#include <iostream>
#include <vector>

using namespace std;

/*
C++, C++11, C++14, C++17, C++ (Clang), C++11 (Clang), C++14 (Clang), C++17 (Clang): long long sum(std::vector<int> &a);
a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭 (0 �� a[i] �� 1,000,000, 1 �� n �� 3,000,000)
���ϰ�: a�� ���ԵǾ� �ִ� ���� n���� ��
*/

long long sum(std::vector<int> &a);

int main()
{
	vector<int> vec = { 1, 2, 3, 4 };

	cout << sum(vec) << endl;

	return 0;
}

long long sum(std::vector<int>& a)
{
	long long l_sum = 0;

	for (int i = 0; i < a.size(); i++)
	{
		l_sum += a[i];
	}

	return l_sum;
}