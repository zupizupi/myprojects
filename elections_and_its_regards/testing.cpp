#include <iostream>
#include <map>
using namespace std;
oid sorting(int arr[]){
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
int main(){
    map <string,int> choices;

    choices["Clara"] = clarapoint;
    choices["jacob"] = jacobpoint;
    choices["Alice"] = alicepoint;
    if (choices[first])
    {
        /* code */
    }
    
}