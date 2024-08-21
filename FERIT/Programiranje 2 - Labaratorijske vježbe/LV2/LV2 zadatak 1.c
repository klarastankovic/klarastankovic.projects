#include <stdio.h>

struct cpl {
  float re;
  float im;
};

int main(void)
{
  struct cpl a, b, c, d;
  puts("Upisi realni i imaginarni dio prvog broja");
  scanf("%f", &a.re);
  scanf("%f", &a.im);
  puts("Upisi realni i imaginarni dio drugog broja");
  scanf("%f", &b.re);
  scanf("%f", &b.im);

  /**
   * Ovdje ide Vas kod. U strukturnu varijablu c spremite zbroj kompleksnih
   * brojeva a i b, a u varijablu d spremite razliku kompleksnih brojeva a i b
   */
  /////// kod 
  c.re = a.re + b.re;
  c.im = a.im + b.im;
  d.re = a.re - b.re;
  d.im = a.im - b.im;


  /* Ovdje je prikazano kako treba ispisati rezultate kako bi automatski
   * testovi tocno ocjenili vas program. 
   */
  printf("REZULTATI:\n");
  printf("%.3f, %.3f*i\n", c.re, c.im);
  printf("%.3f, %.3f*i\n", d.re, d.im);

  return 0;
}
