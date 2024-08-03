#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;

#define MAX_WORDS 1000
#define MAX_LENGTH 100

struct WordCount {
    string word;
    int count;
};

int findWordIndex(vector<WordCount>& words, const string& word) {
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].word == word) {
            return i;
        }
    }
    return -1;
}

int main() {
    string paragraph;
    vector<WordCount> wordCounts;
    
    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);

    char *cstr = new char[paragraph.length() + 1];
    strcpy(cstr, paragraph.c_str());
    
    char *token = strtok(cstr, " \n\t");
    while (token) {
        string word(token);
        for (char &ch : word) {
            ch = tolower(ch);
        }
        int index = findWordIndex(wordCounts, word);
        if (index == -1) {
            WordCount wc = {word, 1};
            wordCounts.push_back(wc);
        } else {
            ++wordCounts[index].count;
        }
        token = strtok(NULL, " \n\t");
    }
    
    delete[] cstr;

    cout << "Word frequencies:\n";
    for (const auto& wc : wordCounts) {
        cout << wc.word << ": " << wc.count << endl;
    }

    return 0;
}
