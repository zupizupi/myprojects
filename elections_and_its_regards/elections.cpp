#include <iostream>
using namespace std;
void sorting(int arr[]);
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
    int comparison[3];
    comparison[0] = clarapoint;
    comparison[1] = alicepoint;
    comparison[2] = jacobpoint;
    sorting(comparison);
    cout << "winner:" << comparison[sizeof(comparison)/sizeof(*comparison) - 1];
}
void sorting(int arr[]){
    int n;
    int v;
    for (int i = 0; i < 3; i++)
    {
        n = arr[i];
        v = arr[i - 1];
        if (arr[i] < arr[i -1])
        {
            arr[i] = v;
            arr[i -1] = n;
        }
    }
}