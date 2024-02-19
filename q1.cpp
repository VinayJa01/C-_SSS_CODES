//**que----//Sure! Here's an example C++ program that generates 5 lakh (500,000) random integers between 1 and 100, removes duplicates from them, and stores them in an array:

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

using namespace std;

const int SIZE = 500000;

int main()
{
    int arr[SIZE];

    srand(time(0)); // seed the random number generator with the current time

    // generate random integers between 1 and 100 and store them in the array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // remove duplicates using an unordered_set
    unordered_set<int> s(arr, arr + SIZE);
    int num_unique = s.size();

    // store unique integers in an array
    int unique_arr[num_unique];
    int j = 0;
    for (const int& i : s) {
        unique_arr[j] = i;
        j++;
    }

    // print the unique array to check that duplicates were removed correctly
    for (int i = 0; i < num_unique; i++) {
        cout << unique_arr[i] << " ";
    }

    return 0;
}


//This program uses the rand() function from the <cstdlib> library to generate random integers between 1 and 100, and the time() function from the <ctime> library to seed the random number generator with the current time. The integers are stored in an array of size 500,000, and then printed to the console.

//This program uses an unordered_set from the <unordered_set> library to remove duplicates from the array. The set is constructed from the original array using the range constructor unordered_set<int> s(arr, arr + SIZE). Then, the size of the set is computed to determine the number of unique integers. The unique integers are stored in a new array, which is printed to the console to check that duplicates were removed correctly.


//****************************************

//**que--cpp program to generate 5 lakh elements andd remove duplicates from them and sort them using merge sort and describe its time complexity

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

using namespace std;

const int SIZE = 500000;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[SIZE];

    srand(time(0)); // seed the random number generator with the current time

    // generate random integers between 1 and 100 and store them in the array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // remove duplicates using an unordered_set
    unordered_set<int> s(arr, arr + SIZE);
    int num_unique = s.size();

    // store unique integers in an array
    int unique_arr[num_unique];
    int j = 0;
    for (const int& i : s) {
        unique_arr[j] = i;
        j++;
    }

    // sort unique integers using merge sort
    mergeSort(unique_arr, 0, num_unique - 1);

    // print the sorted array to check that sorting was done correctly
    for (int i = 0; i < num_unique; i++) {
        cout << unique_arr[i] << " ";
    }

    return 0;
}


//This program uses the merge sort algorithm to sort the array of unique integers. The merge() function performs the merge step of merge sort, and the mergeSort() function performs the recursive sorting. The sorted array is printed to the console to check that sorting was done correctly.

//The time complexity of merge sort is O(n log n), where n is the number of elements in the array. The mergeSort() function recursively divides the array into two halves and sorts them independently, each of which takes O(n log n) time. Then, the merge() function merges the two sorted halves, which takes O(n) time. Therefore, the total time complexity of merge sort is O(n log n). Since the size of the array in this example is 500,000, the time complexity of merge sort is approximately O(500,000 * log 500,000) = O(6,292,936), or approximately O(6.3 million) comparisons and swaps.


//**que--using heap sort

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

using namespace std;

const int SIZE = 500000;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[SIZE];

    srand(time(0)); // seed the random number generator with the current time

    // generate random integers between 1 and 100 and store them in the array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // remove duplicates using an unordered_set
    unordered_set<int> s(arr, arr + SIZE);
    int num_unique = s.size();

    // store unique integers in an array
    int unique_arr[num_unique];
    int j = 0;
    for (const int& i : s) {
        unique_arr[j] = i;
        j++;
    }

    // sort unique integers using heap sort
    heapSort(unique_arr, num_unique);

    // print the sorted array to check that sorting was done correctly
    for (int i = 0; i < num_unique; i++) {
        cout << unique_arr[i] << " ";
    }

    return 0;
}

//The time complexity of heap sort is O(n log n), where n is the number of elements in the array. The heapify() function takes O(log n) time to restore the heap property of the subtree rooted at i, and it is called n times in the worst case, so its total time complexity is O(n log n). Therefore, the time complexity of heap sort is O(n log n). Since the size of the array in this example is 500,000, the time complexity of heap sort is approximately O(500,000 * log 500,000) = O(6,292,936), or approximately O(6.3 million) comparisons and swaps.


//**********************

//**que--using insertion sort

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

using namespace std;

const int SIZE = 500000;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[SIZE];

    srand(time(0)); // seed the random number generator with the current time

    // generate random integers between 1 and 100 and store them in the array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    // remove duplicates using an unordered_set
    unordered_set<int> s(arr, arr + SIZE);
    int num_unique = s.size();

    // store unique integers in an array
    int unique_arr[num_unique];
    int j = 0;
    for (const int& i : s) {
        unique_arr[j] = i;
        j++;
    }

    // sort unique integers using insertion sort
    insertionSort(unique_arr, num_unique);

    // print the sorted array to check that sorting was done correctly
    for (int i = 0; i < num_unique; i++) {
        cout << unique_arr[i] << " ";
    }

    return 0;
}



//The time complexity of insertion sort is O(n^2), where n is the number of elements in the array. The inner while loop in the insertionSort() function takes O(n) time in the worst case, and it is called n times, so the total time complexity is O(n^2). Since the size of the array in this example is 500,000, the time complexity of insertion sort is approximately O(500,000^2) = O(250,000,000,000), or approximately 250 billion comparisons and swaps. This is much slower than heap sort and merge sort, which have time complexities of O(n log n).