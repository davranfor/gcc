/*
gcc -Wall -Wpedantic -Wextra -finstrument-functions -export-dynamic -D_GNU_SOURCE demo.c instrument.c -o demo -ldl
./demo
cat trace
*/

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int main(void)
{
    int a = 2, b = 3;

    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    return 0;
}
