
void kthlargestelement(int arr[], int n, int k)
{
  int temp; 
  for(int i=0;i<k;i++)
   {
     for(int j=0;j<n-1;j++)
        {
          if(arr[j] > arr[j+1])
          {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
        }
   }

   cout<<"K-th largest element is : "<< arr[n-k]<<endl;
}
int main()
{
     int n=7;
     int arr[]={3, 21, 12, 9, 30, 2, 50};
     int k = 3;
     kthlargestElement(arr,k);
     return 0;
}

