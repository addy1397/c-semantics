/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

float g(void *a , void *b , int e , int c , float d ) 
{ 

  {
  return (d);
}
}
float f(void *a , void *b , int c , float d ) 
{ float tmp ;

  {
  tmp = g(a, b, 0, c, d);
  return (tmp);
}
}
int main(void) 
{ 

  {
  f((void *)0, (void *)0, 1, (float )1);
  return (0);
}
}