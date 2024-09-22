#include<iostream>
using namespace std;
int FirstOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;
     
    while(s <= e){
        if(arr[mid]==key){
                ans = mid;
                e = mid - 1;
        } 
        else if (key > arr[mid]){//Right me jao
                s = mid + 1;
        }
        else if(key < arr[mid]){
                e = mid-1;
        }
        mid = s + (e - s)/2;
    }
    
    return ans;
}

int LastOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;
     
    while(s <= e){
        if(arr[mid]==key){
                ans = mid;
                s = mid + 1;
        } 
        else if (key > arr[mid]){//Right me jao
                s = mid + 1;
        }
        else if(key < arr[mid]){
                e = mid-1;
        }
        mid = s + (e - s)/2;
    }
    
    return ans;
}
int main(){
        int even[12]={1,2,3,3,3,34,333,344,333,33,3,5};
        cout <<"First Occurance of 3 is at INDEX: " <<FirstOcc(even,12,3)<<endl;
        cout <<"Last  Occurance of 3 is at INDEX: " <<LastOcc(even,12,3)<<endl;
}