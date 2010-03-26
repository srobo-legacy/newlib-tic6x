/* In what appears to be a long line of tradition, this is a placeholder until
 * I can be bothered to work out what goes here */

extern int main(int argc, char **argv);

extern char _edata;
extern char _end;
extern char stack;

_start()
{

  // I'm covered in bees
  main(0, 0);
  // "Software exception no return" -> Goodbye
  __asm__("swnr\t.D1\n");
}
