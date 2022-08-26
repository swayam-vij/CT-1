// Name = Swayam Vij
// Roll no.= 2010992467
// Set = 04
// Question 1
// group 20
#include <iostream>
#include <unordered_set>
using namespace std;
 
int findIndex(int arr[], int n)
{
    int minIndex = n;
 
    unordered_set<int> set;
 
    for (int i = n-1 ; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        else {
            set.insert(arr[i]);
        }
    }
    return minIndex;
    
 
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int minIndex = findIndex(arr, n);
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}