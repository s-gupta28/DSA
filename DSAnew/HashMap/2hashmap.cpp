#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{1, "one"},
           {2, "two"}, {3, "three"}};

    cout << m.begin()->first << ": " <<
      m.begin()->second << endl;
    cout << (--m.end())->first << ": "
      << (--m.end())->second;

    return 0;
}