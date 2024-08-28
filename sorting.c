#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
  int c = *b;
  *a = *b;
  *b = c;
 }

void bubble_sort(int* a, int length) {
  int i = 0;
  int j = 1;
  while(i < length - 1) {
    while(j < length) {
      if(a[i] > a[j]) { 
        swap(a+i, a+j);
      }
      j = j + 1;
    }
    i = i + 1;
    j = i + 1;
  }
}

void bubble_sort_conventional(int* a, int length) {
  for(int i = 0; i < length-1; i++) {
    for(int j = 1; j < length-i-1; j++) {
      if(a[j] > a[j+1]) {
        swap(a+i, a+j);
      }
    }
  }
}

void array_print(int* a, int length) {
  for(int i = 0; i < length; i++) {
    printf("%d", a[i]);
  }
}

int main() {
  int arr[6] = {4, 3, 1};
  bubble_sort_conventional(arr, 6);
  array_print(arr, 6);

  return 0;
}

