#include "kernel/types.h"
#include "kernel/syscall.h"
#include "user/user.h"

int main(){
    trace(1 << SYS_write);
    printf("hello trace\n");
    exit(0);
}