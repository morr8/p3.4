/*
 •• P3.4
 Write a program that reads in three floating-point numbers and prints the largest of the three inputs. For example:
 
 Please enter three numbers: 4 9 2.5
 The largest number is 9.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Please enter three numbers: ";
    float first, second, third;
    cin >> first >> second >> third;
    float largest = max(first, second);
    largest = max(largest, third);
    
    
    
    
    
}
