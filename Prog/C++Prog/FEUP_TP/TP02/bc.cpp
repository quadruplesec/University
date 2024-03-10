unsigned long fact(unsigned long n) {
  if (n < 2) return 1;
  else return n*fact(n-1);
}

unsigned long bc(unsigned long n, unsigned long k) {
  unsigned long divisor = fact(k);
  unsigned long dividend = fact(n);
  divisor *= fact(n-k);

  return dividend/divisor;
}
