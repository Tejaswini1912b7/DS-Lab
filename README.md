# Experiment 1
##Aim of the experiment - Write a program that use both recursive and non-recursive functions to perform the following searching operations for a key value in a given list of integers:
1) Linear Search  2) Binary Search

###Step by step procedure for the experiment.
PROCEDURE:
i)BINARY SEARCH - The search starts at the center of a sorted array.If the center is equal to the target element search is successful otherwise it determines which half to continue to search. 

A)Binary Search without Recursion - Procedure
1)Initialise the array with 10 elements,Elements should be sorted.
2)Read the target key to be searched.
3)Index should be in the range of 0 to n(0=lower_bound & n = upper_bound(size of array).
4)The algorithm starts searching with the mid element.
mid = (low_bound+up_bound) / 2
5)If the target_key is equal to mid element then the mid_element is the target_key,Hence the search is successful.
6)If the target_key is less than the mid_element, it starts over searching the left half of the list.
7)If the target_key is greater than the mid_element, it starts over searching the other half of the list.
8)The same process is continued until the target is found.Each Iteration eliminates half of the remaining elements.This is faster than the Linear Search.
9)Hence the Non-Recursive Binary Search is finished.

OUTPUT:-


B)Binary Search with Recursion - Procedure
1)Initialise the array with 10 elements,Elements should be sorted.
2)Read the target key to be searched.
3)Index should be in the range of 0 to n(0=lower_bound & n = upper_bound(size of array)) for a successful search.
4)The algorithm starts searching with the mid element.
5)If the lower_bound is greater than the upper_bound,Target_key is not found and it returns nothing(-1).
6)Else Block gets executed as lower_bound(i.e. low_pos) is lesser than (or) equal to upper_bound(i.e. high_pos).Here MID_POS = (LOW_POS + HIGH_POS) / 2
7)In this Block we have If, Else If, Else as follows...
8)In If when target_key is equal to array's mid_element then the Target_key is the same element.Search is successful.
9)Else If the target_key is less than (or) equal to array's mid_element then UPPER_BOUND = MID_BOUND - 1. Here the Lower Bouund is the same, and search happens in the left side till the Target-Key is found.
10)Else when Target is greater than the array's Mid_Pos the algorith starts searcing on the other half. Here LOW-BOUND = MID_BOUND + 1(i.e.UP_BOUND will be the same),
11)Hence in Recursive Binary Search the same process continues till the Target_key is found.

OUTPUT:-


LINEAR SEARCH - Linear Search is the comparision of Target_Key with every key going through the entire array of the algorithm.This search works for both sorted and unsorted arrays.

A)Linear Search Algorithm with Recursion - Procedure
1)First read the TOTAL number of elements to be declared to the array.
2)If the index is greater than (or) equal to the TOTAL number of elements then the algorithm return nothing.
3)Else If the Array's INDEX is equal to the value then the position will be the index and POS(i.e.position) is returned.
4)Else we return to the Rec_Lin_Search function and start the Search as follows.
5)Declare and initialize the array elements.
6)In the FOR loop INDEX is initially at zero position then the loop continues by incrementing by one till it reaches the end Index of the array and now all the  elements aree read.
7)The Target_Key to be searched must be read and should be prited by the user.
8)If the POS is not equal to zero and when the Target_Key matches with the value (i.e.element),then the value's  position gets printed.Hence the search will be successful.
9)Else when Target_Value is not in the array values."The Element is not Found" gets printed. Hence the search is unsuccessful.
10)Hence this is the Recursive Linear Search Algorithm.

OUTPUT:-
https://github.com/Tejaswini1912b7/DS-Lab/blob/master/rec_lin_search_output(key%20%3D%2036).png


B)Linear Search Algorithm without Recursion - Procedure
1)First declare an Array with integers and initialize it with values(i.e.elements).
2)Read the Target Key to be searched.
3)The routine linear_search is called by passing three parameters namely the address of the array, array size, target_key.
4)If the index is not in the range 0 to n(no. of values), the search is successful or Else the search is unsuccessful whichs prints "Target key is not found".
5)The linear_search routine,just contains a for loop, with the loop variable i running from 0 to n-1.
6)The If statement inside the Loop returns the position if the Target_Key is found.
7)Otherwise the Algorithm returns -1 indicating to thecalling routine that the Target_Key is not found.

OUTPUT:-





####OUTPUT




