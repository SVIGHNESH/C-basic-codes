#include<iostream>
using namespace std;
int main (){

    int n;
    cin >> n;
    char  row  = 1;
    while (row<=n)
    {
        int col = 1;
        char  ch = 'A'+row-1;
        while (col<=row)
        {
            cout << ch << "    ";
            col ++;

            }
        cout << endl;
        row ++;
    }
}