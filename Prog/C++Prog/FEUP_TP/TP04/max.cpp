int max(const int a[], int n) {
  if (n == 1) return a[0];

  int max = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  
  return max;
}
