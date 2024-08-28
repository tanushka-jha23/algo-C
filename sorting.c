#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
  int c = *a;
  *a = *b;
  *b = c;
 }

void bubble_sort(int* a, int length) {
  int count = 0;
  for(int i=0; i < length-1; i++) {
    if(a[i] > a[i+1]) {
      count = count + 1;
    }
  }
  if(count != 0) {
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
}

void bubble_sort_conventional(int* a, int length) {
  int flag = 0; 
  for(int i = 0; i < length-1; i++) {
    flag = 0;
    for(int j = 0; j < length-i-1; j++) {
      if(a[j] > a[j+1]) {
        flag = 1;
        swap(a+j, a+j+1);
      }
    }
    if(flag == 0) {
      break;
    }
  }
}


