// Word Frequency Counter:
//    Develop a class to analyze a text document. Implement methods to count the frequency of each word in the document, find the most frequent word, and display the word frequency statistics.

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

class WordFrequencyCounter {
private:
    char** words;
    int* frequencies;
    int numWords;

    void parseText(const char* text) {
        const int MAX_WORDS = 1000;
        const int MAX_WORD_LENGTH = 100;
        words = new char*[MAX_WORDS];
        frequencies = new int[MAX_WORDS];
        numWords = 0;

        const char* wordStart = nullptr;
        int wordLength = 0;

        for (const char* ptr = text; *ptr; ptr++) {
            if(isalpha(*ptr)) {
                if(wordStart == nullptr) {
                    wordStart = ptr;
                }
                wordLength++;
            } else {
                if(wordStart) {
                    words[numWords] = new char[wordLength + 1];
                    strncpy(words[numWords], wordStart, wordLength);
                    words[numWords][wordLength] = '\0';
                    numWords++;
                    wordStart = nullptr;
                    wordLength = 0;
                }
            }
        }

        if(wordStart) {
            words[numWords] = new char[wordLength + 1];
            strncpy(words[numWords], wordStart, wordLength);
            words[numWords][wordLength] = '\0';
            numWords++;
        }

        for (int i = 0; i < numWords; i++) {
            frequencies[i] = 0;
        }
    }

public:
    WordFrequencyCounter(const char* text) {
        parseText(text);
    }

    void countWordFrequencies() {
        for (int i = 0; i < numWords; i++) {
            int count = 1;
            if(frequencies[i] != -1) {
                for (int j = i+1; j < numWords; j++) {
                    if(strcmp(words[i], words[j]) == 0) {
                        count++;
                        frequencies[j] = -1;    // Mark this word as counted
                    }
                }
                frequencies[i] = count;
            }
        }
    }

    const char* getMostFrequentWord() {
        int maxFrequency = -1;
        const char* mostFrequenctWord = nullptr;
        for (int i = 0; i < numWords; i++) {
            if(frequencies[i] > maxFrequency) {
                maxFrequency = frequencies[i];
                mostFrequenctWord = words[i];
            }
        }
        return mostFrequenctWord;
    }

    void displayFrequencies() {
        for (int i = 0; i < numWords; i++) {
            if(frequencies[i] != -1) {
                cout << words[i] << ": " << frequencies[i] << endl;
            }
        }
    }

    ~WordFrequencyCounter() {
        for (int i = 0; i < numWords; i++) {
            delete[] words[i];
        }
        delete[] words;
        delete[] frequencies;
        
    }
};


int main() {
    const char* text = "This is a test. This test is only a test.";
    WordFrequencyCounter counter(text);

    counter.countWordFrequencies();
    counter.displayFrequencies();

    const char* mostFrequentWord = counter.getMostFrequentWord();
    if(mostFrequentWord) {
        cout << "Most frequent word: " << mostFrequentWord << endl;
    } else {
        cout << "No words found in the text." << endl;
    }
    
    return 0;
}