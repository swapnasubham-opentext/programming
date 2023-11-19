#include<iostream>
using namespace std;

int main(){
    
    int no_of_element;
    cout << "Enter the number of element : "<< endl;
    cin >> no_of_element;
    
    int a[no_of_element];
    cout << "Enter the elements : "<<endl;
    for(int i = 0; i < no_of_element; i++){
        cin >> a[i];
    }
    
    int sum = 0;
    for(int i = 0; i < no_of_element; i++){
        sum = sum + a[i];
    }
    
    cout << "Sum of the array element is : " << sum << endl;
    return 0;
}