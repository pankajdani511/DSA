#include <iostream>
#include <climits>

using namespace std;

int maxRowSum(int matrix[3][3], int row, int col)
{

  int maxrowSum = INT_MIN ; // Initialize maxRowSum to the smallest possible integer value
  for (int i = 0; i < row; i++)
  {
    int rowSum = 0;
    for (int j = 0; j < col; j++)
    {
      rowSum = rowSum + matrix[i][j];
    }
    maxrowSum = max(maxrowSum, rowSum);
  }
  return maxrowSum;
}

int main()
{
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int row = 3;
  int col = 3;

  cout << "Maximum Row Sum: " << maxRowSum(matrix, row, col) << endl;

  return 0;
}
