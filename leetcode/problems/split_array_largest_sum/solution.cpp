class Solution {
public:
  bool isVaild(vector<int> &arr, int nBook, int nStudents, int maxPage) {
  int student = 1;
  int sum = 0;
  for (int i = 0; i < nBook; i++) {
    sum = sum + arr[i];
    if (sum > maxPage) {
      student++;
      sum = arr[i];
    }
    if (student > nStudents)
      return false;
  }
  return true;
}

    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isVaild(arr, n, k, mid) == true) {
            // res = mid;
            high = mid - 1;
             } else
             low = mid + 1;
             }
            return low;
    }
};