class Solution {
    public int levels(TreeNode a) {
        if (a == null) return 0;
        return 1 + Math.max(levels(a.left), levels(a.right));
    }

    public int diameterOfBinaryTree(TreeNode root) {
        if (root == null) return 0;

        int myDia = levels(root.left) + levels(root.right);
        int leftD = diameterOfBinaryTree(root.left);
        int rightD = diameterOfBinaryTree(root.right);

        return Math.max(myDia, Math.max(leftD, rightD));
    }
}
