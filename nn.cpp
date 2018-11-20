/*Write a program that asks user to enter some int elements (5 < n < 5) to an array. Count and display
all sub-arrays having sum divisible by k (input by user).
Input : arr[] = {4, 5, 0, -2, -3, 1},
K = 5
Output : 7
// there are 7 sub-arrays whose is divisible by K
// {4, 5, 0, -2, -3, 1}
// {5}
// {5, 0}
// {5, 0, -2, -3}
// {0}
// {0, -2, -3}
// {-2, -3}*/
#include<iostream>
using namespace std;

int main()
	{
		int counter,k;
		int arr[6];
		cout<< "k";
		cin>> k;
		for(int i=0; i<6; i++)
		{
			cin>> arr[i];
		}
		for (int i=0; i<6; i++)
			{
				if (arr[i]%k==0)
				counter++;
				for(int j=0; j<6; j++)
					{
						if (i==j)
						{
						if((arr[i]+arr[j]) % k==0)
						counter++;
						}
					}
				
				
			}
		cout<< counter;
	}
