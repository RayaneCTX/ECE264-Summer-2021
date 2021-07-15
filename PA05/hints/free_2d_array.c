/*
 *
 */
int main()
{
	int numRows = 10;
	int numCols = 20;
	// Suppose the allocate function exists and allocates the 2D array
	// just like in alloc_2d_array.c in the current directory.
	int **matrix = allocate(numRows, numCols);

	// First free all rows.
	for(int i = 0; i < numRows; i++) {
		free(matrix[i]);
	}
	// Then free the array of rows
	free(matrix);
}
