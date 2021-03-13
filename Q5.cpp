#include<iostream>
#include<string>
#define SIZE 10

using namespace std;

void addarrays(float arr1[],float arr2[],float sum[],int n)
{
int i;
for (i=0;i<n;i++)
sum[i]=arr1[i]+arr2[i];
}

int main()
{
float arr1[SIZE]={1,2,3,4,5,6,7,8,9,0},arr2[SIZE]={3,2,1,5,2,3,4,5,0,1},arr3[SIZE];
int n=SIZE,i;
addarrays(arr1,arr2,arr3,n);
cout<<"Array 1:";
for(i=0;i<n;i++)
cout<<arr1[i]<<"";
cout<<endl<<"Array2:";
for(i=0;i<n;i++)
cout<<arr2[i]<<"";

cout<<endl<<"Array3:";
for(i=0;i<n;i++)
cout<<arr3[i]<<"";

return 0;
}


