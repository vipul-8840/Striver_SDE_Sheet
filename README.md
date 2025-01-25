# Set Matrix Zeroes

This project contains a C++ implementation of the algorithm to set matrix zeroes. The algorithm modifies a given matrix such that if an element is 0, its entire row and column are set to 0.

## File Description

- `setMatrixZeroes.cpp`: Contains the implementation of the `setZeroes` function which sets the matrix zeroes.

## Compilation and Execution

To compile and run the program, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the `setMatrixZeroes.cpp` file.
3. Compile the program using a C++ compiler, for example:
    ```sh
    g++ -o setMatrixZeroes setMatrixZeroes.cpp
    ```
4. Run the compiled program:
    ```sh
    ./setMatrixZeroes
    ```

## Function Description

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
