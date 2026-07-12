#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> num;
  for (int i = 0; i < n; i++) {
    int value;
    cin >> value;
    num.push_back(value);
  }

  vector<int> ans;
  ans.push_back(num[0]);

  for (int j = 1; j < n; j++) {
    if (num[j] < num[j - 1]) {
      ans.push_back(num[j]);
    }
    ans.push_back(num[j]);
  }

  cout << ans.size() << "\n";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
