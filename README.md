# SDE SHEET

This project contains C++ implementations of various algorithms and data structure problems.

## Folder and File Descriptions

### Root Directory
- `setMatrixZeroes.cpp`: Contains the implementation of the `setZeroes` function which sets the matrix zeroes.
- `PascalTriangle.cpp`: Contains the implementation of functions to generate Pascal's Triangle.
- `MaxConsOnes.cpp`: Contains the implementation of a function to find the maximum number of consecutive 1s in a binary array.
- `MergeTwoSortLL.cpp`: Contains the implementation of a function to merge two sorted linked lists.
- `Kadanes.cpp`: Contains the implementation of Kadane's algorithm to find the maximum subarray sum.

### Recursion Folder
- `sortedStack.cpp`: Contains the implementation of a function to sort a stack using recursion.
- `stringSubsequence.cpp`: Contains the implementation of a function to generate all subsequences of a string.

## Compilation and Execution

To compile and run the programs, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the `.cpp` files.
3. Compile the programs using a C++ compiler, for example:
    ```sh
    g++ -o setMatrixZeroes setMatrixZeroes.cpp
    g++ -o PascalTriangle PascalTriangle.cpp
    g++ -o MaxConsOnes MaxConsOnes.cpp
    g++ -o MergeTwoSortLL MergeTwoSortLL.cpp
    g++ -o Kadanes Kadanes.cpp
    g++ -o sortedStack Recursion/sortedStack.cpp
    g++ -o stringSubsequence Recursion/stringSubsequence.cpp
    ```
4. Run the compiled programs:
    ```sh
    ./setMatrixZeroes
    ./PascalTriangle
    ./MaxConsOnes
    ./MergeTwoSortLL
    ./Kadanes
    ./sortedStack
    ./stringSubsequence
    ```

## Function Descriptions

### `void setZeroes(vector<vector<int>>& mat)`

This function takes a 2D vector `mat` as input and sets the entire row and column to 0 if an element is 0.

#### Parameters:
- `mat`: A reference to a 2D vector of integers representing the matrix.

#### Example:
```cpp
vector<vector<int>> matrix = {
    {1, 1, 1},
    {1, 0, 1},
    {1, 1, 1}
};
setZeroes(matrix);
// The matrix will be modified to:
// {
//     {1, 0, 1},
//     {0, 0, 0},
//     {1, 0, 1}
// }
```

### `vector<int> generateRow(int n)`

This function generates a row of Pascal's Triangle using the combination formula.

#### Parameters:
- `n`: An integer representing the row number.

#### Example:
```cpp
vector<int> row = generateRow(5);
// The row will be: {1, 4, 6, 4, 1}
```

### `vector<vector<int>> generate(int Rows)`

This function generates Pascal's Triangle up to the given number of rows.

#### Parameters:
- `Rows`: An integer representing the number of rows.

#### Example:
```cpp
vector<vector<int>> triangle = generate(5);
// The triangle will be:
// {
//     {1},
//     {1, 1},
//     {1, 2, 1},
//     {1, 3, 3, 1},
//     {1, 4, 6, 4, 1}
// }
```

### `void SortedStack::sort()`

This function sorts a stack using recursion.

#### Example:
```cpp
stack<int> s;
s.push(3);
s.push(1);
s.push(4);
s.push(2);
SortedStack obj;
obj.sort();
// The stack will be sorted in ascending order.
```

### `void subsequence(string &s, int index, vector<string> &ans, string &temp)`

This function generates all subsequences of a given string.

#### Parameters:
- `s`: The input string.
- `index`: The current index in the string.
- `ans`: A vector to store all generated subsequences.
- `temp`: A temporary string to build subsequences.

#### Example:
```cpp
string s = "abc";
vector<string> ans;
string temp = "";
subsequence(s, 0, ans, temp);
// The subsequences will be: {"", "a", "b", "ab", "c", "ac", "bc", "abc"}
```

### `int findMaxConsecutiveOnes(vector<int>& nums)`
This function finds the maximum number of consecutive 1s in a binary array.

#### Parameters:
- `nums`: A vector of integers containing only 0s and 1s.

#### Example:
```cpp
vector<int> nums = {1, 1, 0, 1, 1, 1};
int result = findMaxConsecutiveOnes(nums);
// The result will be: 3
```

### `ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)`
This function merges two sorted linked lists into one sorted linked list.

#### Parameters:
- `list1`: Pointer to the head of the first sorted linked list.
- `list2`: Pointer to the head of the second sorted linked list.

#### Example:
```cpp
// Assuming ListNode is defined as in the code.
ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
Solution sol;
ListNode* mergedList = sol.mergeTwoLists(list1, list2);
// The merged list will be: 1 -> 1 -> 2 -> 3 -> 4 -> 4
```

### `int maxSubArray(vector<int>& nums)`
This function implements Kadane's algorithm to find the maximum sum of a contiguous subarray.

#### Parameters:
- `nums`: A vector of integers.

#### Example:
```cpp
vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int result = maxSubArray(nums);
// The result will be: 6 (subarray: [4, -1, 2, 1])
```
