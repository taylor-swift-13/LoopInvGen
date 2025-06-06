
void foo(int v1, int v2 ,int v3,int size, int y, int z)
{
    int x = 0;

    /*@ 
      loop invariant 0 <= x <= size;
      loop invariant z >= y;
      loop assigns x, y;
      loop variant size - x;
    */
    while(x < size) {
       x += 1;
       if( z <= y) {
          y = z;
       }
    }

    /*@ assert (size > 0) ==> (z >= y);  */
}
