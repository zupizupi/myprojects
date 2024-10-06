#include <iostream>
#include <map>
using namespace std;
int main (){
    string choice;
    int length;
    string clara = "Clara";
    string alice = "Alice";
    string jacob = "Jacob";

    int clarapoint = 0;
    int alicepoint = 0;
    int jacobpoint = 0;
    cout <<"length:";
    cin >> length;
    cout<< "elections" << "\n";
    
   
    for (int  i = 0; i < length; i++)
    {
        cout << "write you choice:";
        cin >> choice;
        int resclara = choice.compare(clara);
        int resalice = choice.compare(alice);
        int resjacob = choice.compare(jacob);
        if (resclara == 0){
            clarapoint++;
        }
        else if(resalice == 0){
            alicepoint++;
        }
        else if(resjacob == 0){
            jacobpoint++;
        }
    }
      if (clarapoint > alicepoint && clarapoint >jacobpoint) {
        cout << "Clara wins the election!" << endl;
    } else if (alicepoint > clarapoint && alicepoint > jacobpoint) {
        cout << "Alice wins the election!" << endl;
    } else if (jacobpoint > clarapoint && jacobpoint > alicepoint) {
        cout << "John wins the election!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}
