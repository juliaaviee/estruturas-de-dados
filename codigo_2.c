#include <stdio.h>

int main()

{

int i;

for (i=0; i<5; i++) printf("%u\n",++i<<2);

return 0;

}
/* saída: 
4
12
20
  */
