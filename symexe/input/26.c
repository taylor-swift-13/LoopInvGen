void foo(int n)  
/*@ Require emp 
   Ensure emp
*/ 
    {

    int x = n;
    
    
    while (x > 1) {
      
       x  = x - 1;
  
    }
  
   /*@  (x != 1) => (n < 1) */
  }