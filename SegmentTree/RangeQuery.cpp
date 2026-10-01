class NumArray {
public:
    vector<int> segmentTree;
    int n;

    void buildSegmentTree(int i, int l, int r, vector<int>& nums) {
        if (l == r) {
            segmentTree[i] = nums[l];
            return;
        }

        int mid = (l + r) / 2;

        buildSegmentTree(2 * i + 1, l, mid, nums);
        buildSegmentTree(2 * i + 2, mid + 1, r, nums);

        segmentTree[i] =
            segmentTree[2 * i + 1] +
            segmentTree[2 * i + 2];
    }

    void updateSegTree(int idx, int val, int i, int l, int r) {
        if (l == r) {
            segmentTree[i] = val;
            return;
        }

        int mid = (l + r) / 2;

        if (idx <= mid) {
            updateSegTree(idx, val, 2 * i + 1, l, mid);
        } else {
            updateSegTree(idx, val, 2 * i + 2, mid + 1, r);
        }

        segmentTree[i] =
            segmentTree[2 * i + 1] +
            segmentTree[2 * i + 2];
    }

    int querySum(int start, int end, int i, int l, int r) {

        // No overlap
        if (r < start || l > end) {
            return 0;
        }

        // Complete overlap
        if (l >= start && r <= end) {
            return segmentTree[i];
        }

        int mid = (l + r) / 2;

        return querySum(start, end, 2 * i + 1, l, mid) +
               querySum(start, end, 2 * i + 2, mid + 1, r);
    }

    NumArray(vector<int>& nums) {
        n = nums.size();

        segmentTree.resize(4 * n);

        buildSegmentTree(0, 0, n - 1, nums);
    }

    void update(int index, int val) {
        updateSegTree(index, val, 0, 0, n - 1);
    }

    int sumRange(int left, int right) {
        return querySum(left, right, 0, 0, n - 1);
    }
};