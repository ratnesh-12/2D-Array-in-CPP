# 2D Arrays
# 1. Matrix Addition (Exp1)
# Aim: 
To write a program to add two matrices of compatible dimensions.

# Theory: 
Matrix addition is done element-by-element. For two matrices A and B of size m × n, their sum C = A + B is also an m × n matrix where C(i,j) = A(i,j) + B(i,j).

# Algorithm:

Input rows and columns for both matrices.

Check if dimensions match.

Read elements of both matrices.

Add corresponding elements and store in a result matrix.

Display the sum matrix.

# Conclusion: 
From this experiment, I learned that two matrices can only be added if they have the exact same dimensions, and addition is done element-by-element.

# 2. Diagonal Sum of a Matrix (Exp2)
# Aim: 
To find the sum of both principal and secondary diagonals of a square matrix.

# Theory: 
A square matrix has:

Primary diagonal: elements where i = j

Secondary diagonal: elements where i + j = n - 1
Sum is calculated by iterating over these positions.

# Algorithm:

Input the size of the square matrix.

Read all elements.

For each element, if i = j, add to primary sum.

If i + j = n - 1, add to secondary sum.

Display both sums.

# Conclusion: 
I learned how to identify and access primary and secondary diagonals in a square matrix, and how to sum their elements efficiently.

# 3. Matrix Input and Display (Exp3)
# Aim: 
To read the elements of a matrix from the user and display the matrix in proper format.

# Theory: 
A matrix is a 2D arrangement of elements in rows and columns. Taking input for each element involves nested loops, where the outer loop handles rows and the inner loop handles columns. Displaying the matrix uses the same nested loop structure to print elements in matrix form.

# Algorithm:

Input the number of rows and columns of the matrix.

Using nested loops, take input for each element of the matrix.

Using nested loops, print the elements in row-column format.

# Conclusion: 
I learned how to take user input for each element of a matrix and display it neatly using nested loops.

# 4. Matrix Multiplication (Exp4)
# Aim: 
To multiply two matrices and display the resultant matrix.

# Theory: 
Matrix multiplication is possible if the number of columns in the first matrix equals the number of rows in the second. Each element of the product matrix is calculated as the dot product of the corresponding row and column.

# Algorithm:

Input dimensions of both matrices.

Check if multiplication is possible (c1 = r2).

Read both matrices.

For each cell in the result matrix, compute sum of products of row elements of the first matrix and column elements of the second matrix.

Display the result matrix.

# Conclusion: 
I learned that matrix multiplication is only possible when the number of columns in the first matrix equals the number of rows in the second, and that each element of the result is calculated using a dot product.

# 5. Matrix Transpose (Exp5)
# Aim: 
To find the transpose of a given matrix.

# Theory: 
The transpose of a matrix A is obtained by flipping it over its diagonal, converting rows into columns and columns into rows. Mathematically, A^T(i,j) = A(j,i).

# Algorithm:

Input rows and columns of the matrix.

Read the matrix elements.

For each element at (i, j), place it at position (j, i) in the transpose matrix.

Display the transposed matrix.

# Conclusion: 
I learned that the transpose of a matrix is obtained by swapping rows with columns, and it can be done by exchanging element positions (i, j) with (j, i).
