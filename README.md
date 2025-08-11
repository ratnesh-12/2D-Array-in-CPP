# Multidimensional-Arrays

# 1. Matrix Addition (Exp1)
# Aim:
To write a program to add two matrices of compatible dimensions.

# Theory:
Matrix addition is done element-by-element. For two matrices 
𝐴
A and 
𝐵
B of size 
𝑚
×
𝑛
m×n, their sum 
𝐶
=
𝐴
+
𝐵
C=A+B is also an 
𝑚
×
𝑛
m×n matrix where 
𝐶
𝑖
𝑗
=
𝐴
𝑖
𝑗
+
𝐵
𝑖
𝑗
C 
ij
​
 =A 
ij
​
 +B 
ij
​
 .

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

Primary diagonal: elements where 
𝑖
=
𝑗
i=j.

Secondary diagonal: elements where 
𝑖
+
𝑗
=
𝑛
−
1
i+j=n−1.
Sum is calculated by iterating over these positions.

# Algorithm:

Input the size of the square matrix.

Read all elements.

For each element, if 
𝑖
=
𝑗
i=j, add to primary sum.

If 
𝑖
+
𝑗
=
𝑛
−
1
i+j=n−1, add to secondary sum.

Display both sums.

# Conclusion:
I learned how to identify and access primary and secondary diagonals in a square matrix, and how to sum their elements efficiently.

# 3. Matrix Multiplication (Exp4)
# Aim:
To multiply two matrices and display the resultant matrix.

# Theory:
Matrix multiplication is possible if the number of columns in the first matrix equals the number of rows in the second. Each element of the product matrix is calculated as the dot product of corresponding row and column.

# Algorithm:

Input dimensions of both matrices.

Check if multiplication is possible (
𝑐
1
=
𝑟
2
c 
1
​
 =r 
2
​
 ).

Read both matrices.

For each cell in the result matrix, compute sum of products of row elements of first matrix and column elements of second matrix.

Display the result matrix.

# Conclusion:
I learned that matrix multiplication is only possible when the number of columns in the first matrix equals the number of rows in the second, and that each element of the result is calculated using a dot product.

# 4. Matrix Transpose (Exp5)
# Aim:
To find the transpose of a given matrix.

# Theory:
The transpose of a matrix 
𝐴
A is obtained by flipping it over its diagonal, converting rows into columns and columns into rows. Mathematically, 
𝐴
𝑖
𝑗
𝑇
=
𝐴
𝑗
𝑖
A 
ij
T
​
 =A 
ji
​
 .

# Algorithm:

Input rows and columns of the matrix.

Read the matrix elements.

For each element at 
(
𝑖
,
𝑗
)
(i,j), place it at position 
(
𝑗
,
𝑖
)
(j,i) in the transpose matrix.

Display the transposed matrix.

# Conclusion:
I learned that the transpose of a matrix is obtained by swapping rows with columns, and it can be done by exchanging element positions 
(
𝑖
,
𝑗
)
(i,j) with 
(
𝑗
,
𝑖
)
(j,i).
