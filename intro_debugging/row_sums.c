int total_sum(int rows, int cols)
{
    int r;
    int total = 0;
    int current = 0;

    for (r = 1; r <= rows; r++)
    {
        current = row_sum(r, cols);
        total += current;
    }

    return total;
}
