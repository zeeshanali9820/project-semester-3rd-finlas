#include <iostream>
#include <cstring> // strcmp()
#include <algorithm> // swap()
// Sorts array of C strings of given size into alphabetical order
void sort_strings(char *strings[], int size);
// Prints array of C strings
void print_array(char *strings[], int size);
int main()
{
const int DAYS_IN_WEEK = 7;
char *days_of_week[DAYS_IN_WEEK] = {
"Sunday",
"Monday",
"Tuesday",
"Wednesday",
"Thursday",
"Friday",
"Saturday"
};
std::cout << "Original array: " << std::endl;
print_array(days_of_week, DAYS_IN_WEEK);
std::cout << "Sorted array: " << std::endl;
sort_strings(days_of_week, DAYS_IN_WEEK);
print_array(days_of_week, DAYS_IN_WEEK);
return 0;
}
void sort_strings(char *strings[], int size)
{
// Bubble sort
for (int i = 0; i < size - 1; ++i)
{
for (int j = i + 1; j < size; ++j)
{
if (std::strcmp(strings[i], strings[j]) > 0)
{
std::swap(strings[i], strings[j]);
}
}
}
}
void print_array(char *strings[], int size)
{
for (int i = 0; i < size; ++i)
std::cout << strings[i] << " ";
std::cout << std::endl;
}
