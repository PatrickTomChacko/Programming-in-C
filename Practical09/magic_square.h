//".h" file because this will be included into the main
//1D array is a pointer *
//2D array is a pointer to a pointer **

int isMagicSquare(int **square, const int n){

    if (n<0){
        return 0;
    }

    int magic_num = 0;
    int off_diag_sum = 0;
    int i,j;
    for (i=0;i<n;i++){
        magic_num += square[i][i];
        off_diag_sum += square[i][n-i-1];
    }
    if (magic_num != off_diag_sum){
        return 0;
    }
    for (i=0;i<n;i++){
        int rowSum=0;
        int colSum=0;
        for(j=0;j<n;j++){
            rowSum+=square[i][j];
            colSum+=square[j][i];
        }
        if (rowSum!=magic_num || colSum!=magic_num){
            return 0;
        }

    }
    return 1;
}
