#include <bits/stdc++.h>

using namespace std;
void bubblesort(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{	
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				    	
		    }   
	    }	
	    	
    }
    for(int i=0;i<n;i++)
	{	
   		cout<<arr[i]<<" ";
	}

}


int main()
{   //int j;
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n); 
    
    return 0;
}
