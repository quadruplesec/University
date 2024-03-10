unsigned long mersAux(unsigned long n) {
  unsigned long retValue{1}; 
  while (n-- > 0) {
    retValue *= 2;
  }
  return retValue - 1;
}

unsigned long next_mersenne(unsigned long n) {
  long i{0};
  while(mersAux(i) < n) {
    ++i;
  }
  return mersAux(i);
}



