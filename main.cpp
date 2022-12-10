#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include <ctime>
#include <iomanip>
#include <chrono>
using namespace std::chrono;
using namespace std;
void MERGE_SORT(int a[], int length);
void merge_sort(int a[], int low, int high);
void merge(int a[], int left_low, int left_high, int right_low, int right_high);
void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void  generating_numbers(int arr[], int SIZE);
double calc_merge_time(int arr[], int SIZE);
double calc_quick_time(int arr[], int SIZE);
void copy_arr(int arr1[] , int arr2[] ,int n);


int main()
{
    int *arr1;        arr1 = new int[5000];          generating_numbers(arr1, 5000);    int *arr101;        arr101 = new int[5000];          copy_arr(arr1 ,arr101 , 5000);
    int *arr2;        arr2 = new int [10000];       generating_numbers(arr2, 10000);    int *arr22;        arr22 = new int [10000];       copy_arr(arr2 ,arr22 , 10000);
    int *arr3;        arr3 = new int [15000];       generating_numbers(arr3, 15000);    int *arr33;        arr33 = new int [15000];       copy_arr(arr3 ,arr33 , 15000);
    int *arr4;        arr4 = new int [20000];       generating_numbers(arr4, 20000);    int *arr44;        arr44= new int [20000];       copy_arr(arr4 ,arr44 , 20000);
    int *arr5;        arr5 = new int [25000];       generating_numbers(arr5, 25000);    int *arr55;        arr55 = new int [25000];       copy_arr(arr5 ,arr55 , 25000);
    int *arr6;        arr6 = new int [30000];       generating_numbers(arr6, 30000);    int *arr66;        arr66 = new int [30000];       copy_arr(arr6 ,arr66 , 30000);
    int *arr7;        arr7 = new int [35000];       generating_numbers(arr7, 35000);    int *arr77;        arr77 = new int [35000];       copy_arr(arr7 ,arr77 , 35000);
    int *arr8;        arr8 = new int [40000];       generating_numbers(arr8, 40000);    int *arr88;        arr88 = new int [40000];       copy_arr(arr8 ,arr88 , 40000);
    int *arr9;        arr9 = new int [45000];       generating_numbers(arr9, 45000);    int *arr99;        arr99 = new int [45000];       copy_arr(arr9 ,arr99 , 45000);
    int *arr10;     arr10 = new int [50000];      generating_numbers(arr10, 50000);    int *arr1010;     arr1010 = new int [50000];      copy_arr(arr10 ,arr1010 , 50000);
    int *arr11;     arr11 = new int [55000];      generating_numbers(arr11, 55000);    int *arr1111;     arr1111 = new int [55000];      copy_arr(arr11 ,arr1111 , 55000);
    int *arr12;     arr12 = new int [60000];      generating_numbers(arr12, 60000);    int *arr1212;     arr1212 = new int [60000];      copy_arr(arr12 ,arr1212 , 60000);
    int *arr13;     arr13 = new int [65000];      generating_numbers(arr13, 65000);    int *arr1313;     arr1313 = new int [65000];      copy_arr(arr13 ,arr1313 , 65000);
    int *arr14;     arr14 = new int [70000];      generating_numbers(arr14, 70000);    int *arr1414;     arr1414 = new int [70000];      copy_arr(arr14 ,arr1414 , 70000);
    int *arr15;     arr15 = new int [75000];      generating_numbers(arr15, 75000);    int *arr1515;     arr1515 = new int [75000];      copy_arr(arr15 ,arr1515 , 75000);
    int *arr16;     arr16 = new int [80000];      generating_numbers(arr16, 80000);    int *arr1616;     arr1616 = new int [80000];      copy_arr(arr16 ,arr1616 , 80000);
    int *arr17;     arr17 = new int [85000];      generating_numbers(arr17, 85000);    int *arr1717;     arr1717 = new int [85000];      copy_arr(arr17 ,arr1717 , 85000);
    int *arr18;     arr18 = new int [90000];      generating_numbers(arr18, 90000);    int *arr1818;     arr1818 = new int [90000];      copy_arr(arr18 ,arr1818 , 90000);
    int *arr19;     arr19 = new int [95000];      generating_numbers(arr19, 95000);    int *arr1919;     arr1919 = new int [95000];      copy_arr(arr19 ,arr1919 , 95000);
    int *arr20;     arr20 = new int [100000];    generating_numbers(arr20, 100000);    int *arr2020;     arr2020 = new int [100000];    copy_arr(arr20 ,arr2020 , 100000);

    cout << "Time For Merge sort" << "    "<< "Time For Quick Sort" << endl;
    cout <<"1- " << calc_merge_time(arr1, 5000) << setw(20) << calc_quick_time(arr101,5000)<< endl;
    cout <<"2- "<< calc_merge_time(arr2, 10000) << setw(20) << calc_quick_time(arr22,10000)<< endl;
    cout<<"3- " << calc_merge_time(arr3, 15000) << setw(20) << calc_quick_time(arr33,15000)<< endl;
    cout <<"4- "<< calc_merge_time(arr4, 20000) << setw(20) << calc_quick_time(arr44,20000)<< endl;
    cout <<"5- "<< calc_merge_time(arr5, 25000) << setw(20) << calc_quick_time(arr55,25000)<< endl;
    cout <<"6- "<< calc_merge_time(arr6, 30000) << setw(20) << calc_quick_time(arr66,30000)<< endl;
    cout <<"7- "<< calc_merge_time(arr7, 35000) << setw(20) << calc_quick_time(arr77,35000)<< endl;
    cout <<"8- "<< calc_merge_time(arr8, 40000) << setw(20) << calc_quick_time(arr88,40000)<< endl;
    cout <<"9- "<< calc_merge_time(arr9, 45000) << setw(20) << calc_quick_time(arr99,45000)<< endl;
    cout <<"10- "<< calc_merge_time(arr10, 50000) << setw(20) << calc_quick_time(arr1010,50000)<< endl;
    cout <<"11- "<< calc_merge_time(arr11, 55000) << setw(20) << calc_quick_time(arr1111,55000)<< endl;
    cout <<"12- "<< calc_merge_time(arr12, 60000) << setw(20) << calc_quick_time(arr1212,60000)<< endl;
    cout <<"13- "<< calc_merge_time(arr13, 65000) << setw(20) << calc_quick_time(arr1313,65000)<< endl;
    cout <<"14- "<< calc_merge_time(arr14, 70000) << setw(20) << calc_quick_time(arr1414,70000)<< endl;
    cout <<"15- "<< calc_merge_time(arr15, 75000) << setw(20) << calc_quick_time(arr1515,75000)<< endl;
    cout <<"16- "<< calc_merge_time(arr16, 80000) << setw(20) << calc_quick_time(arr1616,80000)<< endl;
    cout <<"17- "<< calc_merge_time(arr17, 85000) << setw(20) << calc_quick_time(arr1717,85000)<< endl;
    cout <<"18- "<< calc_merge_time(arr18, 90000) << setw(20) << calc_quick_time(arr1818,90000)<< endl;
    cout <<"19- "<< calc_merge_time(arr19, 95000) << setw(20) << calc_quick_time(arr1919,95000)<< endl;
    cout <<"20- "<< calc_merge_time(arr20, 100000) << setw(20) << calc_quick_time(arr2020,100000)<< endl;
    return 0;
}


void copy_arr(int arr1[] , int arr2[] ,int n)
{
    for(int i=0; i < n; i++)
        arr2[i] = arr1[i];
}


double calc_merge_time(int arr[], int SIZE)
{
    int ticks = clock();
    merge_sort(arr, 0, SIZE);
    return ((double)ticks / CLOCKS_PER_SEC);
}

double calc_quick_time(int arr[], int SIZE)
{
    int ticks = clock();
    quickSort(arr, 0, SIZE);
    return ((double)ticks / CLOCKS_PER_SEC);
}

void merge_sort(int a[], int low, int high)
{
    if (low >= high)                  //Base case: 1 value to sort->sorted
        return;                         //(0 possible only on initial call)
    else
    {
        int mid = (low + high)/2;       //Approximate midpoint*
        merge_sort(a, low, mid);        //Sort low to mid part of array
        merge_sort(a, mid+1, high);     //Sort mid+1 to high part of array
        merge(a, low, mid, mid+1,high); //Merge sorted subparts of array
    }
}

void merge(int a[], int left_low, int left_high, int right_low, int right_high)
{
    int length = right_high-left_low+1;
    int temp[length];
    int left = left_low;
    int right = right_low;
    for (int i = 0; i <  length ; ++i)
    {
        if (left > left_high)
            temp[i] = a[right++];
        else if (right > right_high)
            temp[i] = a[left++];
        else if (a[left] <= a[right])
            temp[i] = a[left++];
        else
            temp[i] = a[right++];
    }

    for (int i=0; i< length; ++i)
        a[left_low++] = temp[i];
}

///Quick Sort Function

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high - 1 ; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void  generating_numbers(int arr[], int SIZE)
{
    for(int i =0; i <SIZE ; i++)
    {
        arr[i] = (rand()%100);
        //cout << arr[i] << "  ";
    }
}
