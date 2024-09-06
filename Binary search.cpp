#include<iostream>
using namespace std;

void binarySearch(int A[], int l, int h, int key, bool &found) {
    int mid;
    while(l<=h){
        mid= (l+h)/2;
        if(key==A[mid]){
            cout<<"Found at index "<<mid<<endl;
            found=true;
            return; // Exiting the function once the key is found
        }
		else if(key<A[mid]){
            h=mid-1;
        }
		else if(key>A[mid]){
            l=mid+1;
        }
    }
}

int main() {
    int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=10, key;
    int l=0, h=9;
    bool found=false;
    cout<<"Enter the key to find (1-10): ";
    cin>>key;
    // Function call
    binarySearch(A, l, h, key, found);
    if(!found){
        cout<<"Key not found"<<endl;
    }
    return 0;
}
