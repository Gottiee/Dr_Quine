#include <stdio.h>
#define CODE "#include <stdio.h>%1$c#define CODE %2$c%3$s%2$c%1$c#define GRACE() int main(){FILE *file = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c);if (!file){return 0;}fprintf(file, CODE, 10, 34, CODE);fclose(file);}%1$c// comment%1$cGRACE();"
#define GRACE() int main(){FILE *file = fopen("Grace_kid.c", "w");if (!file){return 0;}fprintf(file, CODE, 10, 34, CODE);fclose(file);}
// comment
GRACE();