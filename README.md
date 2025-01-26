# SDE SHEET

This project contains C++ implementations of various algorithms.

## File Descriptions

- `setMatrixZeroes.cpp`: Contains the implementation of the `setZeroes` function which sets the matrix zeroes.
- `PascalTriangle.cpp`: Contains the implementation of functions to generate Pascal's Triangle.
- `Kadanes.cpp`: Contains the implementation of the `maxSubArray` function which finds the maximum sum of a contiguous subarray.
- `SortColors.cpp`: Contains the implementation of the `sortColors` function which sorts an array containing 0s, 1s, and 2s.

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
    ```
4. Run the compiled programs:
    ```sh
    ./setMatrixZeroes
    ./PascalTriangle
    ./Kadanes
    ./SortColors
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
