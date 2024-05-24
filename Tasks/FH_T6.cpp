#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isValidCharacter(char c) {
    // Checks if the character is valid in an email address (alphanumeric or certain symbols)
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') || c == '.' || c == '-' || c == '_' || c == '@';
}

bool isValidEmail(const string& email) {
    // Validate the basic structure of the email address
    int at = email.find("@");
    if (at == string::npos || at == 0 || at == email.size() - 1) {
        return false;
    }
    int dot = email.rfind(".");
    if (dot == string::npos || dot <= at || dot == email.size() - 1) {
        return false;
    }
    return true;
}

int main() {
    ifstream file("input.txt");
    if (!file.is_open()) {
        cerr << "Unable to open file\n";
        return 1;
    }

    const int BUFFER_SIZE = 4096;
    char buffer[BUFFER_SIZE];
    string remaining;

    while (file.read(buffer, BUFFER_SIZE) || file.gcount() > 0) {
        int length = file.gcount();
        string chunk(buffer, length);
        chunk = remaining + chunk; // Append any remaining part from the previous buffer

        int pos = 0;
        while ((pos = chunk.find('@', pos)) != string::npos) {
            // Look for start of the email address
            int start = pos;
            while (start > 0 && isValidCharacter(chunk[start - 1]) && chunk[start - 1] != '@') {
                start--;
            }

            // Look for end of the email address
            int end = pos + 1;
            while (end < chunk.size() && isValidCharacter(chunk[end])) {
                end++;
            }

            if (isValidEmail(chunk.substr(start, end - start))) {
                cout << chunk.substr(start, end - start) << '\n';
            }

            pos = end;
        }

        // Ensure remaining does not exceed the size of the chunk
        if (chunk.size() > BUFFER_SIZE / 2) {
            remaining = chunk.substr(chunk.size() - BUFFER_SIZE / 2);
        } else {
            remaining = chunk;
        }
    }

    file.close();
    return 0;
}
