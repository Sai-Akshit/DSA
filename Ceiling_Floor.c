// ceiling & floor of a number
#include <stdio.h>

int ceiling(int arr[], int length, int target);
int floor_fun(int arr[], int length, int target);

int main() {
    int length=10;
    int arr[7] = {2, 3, 6, 9, 14, 16, 18};  // 0, 1, 2, 3, 4, 5, 6
    int target = 4;
    // printf("%d\n", ceiling(arr, length, target));
    printf("%d\n", floor_fun(arr, length, target));

    return 0;
}

int ceiling(int arr[], int length, int target) {
    int start, end, mid;
    start=0;
    end=length-1;
    while (start <= end) {
        mid = end - (end - start)/2; // (start+end)/2
        if (arr[mid] < target) {
            start = mid + 1;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return arr[end + 1];
}

int floor_fun(int arr[], int length, int target) {
    int start, end, mid;
    start=0;
    end=length-1;
    while (start <= end) {
        mid = end - (end - start)/2; // (start+end)/2
        if (arr[mid] < target) {
            start = mid + 1;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return arr[end];
}
