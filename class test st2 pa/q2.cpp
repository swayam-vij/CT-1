// Name = Swayam Vij
// Roll no.= 2010992467
//  set = 04
// Question 2
// group 20

#include <bits/stdc++.h>
using namespace std;


bool areConsecutive(int arr[], int n)
{
	sort(arr,arr+n);
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1]+1)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
	int mini= INT_MAX;
	int maxi= INT_MIN;
	for(int i=0;i<n;i++){
		mini= min(mini,arr[i]);
		maxi= max(maxi,arr[i]);
	}
	if(areConsecutive(arr, n) == true)
		cout<<" Array elements are consecutive from "<<mini<<" to "<<maxi;
	else
		cout<<" Array elements are not consecutive ";
	return 0;
}

