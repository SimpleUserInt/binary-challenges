/*
 * How to compile : gcc -z execstack -no-pie -fno-stack-protector basic_3.c -o basic_3
 *
 * Description : -z execstack for executable stack
 *               -no-pie for disabling PIE/ASLR
 *               -fno-stack-protector for no stack cannaries
 *
 * NOTE : The goal is to execute a shell (Hint: You need to create a payload and run it)
 *
 */

#include <stdio.h>
#include <string.h>

int main(){
	char input[40];

	printf("[*] Input : ");
	gets(input);

	printf("[+] Your input : %s", input);

	return 0;
}
