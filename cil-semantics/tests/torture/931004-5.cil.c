/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct tiny {
   short c ;
   short d ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void f(int n , struct tiny x , struct tiny y , struct tiny z , long l ) 
{ 

  {
  if ((int )x.c != 10) {
    abort();
  }
  if ((int )x.d != 20) {
    abort();
  }
  if ((int )y.c != 11) {
    abort();
  }
  if ((int )y.d != 21) {
    abort();
  }
  if ((int )z.c != 12) {
    abort();
  }
  if ((int )z.d != 22) {
    abort();
  }
  if (l != 123L) {
    abort();
  }
  return;
}
}
int main(void) 
{ struct tiny x[3] ;

  {
  x[0].c = (short)10;
  x[1].c = (short)11;
  x[2].c = (short)12;
  x[0].d = (short)20;
  x[1].d = (short)21;
  x[2].d = (short)22;
  f(3, x[0], x[1], x[2], 123L);
  exit(0);
}
}