class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int si = 0, ei = arr.size() - 1;

        while (si <= ei) {
            int mid = si + (ei - si) / 2;

            if (arr[mid] == key)
                return mid;

            // Left half sorted
            if (arr[si] <= arr[mid]) {
                if (arr[si] <= key && key < arr[mid])
                    ei = mid - 1;
                else
                    si = mid + 1;
            }
            // Right half sorted
            else {
                if (arr[mid] < key && key <= arr[ei])
                    si = mid + 1;
                else
                    ei = mid - 1;
            }
        }
        return -1;
    }
};
