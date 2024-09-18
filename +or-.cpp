#include <iostream>
using namespace std;
int main ()
{
   char ch;
   cout << "Enter a character" <<endl;
   cin >> ch;
   if(ch>='a'&&ch<='z'){
    cout<<"The given charachter is lower casse " <<endl;

   }
   else if (ch>='A'&&ch<='Z')
   {
    cout<< "The given charachter is Upper case";
   }
}