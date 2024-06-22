class Solution {
public:
    int maxele(vector<vector<int>> arr,int col){
        int ele=-1;
        int row=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i][col]>ele){
                ele=arr[i][col];
                row=i;
            }
        }
        return row;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
    vector<int> ans;
     int n=mat.size();
     int m=mat[0].size();
     int low=0,high=m-1;
     while(low<=high){
        int mid=(low+high)/2;
        int row=maxele(mat,mid);
        int left=mid-1>=0 ? mat[row][mid-1]:-1;
        int right=mid+1<m ? mat[row][mid+1]:-1;
        if(mat[row][mid]>left && mat[row][mid]>right){
            return {row, mid};
        }
        else if(mat[row][mid]<left){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }   
     return {-1,-1};
    }
};