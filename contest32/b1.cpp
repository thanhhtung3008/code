#include <iostream>
#include <vector>
#define int long long
using namespace std;
int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
pair<int, int> calculateSequence(int N)
{
    vector<int> sequence;
    int totalSum = 0;
    sequence.push_back(10);
    totalSum += 10;

    for (int i = 2; i <= N; ++i)
    {
        int newTerm = digitSum(sequence[i - 2]) + i;
        newTerm %= 100;
        sequence.push_back(newTerm);
        totalSum += newTerm;
    }

    return make_pair(sequence[N - 1], totalSum);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    if (N >= 1 && N <= 100000000000000)
    {
        auto result = calculateSequence(N);
        cout << result.first << endl;
        cout << result.second << endl;
    }
    return 0;
}
