#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string k; cin >> k;

  k = k.substr(2);

  int numerator, denominator;
  if (k.length() == 1 || k[0] != k[k.length()-1]) {
    numerator = stoi(k);
    denominator = pow(10, k.length());
  } else {
    numerator = stoi(k);
    denominator = 0;
    for (size_t i = 0; i < k.length(); i++)
      denominator = (denominator * 10) + 9;
  }

  int commonDivisor = gcd(numerator, denominator);
  numerator /= commonDivisor;
  denominator /= commonDivisor;

  cout << "YES\n";
  cout << numerator << " " << denominator << "\n";

  return 0;
}