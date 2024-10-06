#include <iostream>
using namespace std;

// Function declarations
void displayCandidates();
void castVote(int& votesClara, int& votesAlice, int& votesJohn);
void showResults(int votesClara, int votesAlice, int votesJohn);

int main() {
    int votesClara = 0, votesAlice = 0, votesJohn = 0;
    int totalVoters, choice;
    
    cout << "Welcome to the Election System!" << endl;
    cout << "Enter the number of voters: ";
    cin >> totalVoters;
    
    // Voting process
    for (int i = 0; i < totalVoters; i++) {
        cout << "\nVoter " << i + 1 << " please cast your vote:\n";
        castVote(votesClara, votesAlice, votesJohn);
    }
    
    // Display results
    showResults(votesClara, votesAlice, votesJohn);

    return 0;
}

// Function to display candidates
void displayCandidates() {
    cout << "Candidates List:\n";
    cout << "1. Clara\n";
    cout << "2. Alice\n";
    cout << "3. John\n";
}

// Function to cast a vote
void castVote(int& votesClara, int& votesAlice, int& votesJohn) {
    int choice;
    
    displayCandidates();
    cout << "Enter the number corresponding to the candidate (1, 2, or 3): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            votesClara++;
            cout << "You voted for Clara!" << endl;
            break;
        case 2:
            votesAlice++;
            cout << "You voted for Alice!" << endl;
            break;
        case 3:
            votesJohn++;
            cout << "You voted for John!" << endl;
            break;
        default:
            cout << "Invalid choice, try again." << endl;
            castVote(votesClara, votesAlice, votesJohn); // Recursion to handle invalid vote
    }
}

// Function to show election results
void showResults(int votesClara, int votesAlice, int votesJohn) {
    cout << "\nElection Results:\n";
    cout << "Clara: " << votesClara << " votes\n";
    cout << "Alice: " << votesAlice << " votes\n";
    cout << "John: " << votesJohn << " votes\n";
    
    // Determine the winner
    if (votesClara > votesAlice && votesClara > votesJohn) {
        cout << "Clara wins the election!" << endl;
    } else if (votesAlice > votesClara && votesAlice > votesJohn) {
        cout << "Alice wins the election!" << endl;
    } else if (votesJohn > votesClara && votesJohn > votesAlice) {
        cout << "John wins the election!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}