int low = 0;
int high = (n * m) - 1;

while (low <= high)
{
    int mid = (low + high) / 2;

    int row = mid / m;
    int column = mid % m;

    if (matrix[row][column] == target)
    {
        return true;
    }

    if (matrix[row][column] > target)
    {
        high = mid - 1;
    }
    else
    {
        low = mid + 1;
    }
}

return false;