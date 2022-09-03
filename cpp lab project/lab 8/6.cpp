#include <iostream>
using namespace std;

int main() {
   string text;
   getline(cin, text);

   char temp;
   for (int i = 0, len = text.length(); i < len/2; i++) {
      temp = text[i];
      text[i] = text[len-1-i];
      text[len-1-i] = temp;
   }

   cout << text << endl;
}
