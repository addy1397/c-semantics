/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void test(int n  , ...) 
{ va_list ap ;
  int i ;
  int tmp ;
  long long tmp___0 ;
  int tmp___1 ;

  {
  __builtin_va_start(ap, n);
  i = 2;
  while (i <= n) {
    tmp = __builtin_va_arg(ap, int );
    if (tmp != i) {
      abort();
    }
    i ++;
  }
  tmp___0 = __builtin_va_arg(ap, long long );
  if (tmp___0 != 81985529216486895LL) {
    abort();
  }
  tmp___1 = __builtin_va_arg(ap, int );
  if (tmp___1 != 85) {
    abort();
  }
  __builtin_va_end(ap);
  return;
}
}
int main(void) 
{ 

  {
  test(1, 81985529216486895LL, 85);
  test(2, 2, 81985529216486895LL, 85);
  test(3, 2, 3, 81985529216486895LL, 85);
  test(4, 2, 3, 4, 81985529216486895LL, 85);
  test(5, 2, 3, 4, 5, 81985529216486895LL, 85);
  test(6, 2, 3, 4, 5, 6, 81985529216486895LL, 85);
  test(7, 2, 3, 4, 5, 6, 7, 81985529216486895LL, 85);
  test(8, 2, 3, 4, 5, 6, 7, 8, 81985529216486895LL, 85);
  exit(0);
}
}