#include <algorithm> 
#include <iomanip>
#include <iostream>

using namespace std;

// Initialize array with random values between min and max
void initMasRandom(int mas[], int size, int min = 0, int max = 10) {
   for (int i = 0; i < size; ++i) {
	  mas[i] = rand() % (max - min) - min;
   }
}

// Print array elements
void printMas(int mas[], int size) {
   for (int i = 0; i < size; ++i) {
	  cout << "mas [" << i << "] = " << mas[i] << endl;
   }
}

// Function to find the minimum index and value in the array
void findMinIndexValue(int mas[], int size) {
   // Using the standard library function min_element to find the minimum element
   int minIndex = distance(mas, min_element(mas, mas + size));
   int minValue = mas[minIndex];

   // Output the result
   cout << "Minimum element is: " << minValue << " at index " << minIndex << endl;
}

int main() {
   const int size = 10;
   int mas[size];

   // Initialize and print the array
   initMasRandom(mas, size);
   printMas(mas, size);

   // Find and print the minimum value and its index
   findMinIndexValue(mas, size);
   return 0;
}
