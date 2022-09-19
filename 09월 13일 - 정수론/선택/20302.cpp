#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e5;

vector<int> prime(MAX + 1, 0); //�Ҽ� ��� ����
vector<int> exponent(MAX + 1, 0); //���� �������� �� �Ҽ��� ���� ����

//�Ҽ� ��� �����ؼ� �����ϴ� �Լ�
void isPrime() {
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i] != 0) {
            continue;
        }

        for (int j = i * i; j <= MAX; j += i) {
            if (prime[j] == 0) {
                prime[j] = i;
            }
        }
    }
}

//���μ������ؼ� ���� ����ϴ� �Լ�
void countExponent(int a, int cnt) {
    while (prime[a]) { //���μ�����, prime[a] = ���μ�
        exponent[prime[a]] += cnt; //������ ���ϱ��� cnt = 1 �̿��� ���� ����, �������� cnt = -1�� ���� ����
        a = a / prime[a];
    }
    exponent[a] += cnt; //������ ���� �Ҽ�
}

//������ ���� ��, ���μ��� ������ ���� �ִ��� �Ǵ� -> �ִٸ� ������ -> true ����
bool isRationalNumber() {
    for (int i = 2; i <= MAX; i++) {
        if (exponent[i] < 0) {
            return true;
        }
    }
    return false;
}

/**
 * [��Ʈ����]
 *
 * ���� ���μ������Ͽ� ��Ÿ�� �� �ְ�, ������ ������ ���μ��� �ϳ��� �����Ѵٸ� ������
 * ������ ������ * , / �� ����
 * ����, ������ ���Ĵ�� ����ϴ� �������� ���μ��� ������ ����Ͽ� ��������
 * ���μ����� ����� '����� ���μ�����' ���� ����
 * !����! ���� ������ �Ǵܿ����� ��ȣ�� ��� ���� -> ��� ����� �ؼ� �������
 * !����! 0�� �������� ��� ������ �����̹Ƿ� ����ó��
 */

int main() {
    int n, a;
    char c;

    isPrime();

    //�Է�
    cin >> n;
    cin >> a; //ó�� �� �̸� �Է�

    if (a == 0) { //ó�� �� 0 -> ��� �� 0 -> �����̹Ƿ� �ٷ� ��Ʈ���� ��� �� ����
        cout << "mint chocolate\n";
        return 0;
    }
    countExponent(abs(a), 1); //ó�� ���� ���ϱ�� ���

    //(���� + ��) ������ (n-1) �� �Է� + ����
    for (int i = 1; i < n; i++) {
        cin >> c >> a;

        if (a == 0) { // 0�� ���� -> ����� 0 -> �����̹Ƿ� �ٷ� ��Ʈ���� ��� �� ����
            cout << "mint chocolate\n";
            return 0;
        }

        if (c == '*') { //���ϱ��� -> ���� ����
            countExponent(abs(a), 1);
        }
        else { //�������� -> ���� ����
            countExponent(abs(a), -1);
        }
    }

    if (isRationalNumber()) { //�������� ���
        cout << "toothpaste\n";
    }
    else { //0 ���� ������ ���
        cout << "mint chocolate\n";
    }

    return 0;
}