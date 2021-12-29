#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

static FILE *file;

void __attribute__((no_instrument_function)) __cyg_profile_func_enter(void *func, void *caller)
{
    (void)caller;
    if (file == NULL)
    {
        file = fopen("trace", "w");
        if (file == NULL)
        {
            perror("fopen");
            exit(EXIT_FAILURE);
        }
    }

    Dl_info info;

    if (dladdr(func, &info))
    {
        fprintf(file, "> Entering %s (%s)\n", info.dli_sname ? info.dli_sname : "<unknown>", info.dli_fname);
    }
}

void __attribute__((no_instrument_function)) __cyg_profile_func_exit(void *func, void *caller)
{
    (void)caller;
    Dl_info info;

    if (dladdr(func, &info))
    {
        fprintf(file, "< Exiting  %s (%s)\n", info.dli_sname ? info.dli_sname : "<unknown>", info.dli_fname);
    }
}

