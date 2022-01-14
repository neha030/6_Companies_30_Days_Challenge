/* Question
Rotate by 90 degree
*/

void rotate(vector<vector<int>> &matrix)
{
    // Your code goes here
    int n = matrix.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    while (j < n)
    {
        for (int i = j; i < n; i++)
            swap(matrix[j][i], matrix[i][j]);
        j++;
    }
}