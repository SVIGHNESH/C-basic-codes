#include<iostream>
#include<string.h>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int main(){


    char name[58];
    cout<<"Enter the number:-";
    cin >> name;
   cout << "Your name is "<< name<<endl;
   int len = strlen(name);
   cout<<"Length of the given string is "<<len<<endl;
   reverse(name,len);
   cout<<"The string after the reverse is  "<<name<<endl;

}