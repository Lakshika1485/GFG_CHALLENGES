#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
using namespace std;

int main()
{
	int n =5;
	int arr[5]={1,-2,-3,4,5};

	int max_sum=INT_MIN;
	
		for(int start = 0 ; start < n; start++)
	    {	
		int curr_sum = 0;
	
		for(int end = start; end < n; end++)
		{
			curr_sum += arr[end];
			max_sum = max(curr_sum,max_sum);
			}
		}
		
	
	cout<<"Max sum is:"<<max_sum;
	cout<<endl;
	
	cout<<"task completed!!!";
}


//	int n;
//	cin>>n;
//	cout<<endl;
//	int arr[n];
//	
//	for(int i = 0 ; i < n; i++)
//	{
//		cin>>arr[i];
//	}
//	cout<<endl;
	
//	int start = 0; 
//	int end = n-1;
//	
//	for(int start = 0 ; start < n; start++)
//	{
//		for(int end = start; end < n; end++)
//		{
//			for(int i = start; i <= end; i++)
//			{
//				cout<<arr[i];
//				
//			}cout<<endl; ;
//		}
//		cout<<endl;
//	}
