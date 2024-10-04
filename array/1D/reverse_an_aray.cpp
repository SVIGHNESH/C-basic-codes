#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>v){
    int s = 0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
        
    }
    return v;

}
void print (vector<int> v){
    for (int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(11);
    v.push_back(14);
    v.push_back(16);
    v.push_back(21);
    v.push_back(10);
    cout<<"The vector before the swappinng is"<<endl;
   for (int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl; 
    vector<int> ans = reverse(v);
    cout<<"Printing the array after the swapping"<< endl;
    print(ans);
    
}