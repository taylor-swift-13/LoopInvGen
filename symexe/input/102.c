void foo(int n)  
/*@ Require emp 
   Ensure emp
*/ 
    {
  
    int x = 0;
    
    
    while (x < n) {
      
      x  = (x + 1);
      
    }
    /*@  (n >= 0) => (x == n) */
    
  }