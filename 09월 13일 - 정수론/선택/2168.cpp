#include<iostream>

using namespace std;

//�ִ������� ���ϴ� �Լ�(��Ŭ���� ȣ����)
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	int n, m;
	cin >> n >> m;
	cout << n + m - gcd(n, m);
}