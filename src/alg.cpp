// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int number = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value)
        number++;
    }
  }
  return number;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int number = 0, x = 0, y = len - 1, middle;
  while (x < y) {
    middle = (x + y) / 2;
    if (value == arr[middle])
      break;
    if (arr[middle] < value)
      x = middle;
    else
      y = middle;
  }
  for (int i = y; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[i] + arr[j] == value)
        number++;
      if (arr[i] + arr[j] > value)
        break;
    }
  }
  return number;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int number = 0, x = 0, y = len - 1, middle, mid;
  while (x < y - 1) {
    middle = (x + y) / 2;
    if (arr[middle] <= value)
      x = middle;
    else
      y = middle;
  }
  for (int i = 0; i < x; i++) {
    int left = i + 1, right = L;
    while (left < right) {
      mid = (left + right) / 2;
      if (arr[mid] < (value - arr[i]))
        left = mid + 1;
      else
        right = mid;
    }
    while (arr[left] == (value - arr[i])) {
      number++;
      left++;
    }
  }
  return number;
}
