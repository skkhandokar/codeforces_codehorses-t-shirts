#include <bits/stdc++.h>
using namespace std;

bool comparism(string n, string m) {
  if (n.size() == m.size()) {
    return n < m;
  }
  return n.size() < m.size();
}

int main() {
  int t;
  cin >> t;
  vector<string> p(t);
  for (int i = 0; i < t; i++) {
    cin >> p[i];
  }
  vector<string> c(t);
  for (int i = 0; i < t; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < t; j++) {
      if (p[i] == c[j]) {
        p[i] = "";
        c[j] = "";
        break;
      }
    }
  }
  sort(p.begin(), p.end(), comparism);
  sort(c.begin(), c.end(), comparism);
  int res = 0;
  for (int i = 0; i < t; i++) {
    if (p[i] != c[i]) {
      res++;
    }
  }
  cout << res << endl;
}
