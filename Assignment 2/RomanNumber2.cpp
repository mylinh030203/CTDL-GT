#include <bits/stdc++.h>

using namespace std;

string ngan[4] = {"", "M", "MM", "MMM"};
string tram[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
string chuc[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX, XC"};
string donvi[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

int main() {
	int n;
	cin >> n;
	cout << ngan[n / 1000] + tram[(n % 1000) / 100] + chuc[(n%  100) / 10] + donvi[n % 10];
}