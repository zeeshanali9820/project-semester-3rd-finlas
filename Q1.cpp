#include <iostream>
int main()
{
using namespace std;
// Prompt user to enter number of numbers
int length;
cout << "Enter number of numbers: ";
cin >> length;
// Allocate array for holding numbers
float *arr = new float[length];
// Read numbers
for (int i = 0; i < length; ++i)
{
cout << "Enter number #" << (i + 1) << ": ";
cin >> *(arr + i);
}
// Find average value
float average = 0.0F;
for (int i = 0; i < length; ++i)
{
average += *(arr + i);
}
average /= length;
cout << "Average value of entered numbers is " << average << endl;
// Free memory
delete [] arr;
return 0;
}
