/*
 * How to compile : gcc -z exestack -fno-stack-protector -no-pie basic_2.c -o basic_2
 *
 * Description : -z exestack for executable stack
 *               -fno-stack-protector for no stack cannaries
 *               -no-pie for disabling PIE/ASLR
 *
 */

#include <stdio.h>
#include <string.h>

void pwn(){
	printf("[+] Pwned.\n");
}

int main(){
	char input[20];

	printf("[*] Input : ");
	gets(input);

	printf("[+] Your input : %s", input);
	return 0;
}
