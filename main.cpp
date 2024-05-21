#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, m;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  A = vl(n);
  for (auto&& x : A) {
    cin >> x;
  }

  cin >> m;
  auto ans = 0LL;
  while (0 < (m--)) {
    ll x;
    cin >> x;
    --x;
    ans += A[x];
  }

  cout << ans;

  return 0;
}