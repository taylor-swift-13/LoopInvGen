void foo()  
/*@ Require emp 
   Ensure emp
*/ 
    {

    int x = 0 ;
    
    
    while (x < 100) {
      
      x  = (x + 1);
  
    }
   /*@  x == 100 */
  }