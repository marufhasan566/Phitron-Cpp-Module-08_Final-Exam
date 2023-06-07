#include <iostream>
#include <sstream>

using namespace std;

int main() {
  stringstream ss;
  string s;

  getline(cin, s);
  ss << s;

  string word = "Ratul";
  bool found = false;
  while (ss >> word) {
    if (word == "Ratul") {
      found = true;
      break;
    }
  }

  if (found) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
