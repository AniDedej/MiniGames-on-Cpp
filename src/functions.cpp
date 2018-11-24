#include <functions.h>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

void removeCharsFromString(string &str, string charsToRemove) {
   for (size_t i = 0; i < charsToRemove.length(); i++) {
      str.erase(remove(str.begin(), str.end(), charsToRemove[i]), str.end());
   }
}

bool is_anagram(string str1, string str2) {
  sort(str1.begin(), str1.end()); // sort the first string
  sort(str2.begin(), str2.end()); // sort the last string
  return str1 == str2; // return 0 if is equal
}
