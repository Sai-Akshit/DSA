#include <stdio.h>

int binarySearch(int arr[], int length, int target) {
  int start = 0;
  int end = length - 1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] < target) {
      start = mid + 1;
    } else if (arr[mid] > target) {
      end = mid - 1;
    } else {
      // element is found
      return mid;
    }
  }

  // if element is not found return -1
  return -1;
//   printf("Element is not found\n");
}

int main() {
  int arr[10] = {4, 9, 13, 15, 19, 20, 22, 24, 28, 32};
  int target = 40;

  printf("%d\n", binarySearch(arr, 10, target));

  return 0;
}



