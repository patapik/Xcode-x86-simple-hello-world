 #include <stdio.h>

int main(int argc, const char * argv[]) {

 __asm__ {
        //RIP Relative Addressing

        mov     rax, 0x2000004 ; write
        mov     rdi, 1 ; stdout
        lea     rsi, msg[rip]
        mov     rdx,17
        syscall
        mov     rax, 0x2000001 ; exit
        mov     rdi, 0
        syscall
        

    msg:
        .ascii "Hello world RIP!\n"
 
    }
    
        return 0;
}
