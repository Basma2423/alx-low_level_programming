#include <iostream>
#include <chrono>
using namespace std;
#define TMP template<typename T>


namespace sortlib {

    TMP
        void InsertionSort(T elements[], int n, int gap = 1)
    {
        for (int i = gap; i < n; i++) {
            int key = elements[i];
            int j = i - gap;
            while (j > -1 && elements[j] > key) {
                elements[j + gap] = elements[j];
                j -= gap;
            }
            elements[j + gap] = key;
        }
    }

    TMP
        void SelectionSort(T elements[], int n)
    {

    }

    TMP
    void BubbleSort(T elements[], int n)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = n - 1; j > i; j--)
                if (elements[j] < elements[j - 1])
                    swap(elements[j], elements[j - 1]);
    }

    TMP
    void ShellSort(T elements[], int n)
    {
        for (int gap = n / 2; gap > 0; gap /= 2) {
            InsertionSort(elements, n, gap);
        }
    }

    TMP
        void CountSort(T elements[], int n)
    {

    }

    TMP
        void merge(T arr[], int left, int mid, int right) {
        int left_size = mid - left + 1;
        T left_array[left_size];
        int right_size = right - mid;
        T right_array[right_size];
        // this is to find the size of the split halves
        // the left and right half
        for (int i = 0; i < left_size; i++) {
            left_array[i] = arr[left + i];
        }
        for (int i = 0; i < right_size; i++) {
            right_array[i] = arr[mid + 1 + i];
        }
        // now we have made two split arrays
        int i = 0, j = 0, k = left;
        while (i < left_size && j < right_size) {
            if (left_array[i] <= right_array[j]) {
                // check if the first half is smaller
                arr[k++] = left_array[i++];
                // if it is then it deserves to be first in our new merge!
            }
            else {
                arr[k++] = right_array[j++];
                // if not then the smaller one
                // deserves to be first :)
            }
        }

        while (i < left_size) {
            arr[k++] = left_array[i++];
        }
        // here we are adding any remaining
        // values that may have been left
        // which are already greater than
        // the rest of the values in arr[]

        while (j < right_size) {
            arr[k++] = right_array[j++];
        }


    }


    TMP
        void MergeSort(T arr[], int start, int end) {
        if (start < end) {
            int mid = start + ((end - start) / 2);
            // sort first half
            MergeSort(arr, start, mid);
            MergeSort(arr, mid + 1, end);

            // merge the two halves
            merge(arr, start, mid, end);
        }
    }

    TMP
        void QuickSort(T elements[], int n)
    {

    }

}

void printTimeDifference(chrono::duration<long, std::nano> diff)
{
	cout << "Time Taken: " << diff.count()/1000000.0 << " x10(^-3) sec" << endl;
}

TMP
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void generateRandomArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}

int main()
{
    int elements[10];
    generateRandomArray(elements, 10);
	printArray(elements, 10);
	auto startTime = chrono::steady_clock::now();
	sortlib::BubbleSort(elements, 10);
	auto endTime = chrono::steady_clock::now();
	printArray(elements, 10);
	printTimeDifference(endTime - startTime);
}
