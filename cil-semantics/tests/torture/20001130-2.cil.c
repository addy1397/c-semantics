/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
static int which_alternative  =    3;
static char const   *i960_output_ldconst(void) ;
static char const   *output_25(void) 
{ char const   *tmp ;

  {
  switch (which_alternative) {
  case 0: 
  return ("mov\t%1,%0");
  case 1: 
  tmp = i960_output_ldconst();
  return (tmp);
  case 2: 
  return ("ld\t%1,%0");
  case 3: 
  return ("st\t%1,%0");
  }
  return ((char const   *)0);
}
}
static char const   *i960_output_ldconst(void) 
{ 

  {
  return ("foo");
}
}
int main(void) 
{ char const   *s ;
  char const   *tmp ;

  {
  tmp = output_25();
  s = tmp;
  if ((int const   )*(s + 0) != 115) {
    abort();
  }
  exit(0);
}
}