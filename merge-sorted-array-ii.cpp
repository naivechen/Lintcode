// http://lintcode.com/en/problem/merge-sorted-array-ii/


class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        for(int i=m-1, j=n-1, k=n+m-1;k>=0; k--)
        {
            if(A[i]>B[j]) A[k]=A[i],i--;
            else A[k]=B[j],j--;
        }
    }
};
