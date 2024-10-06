#include <iostream>
using namespace std;

void rank1(int &clarapoints, int &bobpoints, int &charliepoints);
void rank2(int &clarapoints, int &bobpoints, int &charliepoints);
void rank3(int &clarapoints, int &bobpoints, int &charliepoints);

int main() {
    int number = 0;
    int clarapoints = 0;
    int bobpoints = 0;
    int charliepoints = 0;

    cout << "Candidates: Clara, Bob, Charlie" << '\n';
    cout << "Number of voters: ";
    cin >> number;

    for (int i = 0; i < number; i++) {
        rank1(clarapoints, bobpoints, charliepoints);
        rank2(clarapoints, bobpoints, charliepoints);
        rank3(clarapoints, bobpoints, charliepoints);
    }

    if (clarapoints > bobpoints && clarapoints > charliepoints) {
        cout << "Clara won";
    } else if (bobpoints > charliepoints && bobpoints > clarapoints) {
        cout << "Bob won";
    } else if (charliepoints > clarapoints && charliepoints > bobpoints) {
        cout << "Charlie won";
    } else {
        cout << "It's a tie";
    }

    return 0;
}

void rank1(int &clarapoints, int &bobpoints, int &charliepoints) {
    string choice;
    cout << "Rank 1: ";
    cin >> choice;

    if (choice.compare("Clara") == 0 || choice.compare("clara") == 0) {
        clarapoints += 3;
    } else if (choice.compare("Bob") == 0 || choice.compare("bob") == 0) {
        bobpoints += 3;
    } else if (choice.compare("Charlie") == 0 || choice.compare("charlie") == 0) {
        charliepoints += 3;
    }
}

void rank2(int &clarapoints, int &bobpoints, int &charliepoints) {
    string choice;
    cout << "Rank 2: ";
    cin >> choice;

    if (choice.compare("Clara") == 0 || choice.compare("clara") == 0) {
        clarapoints += 2;
    } else if (choice.compare("Bob") == 0 || choice.compare("bob") == 0) {
        bobpoints += 2;
    } else if (choice.compare("Charlie") == 0 || choice.compare("charlie") == 0) {
        charliepoints += 2;
    }
}

void rank3(int &clarapoints, int &bobpoints, int &charliepoints) {
    string choice;
    cout << "Rank 3: ";
    cin >> choice;

    if (choice.compare("Clara") == 0 || choice.compare("clara") == 0) {
        clarapoints += 1;
    } else if (choice.compare("Bob") == 0 || choice.compare("bob") == 0) {
        bobpoints += 1;
    } else if (choice.compare("Charlie") == 0 || choice.compare("charlie") == 0) {
        charliepoints += 1;
    }
}
