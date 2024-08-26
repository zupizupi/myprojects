#include <iostream>
#include <string>
using namespace std;
void latin(char array[]);
int intchange(float a);
int main() {
    string message;//text itself
    char let[52];
    latin(let);
    float sentences = 0;
    int length;
    float letters = 0;
    float words = 0;
    int n = 0;
    getline(cin, message);
    length = message.size();
   for (int i = 0; i < length;i++)
   {
    for (int j = 0; j < 52;j++)
    {
        if (message[i] == let[j])
      {
        letters++;
      }
    }
   }
    for (int i = 0; i < length; i++)
    {
        if (message[i] == ' ' && message[i - 1] != ' ') {
            words++;
        }
        if (message[i] == '.' || message[i] == '?' ||  message[i] == '!')
        {
            sentences++;
        }
    }
    words++;
    float L = letters/words*100;
    float V = sentences/words*100;
    float index = 0.0588 * L - 0.296 * V - 15.8;
    int result = intchange(index);
    cout << "grade:"<<result<<"\n";
    cout<< "words:"<<words<<"\n";
    cout<<"sentenses:"<<sentences<<"\n";
    cout<<"letters:"<<letters<<"\n";
}
void latin(char array[]){
 int n = 0;
    for ( int i = 65;i  < 123;i++)
    {
       array[n] = i;
       n++;
       if (i == 90)
       {
         i+=6;
       }
    }
}
int intchange(float a){
  int b = a*10;
  int result =a;
  b %= 10;
  if(b>=5){
    result +=1;
  } 
  return result;
}