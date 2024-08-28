#include <iostream>
#include <map>
using namespace std;

void latin(char array[]);
void cipherlol(char a[], int k, map<char, char>& mapa);

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, char> letters;
    char normal[26];
    
    latin(normal);
    cipherlol(normal, k, letters);

    string c; // Correctly define c as a string
    for (int i = 0; i < s.size(); i++) {
        c += letters[s[i]]; // Append mapped characters to c
    }

    cout << c << endl; // Output the cipher text
    return 0;
}

void latin(char array[]) {
    int n = 0;
    for (int i = 97; i < 123; i++) { // Limit is 123 (for 'z')
        array[n] = i;
        n++;
    }
}

void cipherlol(char a[], int k, map<char, char>& mapa) {
    for (int i = 0; i < 26; i++) {
        int index = (i + k) % 26; // Correctly handle the shift using modulo
        mapa[a[i]] = a[index];    // Map each character in normal array to its cipher counterpart
    }
}
