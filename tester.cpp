#include <iostream>
#include <stdlib.h>
#include "the1.h"

using namespace std;

void test() {
    bool hoare, median_of_3;
    int size;

    long swap =0;
    double avg_dist, max_dist;

    cin >> hoare >> median_of_3 >> size;
    
    auto input_array = new unsigned short[size];

    for(int i=0; i<size; i++)
        cin >> input_array[i];
    

    
    //Calculate duration and print output
	std::cout << "Size: " << size << std::endl <<
                 "Median of three: " << median_of_3  << std::endl <<
                 "Hoare: " << hoare << std::endl <<
                 "Array elements: {";
    for(int idx=0; idx < size - 1; idx++) std::cout << input_array[idx] << ", ";
    std::cout << input_array[size-1] << "}" << std::endl;
    auto number_of_recursive_calls = quickSort(input_array, swap, avg_dist, max_dist, hoare, median_of_3, size);
    std::cout << "Swap: " << swap << std::endl <<
                 "Average Distance: " << avg_dist  << std::endl <<
                 "Maximum Distance: " << max_dist << std::endl <<
                 "Number of recursive calls: " << number_of_recursive_calls << std::endl <<
                 "Sorted array: {";
    for(int idx=0; idx<size-1; idx++) std::cout << input_array[idx] << ", ";
    std::cout << input_array[size-1] << "}" << std::endl;


}

int main() {
    test();
	return 0;
}