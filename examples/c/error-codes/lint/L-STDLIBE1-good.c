// Copyright (c) 2015 Runtime Verification, Inc. (RV-Match team). All Rights Reserved.

#include <stdlib.h>
#include <stdio.h>


int main()
{
    int * int_ptr = malloc(sizeof(int));
    free(int_ptr);
}
