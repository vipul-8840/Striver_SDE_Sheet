# SDE SHEET

This project contains C++ implementations of various algorithms.

## File Descriptions

- `setMatrixZeroes.cpp`: Contains the implementation of the `setZeroes` function which sets the matrix zeroes.
- `PascalTriangle.cpp`: Contains the implementation of functions to generate Pascal's Triangle.
- `Kadanes.cpp`: Contains the implementation of the `maxSubArray` function which finds the maximum sum of a contiguous subarray.
- `SortColors.cpp`: Contains the implementation of the `sortColors` function which sorts an array containing 0s, 1s, and 2s.
- `RotateMat.cpp`: Contains the implementation of the `rotate` function which rotates a matrix by 90 degrees.
- `Duplicate.cpp`: Contains the implementation of the `findDuplicate` function which finds the duplicate number in an array.
- `MergeInt.cpp`: Contains the implementation of the `merge` function which merges overlapping intervals.
- `NextPermutation.cpp`: Contains the implementation of the `nextPermutation` function which generates the next lexicographical permutation of an array.
- `RepeatMissign.cpp`: Contains the implementation of the function to find the repeating and missing numbers in an array.
- `MergeSorted.cpp`: Contains the implementation of the `merge` function which merges two sorted arrays.
- `CountInversion.cpp`: Contains the implementation of the function to count the number of inversions in an array.
- `db.json`: Contains mock data for the API.

## Compilation and Execution

To compile and run the programs, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the `.cpp` files.
3. Compile the programs using a C++ compiler, for example:
    ```sh
    g++ -o setMatrixZeroes setMatrixZeroes.cpp
    g++ -o PascalTriangle PascalTriangle.cpp
    g++ -o Kadanes Kadanes.cpp
    g++ -o SortColors SortColors.cpp
    g++ -o RotateMat RotateMat.cpp
    g++ -o Duplicate Duplicate.cpp
    g++ -o MergeInt MergeInt.cpp
    g++ -o NextPermutation NextPermutation.cpp
    g++ -o RepeatMissign RepeatMissign.cpp
    g++ -o MergeSorted MergeSorted.cpp
    g++ -o CountInversion CountInversion.cpp
    ```
4. Run the compiled programs:
    ```sh
    ./setMatrixZeroes
    ./PascalTriangle
    ./Kadanes
    ./SortColors
    ./RotateMat
    ./Duplicate
    ./MergeInt
    ./NextPermutation
    ./RepeatMissign
    ./MergeSorted
    ./CountInversion
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

### `int maxSubArray(vector<int>& nums)`

This function finds the maximum sum of a contiguous subarray using Kadane's Algorithm.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int max_sum = maxSubArray(nums);
// The max_sum will be 6 for the subarray [4, -1, 2, 1]
```

### `void sortColors(vector<int>& nums)`

This function sorts an array containing 0s, 1s, and 2s in-place.

#### Parameters:
- `nums`: A reference to a vector of integers containing only 0s, 1s, and 2s.

#### Example:
```cpp
vector<int> nums = {2, 0, 2, 1, 1, 0};
sortColors(nums);
// The nums array will be sorted to: {0, 0, 1, 1, 2, 2}
```

### `void rotate(vector<vector<int>>& mat)`

This function rotates a matrix by 90 degrees clockwise.

#### Parameters:
- `mat`: A reference to a 2D vector of integers representing the matrix.

#### Example:
```cpp
vector<vector<int>> mat = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
rotate(mat);
// The matrix will be modified to:
// {
//     {7, 4, 1},
//     {8, 5, 2},
//     {9, 6, 3}
// }
```

### `int findDuplicate(vector<int>& nums)`

This function finds the duplicate number in an array.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {1, 3, 4, 2, 2};
int duplicate = findDuplicate(nums);
// The duplicate will be 2
```

### `vector<vector<int>> merge(vector<vector<int>>& intervals)`

This function merges overlapping intervals.

#### Parameters:
- `intervals`: A reference to a vector of vectors of integers representing the intervals.

#### Example:
```cpp
vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
vector<vector<int>> merged = merge(intervals);
// The merged intervals will be: {{1, 6}, {8, 10}, {15, 18}}
```

### `void nextPermutation(vector<int>& nums)`

This function generates the next lexicographical permutation of an array.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {1, 2, 3};
nextPermutation(nums);
// The nums array will be modified to: {1, 3, 2}
```

### `int main()`

This function finds the repeating and missing numbers in an array.

#### Example:
```cpp
int arr[] = {1, 2, 3, 3, 4};
int n = 5;
int repeatNo, missingNo;
int hash[n + 1] = {0};
for (int i = 0; i < 5; i++) {
    hash[arr[i]]++;
}
for (int i = 1; i < n + 1; i++) {
    if (hash[i] == 2) {
        repeatNo = i;
    }
    if (hash[i] == 0) {
        missingNo = i;
    }
}
cout << "Missing Number: " << missingNo << ", Repeating Number: " << repeatNo << endl;
```

### `void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)`

This function merges two sorted arrays.

#### Parameters:
- `nums1`: A reference to the first sorted array.
- `m`: The number of elements in `nums1`.
- `nums2`: A reference to the second sorted array.
- `n`: The number of elements in `nums2`.

#### Example:
```cpp
vector<int> nums1 = {1, 2, 3, 0, 0, 0};
vector<int> nums2 = {2, 5, 6};
merge(nums1, 3, nums2, 3);
// The nums1 array will be modified to: {1, 2, 2, 3, 5, 6}
```

### `int main()`

This function counts the number of inversions in an array.

#### Example:
```cpp
int arr[] = {3, 2, 1, 4, 6};
int count = 0;
for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
        if (arr[i] > arr[j])
            count++;
    }
}
cout << "No of Inversion " << count << " ";
```
