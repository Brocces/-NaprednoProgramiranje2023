/* ctime example */
#include <stdio.h> /* printf */
#include <time.h>  /* time_t, time, ctime */

int main()
{
  time_t rawtime;

  time(&rawtime);
  printf("The current local time is: %s", ctime(&rawtime));

  return 0;
}
/*Овој програм го прикажува моменталното локално време со помош на функциите time, ctime и printf.

Во следниот код, rawtime го добиваме со повик на time функцијата, а потоа го прикажуваме форматираното локално време со ctime функцијата. printf се користи за печатење на локалното време.
*/