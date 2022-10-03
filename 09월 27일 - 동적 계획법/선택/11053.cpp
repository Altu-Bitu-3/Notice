#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// �ð� ���⵵ O(n^2)
int solution(int n, vector<int>& arr) {
    vector<int> dp(n, 1);
    int ans = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) { //�����ϴ� ������
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]); //���� ���� ����
    }
    return ans;
}

int main() {
    int n;

    //�Է�
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //���� & ���
    cout << solution(n, arr);

}