                            
// #include <iostream>
// #include <sstream>
// #include <unordered_map>
// #include <vector>
// #include <queue>
// #include <map>

// using namespace std;

// // TreeNode structure
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };

// class Solution {
// public:
//     // Function to perform iterative Morris
//     // inorder traversal of a binary tree
//     vector<int> getInorder(TreeNode* root) {
//         // Vector to store the
//         // inorder traversal result
//         vector<int> inorder;
//         // Pointer to the current node,
//         // starting from the root
//         TreeNode* cur = root;
        
//         // Loop until the current
//         // node is not NULL
//         while (cur != NULL) {
//             // If the current node's
//             // left child is NULL
//             if (cur->left == NULL) {
//                 // Add the value of the current
//                 // node to the inorder vector
//                 inorder.push_back(cur->val);
//                 // Move to the right child
//                 cur = cur->right;
//             } else {
//                 // If the left child is not NULL,
//                 // find the predecessor (rightmost node
//                 // in the left subtree)
//                 TreeNode* prev = cur->left;
//                 while (prev->right && prev->right != cur) {
//                     prev = prev->right;
//                 }
                
//                 // If the predecessor's right child
//                 // is NULL, establish a temporary link
//                 // and move to the left child
//                 if (prev->right == NULL) {
//                     prev->right = cur;
//                     cur = cur->left;
//                 } else {
//                     // If the predecessor's right child
//                     // is already linked, remove the link,
//                     // add current node to inorder vector,
//                     // and move to the right child
//                     prev->right = NULL;
//                     inorder.push_back(cur->val);
//                     cur = cur->right;
//                 }
//             }
//         }
        
//         // Return the inorder
//         // traversal result
//         return inorder;
//     }
// };


// int main() {

//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);
//     root->left->right->right = new TreeNode(6);

//     Solution sol;
    
//     vector<int> inorder = sol.getInorder(root);

//     cout << "Binary Tree Morris Inorder Traversal: ";
//     for(int i = 0; i< inorder.size(); i++){
//         cout << inorder[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// int sr =0, sc =0, er = arr.size() - 1, sc = arr[0].size() - 1 ;

// while(sr)
// for(int j = sc ;j <=ec ;j++){
//     ans.push_back(arr[sr][j]);
// }
// sr++;

// for(int j = sr;j<=er;j++){
//     ans.push_back(arr[j][ec]);
// }
// ec--;

// for(int j = ec ; j>= sc;j--){
//     ans.push_back(arr[er][j]);
// }
// er--;

// for(int j = er; j>=sr; j--){
//     ans.push_back(arr[j][sc]);
// }
// sc++;
                            
       


#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) {
        while (right <= high && arr[i] > 2 * arr[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += countPairs(arr, low, mid, high); //Modification
    merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int team(vector <int> & skill, int n)
{
    return mergeSort(skill, 0, n - 1);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}

