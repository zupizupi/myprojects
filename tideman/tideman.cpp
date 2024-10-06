#include <iostream>
using namespace std;
void rank1( int clarapoints,int bobpoints,int charliepoints);
void rank2(int clarapoints,int bobpoints,int charliepoints);
void rank3(int clarapoints,int bobpoints,int charliepoints);
int main(){
    int number = 0;
    int clarapoints;
    int bobpoints;
    int charliepoints;
    cout << "candidates:" << " " << "Clara" << " " << "Bob" << " " << "Charlie" <<'\n';
    cout << "Number of voters:";
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        rank1(clarapoints,bobpoints,charliepoints);
        rank2(clarapoints,bobpoints,charliepoints);
        rank3(clarapoints,bobpoints,charliepoints);
    }
    if (clarapoints > bobpoints && clarapoints >charliepoints)
    {
        cout << "Clara won";
    }
    else if(bobpoints > charliepoints && bobpoints >clarapoints){
        cout << "Bob won";
    }
    else if(charliepoints >> clarapoints&&charliepoints > bobpoints){
        cout << "Charlie won";
    }   
    else {
        cout << "tie";
    }
}
void rank1(int clarapoints,int bobpoints,int charliepoints){
    string choice;
        cout << "Rank 1:";
        cin >> choice;
        if (choice.compare("Clara")||choice.compare("clara") == 0)
        {
            clarapoints += 3;
        }
        if (choice.compare("Bob")||choice.compare("bob") == 0)
        {
            bobpoints += 3;
        }
        if (choice.compare("Charlie")||choice.compare("charlie") == 0)
        {
            charliepoints += 3;
        }
}
void rank2(int clarapoints,int bobpoints,int charliepoints){
    string choice;
        cout << "Rank 2:";
        cin >> choice;
        if (choice.compare("Clara")||choice.compare("clara") == 0)
        {
            clarapoints += 2;
        }
        if (choice.compare("Bob")||choice.compare("bob") == 0)
        {
            bobpoints += 2;
        }
        if (choice.compare("Charlie")||choice.compare("charlie") == 0)
        {
            charliepoints += 2;
        }
}
void rank3(int clarapoints,int bobpoints,int charliepoints){
    string choice;
        cout << "Rank 3:";
        cin >> choice;
        cout << "\n";
        if (choice.compare("Clara")||choice.compare("clara") == 0)
        {
            clarapoints += 1;
        }
        if (choice.compare("Bob")||choice.compare("bob") == 0)
        {
            bobpoints += 1;
        }
        if (choice.compare("Charlie")||choice.compare("charlie") == 0)
        {
            charliepoints += 1;
        }
}