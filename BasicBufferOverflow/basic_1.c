/*
 * How to compile : gcc -z execstack -no-pie -fno-stack-protector basic_1.c -o basic_1
 *
 * Description : -z execstack for executable stack
 *               -no-pie for disabling PIE/ASLR
 *               -fno-stack-protector for no stack cannaries
 */

#include <stdio.h>
#include <string.h>

int main(){
	int flag = 0xdeadbeef;
	int password = 0xcafebabe;
	char input[20];

	printf("[*] Password : ");
	gets(input);

	if(flag == 0xcafebabe){
		if(password == 0xdeadbeef){
			printf("[+] Pwned.\n");
		}else{
			printf("[-] Almost there.\n");
		}
	}else{
		printf("[-] Lol.\n");
	}
}
