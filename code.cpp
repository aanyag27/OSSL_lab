#include <iostream>
using namespace std;

int main(){
    int arr[100], n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter Elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i=0, j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout << "Array after reversing: "<< endl;
    for(int i=0;i<n;i++){
        cout<< arr[i] << " " << endl;
    }
}
