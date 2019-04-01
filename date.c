#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
 struct rtcdate r;
 date(&r);
 //int second = (int)r->second;
 /*uint minute = r->minute;
 uint hour = r->hour;
 uint day = r->day;
 uint month = r->month;
 uint year = r->year;*/
 
 //printf(1,"%d",(char)r.hour);
 printf(1,"Son las %d:%d:%d del %d/%d/%d\n", r.hour, r.minute, r.second, r.day,r.month,r.year);
  // Tu codigo para imprimir la fecha
  exit();

}