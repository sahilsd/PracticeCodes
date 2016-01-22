int climbStairs(int n) 
{
    int numpaths = 0;
    int a = 1, b = 2;
    if(n<=2) return n;

     for(int i=3; i<=n; i++) {
         numpaths += a+b;
         a = b;
         b = numpaths;
     }
     return numpaths;
}
