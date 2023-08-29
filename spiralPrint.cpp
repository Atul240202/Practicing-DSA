void spiralPrint(int **input, int nRows, int nCols) {
    int firstRow = 0;
    int lastCol = nCols - 1;
    int lastRow = nRows - 1;
    int firstCol = 0;

    while (firstRow <= lastRow && firstCol <= lastCol) {
        for (int i = firstCol; i <= lastCol; i++) {
            cout << input[firstRow][i] << " ";
        }
        firstRow++;

        for (int i = firstRow; i <= lastRow; i++) {
            cout << input[i][lastCol] << " ";
        }
        lastCol--;

        if (firstRow <= lastRow) {
            for (int i = lastCol; i >= firstCol; i--) {
                cout << input[lastRow][i] << " ";
            }
            lastRow--;
        }

        if (firstCol <= lastCol) {
            for (int i = lastRow; i >= firstRow; i--) {
                cout << input[i][firstCol] << " ";
            }
            firstCol++;
        }
    }
}
