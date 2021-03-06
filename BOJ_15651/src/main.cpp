#include <iostream>
#include <vector>

using namespace std;

vector<int> nums{};

void solve(int N, int M) {
    if (0 == M) {
        for (const auto& v : nums)
        {
            cout << v << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i)
    {
        nums.push_back(i);

        solve(N, M - 1);

        nums.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    solve(N, M);

    return 0;
}