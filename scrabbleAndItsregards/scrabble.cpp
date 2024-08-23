#include <iostream>
#include <map>
using namespace std;
void latin(char array[]){
    int n = 0;
    for ( int i = 97;i  < 124; i++)
    {
       array[n] = i;
       n++;
    }
}
int main(){
    map<char,int> aboba;//letters and prices
    string f;//choice of first player
    string s;//choice of second player
    int fcount = 0;//1st player points
    int scount = 0;//2nd player points
    char letters[26];// english alphabet 
    latin(letters);
    cout<<"first player:"<<"\n";
    cin>>f;
    int flength = f.size();// length of first choice word
    cout<<"second player:"<<"\n";
    cin>>s;
    int slength = s.size();// length of second choice word
    aboba[letters[0]] = 1;
    aboba[letters[1]] = 3;
    aboba[letters[2]] = 3;
    aboba[letters[3]] = 2;
    aboba[letters[4]] = 1;
    aboba[letters[5]] = 4;
    aboba[letters[6]] = 2;
    aboba[letters[7]] = 4;
    aboba[letters[8]] = 1;
    aboba[letters[9]] = 8;
    aboba[letters[10]] = 4;
    aboba[letters[11]] = 1;
    aboba[letters[12]] = 3;
    aboba[letters[13]] = 1;
    aboba[letters[14]] = 1;
    aboba[letters[15]] = 3;
    aboba[letters[16]] = 10;
    aboba[letters[17]] = 1;
    aboba[letters[18]] = 1;
    aboba[letters[19]] = 1;
    aboba[letters[20]] = 1;
    aboba[letters[21]] = 4;
    aboba[letters[22]] = 4;
    aboba[letters[23]] = 8;
    aboba[letters[24]] = 4;
    aboba[letters[25]] = 10;
    for (int i = 0; i < f.size(); i++)
    {
        for (auto& it : aboba)
        {
            
            if(it.first == f[i])
            {
                fcount+=it.second;
            }
        }
    }
     for (int i = 0; i < s.size(); i++)
    {
        for (auto& it : aboba)
        {
            if(it.first == s[i])
            {
                scount+=it.second;
            }
        }
    }
    if (fcount>scount){
        cout<<"first player won,"<<fcount;
    }
    else if(fcount<scount){
        cout<<"second player won,"<<scount;
    }
    else if(fcount==scount){
        cout<<"tie";
    }
}