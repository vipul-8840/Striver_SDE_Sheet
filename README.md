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
- `MojorEl.cpp`: Contains the implementation of the `majorityElement` function which finds the majority element in an array.
- `Search_In_2D.cpp`: Contains the implementation of the `searchMatrix` function which searches for a target value in a 2D matrix.
- `ReversePairs.cpp`: Contains the implementation of the `reversePairs` function which counts the number of reverse pairs in an array.
- `Pow.cpp`: Contains the implementation of the `myPow` function which calculates the power of a number.
- `Maj_El.cpp`: Contains the implementation of the `majorityElement` function which finds all elements that appear more than n/3 times in an array.
- `UniquePaths.cpp`: Contains the implementation of the `uniquePaths` function which calculates the number of unique paths in a grid.
- `TwoSum.cpp`: Contains the implementation of the `twoSum` function which finds two numbers in an array that add up to a target value.
- `LargetSubarray.cpp`: Contains the implementation of the `maxLen` function which finds the length of the largest subarray with sum 0.
- `fourSum.cpp`: Contains the implementation of the `fourSum` function which finds all unique quadruplets in an array that add up to a target value.
- `LongSubWithout.cpp`: Contains the implementation of the `lengthOfLongestSubstring` function which finds the length of the longest substring without repeating characters.
- `LongestConsSeq.cpp`: Contains the implementation of the `longestConsecutive` function which finds the length of the longest consecutive sequence in an array.
- `CountXor.cpp`: Contains the implementation of the function to count the number of subarrays with a given XOR.
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
    g++ -o MojorEl MojorEl.cpp
    g++ -o Search_In_2D Search_In_2D.cpp
    g++ -o ReversePairs ReversePairs.cpp
    g++ -o Pow Pow.cpp
    g++ -o Maj_El Maj_El.cpp
    g++ -o UniquePaths UniquePaths.cpp
    g++ -o TwoSum TwoSum.cpp
    g++ -o LargetSubarray LargetSubarray.cpp
    g++ -o fourSum fourSum.cpp
    g++ -o LongSubWithout LongSubWithout.cpp
    g++ -o LongestConsSeq LongestConsSeq.cpp
    g++ -o CountXor CountXor.cpp
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
    ./MojorEl
    ./Search_In_2D
    ./ReversePairs
    ./Pow
    ./Maj_El
    ./UniquePaths
    ./TwoSum
    ./LargetSubarray
    ./fourSum
    ./LongSubWithout
    ./LongestConsSeq
    ./CountXor
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
```cpps
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

### `int majorityElement(vector<int>& nums)`

This function finds the majority element in an array.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {3, 2, 3};
int majority = majorityElement(nums);
// The majority element will be 3
```

### `bool searchMatrix(vector<vector<int>>& mat, int target)`

This function searches for a target value in a 2D matrix.

#### Parameters:
- `mat`: A reference to a 2D vector of integers representing the matrix.
- `target`: An integer representing the target value to search for.

#### Example:
```cpp
vector<vector<int>> mat = {
    {1, 3, 5, 7},
    {10, 11, 16, 20},
    {23, 30, 34, 60}
};
bool found = searchMatrix(mat, 3);
// The found will be true
```

### `int reversePairs(vector<int>& nums)`

This function counts the number of reverse pairs in an array.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {1, 3, 2, 3, 1};
int count = reversePairs(nums);
// The count will be 2
```

### `double myPow(double x, int n)`

This function calculates the power of a number.

#### Parameters:
- `x`: A double representing the base.
- `n`: An integer representing the exponent.

#### Example:
```cpp
double result = myPow(2.0, 10);
// The result will be 1024.0
```

### `vector<int> majorityElement(vector<int>& nums)`

This function finds all elements that appear more than n/3 times in an array.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {3, 2, 3};
vector<int> result = majorityElement(nums);
// The result will be {3}
```

### `int uniquePaths(int m, int n)`

This function calculates the number of unique paths in a grid.

#### Parameters:
- `m`: An integer representing the number of rows.
- `n`: An integer representing the number of columns.

#### Example:
```cpp
int paths = uniquePaths(3, 7);
// The number of unique paths will be 28
```

### `vector<int> twoSum(vector<int>& nums, int target)`

This function finds two numbers in an array that add up to a target value.

#### Parameters:
- `nums`: A reference to a vector of integers.
- `target`: An integer representing the target value.

#### Example:
```cpp
vector<int> nums = {2, 7, 11, 15};
int target = 9;
vector<int> result = twoSum(nums, target);
// The result will be {0, 1}
```

### `int maxLen(vector<int>& arr)`

This function finds the length of the largest subarray with sum 0.

#### Parameters:
- `arr`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> arr = {1, -1, 3, 2, -2, -3, 3};
int length = maxLen(arr);
// The length will be 5 for the subarray [1, -1, 3, 2, -2]
```

### `vector<vector<int>> fourSum(vector<int>& nums, int target)`

This function finds all unique quadruplets in an array that add up to a target value.

#### Parameters:
- `nums`: A reference to a vector of integers.
- `target`: An integer representing the target value.

#### Example:
```cpp
vector<int> nums = {1, 0, -1, 0, -2, 2};
int target = 0;
vector<vector<int>> result = fourSum(nums, target);
// The result will be {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}}
```

### `int lengthOfLongestSubstring(string s)`

This function finds the length of the longest substring without repeating characters.

#### Parameters:
- `s`: A string representing the input string.

#### Example:
```cpp
string s = "abcabcbb";
int length = lengthOfLongestSubstring(s);
// The length will be 3 for the substring "abc"
```

### `int longestConsecutive(vector<int>& nums)`

This function finds the length of the longest consecutive sequence in an array.

#### Parameters:
- `nums`: A reference to a vector of integers.

#### Example:
```cpp
vector<int> nums = {100, 4, 200, 1, 3, 2};
int length = longestConsecutive(nums);
// The length will be 4 for the sequence [1, 2, 3, 4]
```

### `int main()`

This function counts the number of subarrays with a given XOR.

#### Example:
```cpp
int k = 6;
vector<int> v = {4, 2, 2, 6, 4};
int xors = 0, count = 0;
unordered_map<int, int> m;
m[xors]++;
for (int i = 0; i < v.size(); i++) {
    xors = xors ^ v[i];
    int x = xors ^ k;
    count += m[x];
    m[xors]++;
}
cout << count << endl;
// The count will be 4
```
