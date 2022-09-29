// C++ implementation to concatenate
// two matrices of size N x M

#include <bits/stdc++.h>

using namespace std;

#define M 3
#define N 3

// Function to concatenate two
// matrices A[][] and B[][]
void mergeMatrix(int A[M][N],
                int B[M][N],
                int C[M][N])
{

    // Matrix to store
    // the result
    int D[M][3 * N];

    // Merge the THREE matrices
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N * 3; j++) {
            // To store elements
            // of matrix A
            if (i == 0)
                D[0][j] = A[i][j];

        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N * 3; j++) {
            // To store elements
            // of matrix A
            if (i == 0)
                D[1][j] = B[i][j];

        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N * 3; j++) {
            // To store elements
            // of matrix A
            if (i == 0)
                D[2][j] = C[i][j];

        }
    }
    // Print the result
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 3 * N;
            j++)
            cout << D[i][j] << " ";
        cout << endl;
    }
}

// Driven Code
int main()
{
    int A[M][N] = { { 1, 2, 4 },
                    { 3, 7, 2 },
                    {5, 8, 4} };

    int B[M][N] = { { 1, 2, 2 },
                    { 2, 2, 1 },
                    {1, 1, 1} };
                    
    int C[M][N] = { { 11, 14, 12 },
                    { 12, 45, 30 },
                    {23, 45, 12} };            

    // Find the merge of
    // the 2 matrices
    mergeMatrix(A, B, C);

    return 0;
}
