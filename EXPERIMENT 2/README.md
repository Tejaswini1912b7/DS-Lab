# Aim of the Experiment - Write a program that implements the following sorting methods to sort a given list of integers in ascending order
i) Bubble sort ii) Selection sort iii) Insertion sort

i) BUBBLE SORT PROGRAM
## Definition:
Bubble Sort- Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.This sorting techniques happens thrugh passes.

### Step by step Procedure of the Experiment:
1)The Array to be sorted is declared and initialized.
2)The function bubble_sort is passed with one parameter namely the address of the Array.
3)The bubble_sort algorithm uses two for loops one within the other.
4)The outer for loop runs (n-1) times thus creates n-1 passes through the data.
5)The outer for loop runs from i = 1 to n(i.e.Size of the Array) and the inner for loop runs from j = i + 1 to n - 1. This process is repeated from start to end of the array.
6)Then in the loop,If a[j] is greater than a[i] then swap both the elements a[j] and a[i] using a temporary variable(i.e. t). Here ends both the loops. 
7)To print all the array's sorted elements, we use another For loop which runs from i = 1 to i = 10.
8)Hence the Bubble Sort program is executed successfully.

#### OUTPUT:-
https://github.com/Tejaswini1912b7/DS-Lab/blob/master/EXPERIMENT%202/Bubble_Sort_Output.png

ii)SELECTION SORT PROGRAM
## Definition
Selection Sort: The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

### Step by step Procedure of the Experiment:
1)The Array to be sorted is declared and initialized.
2)In main function we print the elements of the array before selection sort.
3)The algorithm of selection sort program is: At each step of the algorithm a linear search of the unsorted elements is made in order to determine the position of the largest element in the remaining elements. The element is then moved to the correct position of the array by swapping it with the elements, which currently occupies that position.
4)Therefore, the algorithm after (n-1) such passes puts the entire list in a sorted order.
5)So, the selection sort function is as following,
6)We use two for loops one within the other, just similar to the bubble sort.
7)The inner loop here only determines where the position of the highest elements exists in the remaining unsorted array elements.
8)After this the swapping is done in the outer loop only once.
9) So we have (n-1) swaps in selection sort for the whole program to complete.
10) Hence, the sorting is done and we print the sorted array.
11)Hence, The selection sorting program is executed completely.

### OUTPUT:
https://github.com/Tejaswini1912b7/DS-Lab/blob/master/EXPERIMENT%202/C_selectionSort_12b7.png
