# Aim
Introduce 1D array manipulation and implement Binary Search.

# Topic Learning Objective
to use 1D array for storing integers, if-else construct for decision making
and while construct for looping.

# Description and Definitions
Binary search technique is used to find an element in a sorted array. Binary search algorithm
relies on a divide and conquer strategy. It is used to find the position of a specified value (an
Input Key) given by the user in a sorted list. For example, given a sorted array of integers “10,
20, 30, 40, 50”, binary search can be used to find the position of the integer 40 (search key) in
the sorted list.

# Method
The binary search algorithm begins by comparing the target value to value of the middle element
of the sorted array. If the target value is equal to the middle element's value, the position is
returned. If the target value is smaller, the search continues on the lower half of the array, or if
the target value is larger, the search continues on the upper half of the array. This process
continues until the element is found and its position is returned, or there are no more elements
left to search for in the array and "not found" indicator is returned.
First, we take the set of elements which is sorted in ascending order. If [low, high] denotes the
range in which element has to be present and [mid] denotes the middle element, initially low =
0, high = n-1 (n is number of elements) and mid = floor ((low+high)/2). In every iteration we
reduce the range by doing the following until low is less than or equal to high (meaning elements
are left in the array) or the position of the “input key” has been found.
(i) If the middle element (mid) is less than key then key has to present in range [mid+1, high],
so low=mid+1, high remains unchanged and mid is adjusted accordingly
(ii) If middle element is the key, then we are done.

(iii) If the middle element is greater than key then key has to be present in the range [low, mid-
1], so high=mid-1, low remains unchanged and mid is adjusted accordingly.

# Illustration
Consider the sorted array of integers given below : 10 20 30 40 50
Let us take search key=40, then the binary search on the given array proceeds as follows:
1) Low =0, High=4(i.e.; length-1), mid= (Low+High)/2= (0+4)/2=2
2) Compare key element with Array [Mid] (here 30). Since key element is greater is than Array
[Mid](i.e 40>30), search is carried out in the upper half of the array. Therefore Low= Mid+1=3,
High= 4, Mid= (3+4)/2=3
Again we compare the key element with Array[Mid] Since the key element is equal to
Array[Mid] (40==40), we print the position of key element as Mid+1 ( i.e., 4).

# Algorithm
```
Step 1: Start
Step 2: [Input the no of elements]
        Read n
Step 3: [Read n elements from keyboard in ascending order]
        for i = 0 to n - 1
            read a[i]
Step 4: [Input Key element to search]
        Read ele
Step 5: [Initialization]
        low = 0
        high = n - 1
Step 6: [Repeat until low<=high]
        while(low <= high) do
            mid = (low + high) / 2 //obtain the mid position
                if (ele == a[mid]) //compare mid value with else, if equal search successful
                    print ele and its position and go to step 8
                else if (else < a[mid])
                    high = mid - 1
                else
                    low = mid + 1
Step 7: [ele not found, Search unsuccessful]
        Print "ele element not found"
Step 8: [Terminate]
        Stop
```