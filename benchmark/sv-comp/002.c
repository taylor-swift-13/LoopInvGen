
void foo(int A[2048]) {
  int i = 0;

  
  for (i = 0; i < 1024; i++) {
    A[i] = i;
  }

  /*@ assert A[1023] == 1023; */
}
