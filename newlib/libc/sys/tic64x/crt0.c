/* In what appears to be a long line of tradition, this is a placeholder until
 * I can be bothered to work out what goes here */

extern int main(int argc, char **argv);

extern char _edata;
extern char _end;
extern char stack;

_start()
{
  char *p;

  p = &_edata + 1;
  while (p < &_end) 
    {
      *p++ = 0;
    }

  main(0, 0);
  _exit();
}
