
int unknown()
/*@ Require emp 
   Ensure __return <= INT_MAX && __return > INT_MIN
*/ ;


void foo()  
/*@ Require emp 
   Ensure emp
*/ 
    {


  int w = 1;
  int z = 0;
  int x = 0;
  int y = 0;


  while(unknown()){
  	if(w) {
  	  x++;
  	  w = !w;
	  }
	
    if(!z) {
      y++; 
      z=!z;
    }
  }

  /*@  x == y */
  
}
