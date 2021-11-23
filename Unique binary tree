Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.
Example 1:
Input: n = 3
Output: 5
  
Example 2:
Input: n = 1
Output: 1
int numTrees(int n){
 long K = 1;
    for(int i = 0; i < n; ++i) {
        K = K * 2 * (2 * i + 1) / (i + 2);
    }
    return (int) K;
}
