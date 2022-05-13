//to substrate years from a date

void subYear(char *date,int dyear,char *newDate)
{
    int d,m,y;
    splitDate(newDate,&y,&m,&d);
    y=y-dyear;

    if(d==29 && m==2 && !isLeap(y))
      d=28;
    formDate(newDate,y,m,d);
}
