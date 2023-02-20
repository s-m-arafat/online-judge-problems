#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string modifyWord(string word) {
    unordered_map<char, int> freq;
    // Count frequency of each letter
    for (char c : word) {
        freq[c]++;
    }
    // Find most common frequency
    int maxFreq = 0;
    char maxFreqChar;
    for (auto f : freq) {
        if(f.second>maxFreq){
            maxFreq = f.second;
            maxFreqChar = f.first;
        }
    }
    // Create a set of characters that have the most common frequency
    unordered_map<char, bool> maxFreqChars;
    for (auto f : freq) {
        if (f.second == maxFreq) {
            maxFreqChars[f.first] = true;
        }
    }
    // Replace each letter that has a different frequency with a letter that has the most common frequency
    for (int i = 0; i < word.length(); i++) {
        if (freq[word[i]] != maxFreq) {
            char min_change_char = word[i];
            int min_change = abs(maxFreq - freq[word[i]]);
            for (auto f : freq) {
                if(f.first != word[i] && !maxFreqChars[f.first]){
                    if(abs(maxFreq - f.second) < min_change){
                        min_change = abs(maxFreq - f.second);
                        min_change_char = f.first;
                    }
                }
            }
            word[i] = min_change_char;
        }
    }
    return word;
}

int main() {
    string words[] = {"hello", "codeforces", "eevee", "appall"};
    int n = sizeof(words) / sizeof(words[0]);
    for (int i = 0; i < n; i++) {
        cout << modifyWord(words[i]) << endl;
    }
    return 0;
}
