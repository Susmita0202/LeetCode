/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int maxElement(int* arr,int r,int c){
    int max=INT_MIN;
    int ind=-1;
    for(int i=0;i<c;i++){
        if(max<arr[i]){
            max=arr[i];
            ind=i;
        }
    }
    return ind;
}
int* findPeakGrid(int** mat, int matSize, int* matColSize, int* returnSize) {
    int* arr=(int*)malloc(sizeof(int)*2);
    int row=-1,col=-1;
    *returnSize=2;
    //case if the matrix has only one row..
    if(matSize==1){arr[0]=0;arr[1]=maxElement(mat[0],matSize,*matColSize);return arr;}

    for(int i=0;i<matSize;i++){
        row=i;
        col=maxElement(mat[i],matSize,*matColSize);
        if(i==0 && mat[row][col]>mat[row+1][col]){
            arr[0]=row;arr[1]=col;break;
        }
        else if(i==matSize-1 && mat[row][col]>mat[row-1][col]){
            arr[0]=row;arr[1]=col;break;
        }
        else if(row>0 && row< matSize && mat[row][col]>mat[row-1][col] && mat[row][col]>mat[row+1][col]){
            arr[0]=row;arr[1]=col;break;
        }
        else col=0;
    }
    return arr;
}
