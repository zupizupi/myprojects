#include <iostream>
#include <map>
using namespace std;
void latin(char array []);
void  cipherlol(char a [],int k,map<char,char>& mapa);

int main(){
    int k;
    cin>>k;
    string s;
    cin >> s;
    map<char,char> letters;
    char  normal [26];

    latin(normal);
    cipherlol(normal,k,letters);

    string c;
    for (int i = 0; i <s.size(); i++)
    {
         c += letters[s[i]];
        
        
    }

    cout << c;
    return 0;
}
void latin(char array []){
    int n = 0;
    for (int i = 97;i < 123; i++)
    {
        array[n] = i;
        n++;
    }
}
void  cipherlol(char a [],int k,map<char,char>& mapa){
    for (int i = 0; i < 26; i++)
    {
         mapa[a[i]] = a[(i+k)%26];
         
    }
}
