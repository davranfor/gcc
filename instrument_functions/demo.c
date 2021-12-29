/*
NOTE: (-g is optional)

gcc -Wall -Wpedantic -Wextra -finstrument-functions -export-dynamic -g -D_GNU_SOURCE demo.c instrument.c -o demo -ldl
./demo
cat trace
*/

int do_multi(int a, int b) { return a * b; }
int do_add(int a, int b) { return a + b; }
void do_calc(int a, int b) { do_multi(a, b); }

int main(void)
{
    int a = 4, b = 5;

    do_calc(a, b);
    do_add(a, b);
    return 0;
}
