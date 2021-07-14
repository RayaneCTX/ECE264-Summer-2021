/*
 * The following code allocates a 2D matrix with 10 rows and 20 columns.
 */
int main()
{
	int numRows = 10;
	int numCols = 20;
	// We allocate an array of numRows integer pointers, where each
	// integer pointer will correspond to an integer array, i.e. the rows
	// of the matrix.
	int **matrix = malloc(numRows * sizeof(int *));
	if(matrix == NULL) {
		fprintf(stderr, "[ERROR] malloc() failed.\n");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < numRows; i++) {
		// We allocate one row, an array of numCols integers.
		matrix[i] = malloc(numCols * sizeof(int));
		if(matrix[i] == NULL) {
			fprintf(stderr, "[ERROR] malloc() failed.\n");
			exit(EXIT_FAILURE);
		}
	}
}
