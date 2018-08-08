#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOLOWER(x) ((x) | 0x20)
#define isxdigit(c) (('0' <= (c) && (c) <= '9') || ('a' <= (c) && (c) <= 'f') || ('A' <= (c) && (c) <= 'F'))
#define isdigit(c) ('0' <= (c) && (c) <= '9')
//bin2str(signret,out,strlen(signret),16); 转换为16进制
//last char of in must be 0x00

void bin2str(unsigned char *in, char *out, int size, int base) {
    unsigned char *pt1 = in;
    char *pt2 = out;
    do {
        pt2 += sprintf(pt2, "%02X", *pt1++);
        size--;
    } while (*pt1 && size);
}

void str2bin(char *in, unsigned char *out, int size, int base) {
    unsigned char *pt1 = (unsigned char *) in;
    unsigned char *pt2 = out;
    while (isxdigit(*pt1) && size--) {
        *pt2++ = base * (isdigit(*pt1) ? *pt1++ - '0' : TOLOWER(*pt1++) - 'a' + 10) +
                 (isdigit(*pt1) ? *pt1++ - '0' : TOLOWER(*pt1++) - 'a' + 10);
    }
}

int main() {
    unsigned char* str1 = (unsigned char*) malloc(sizeof(unsigned char ) * 8 *16);
    char * str2 = (char*) malloc(sizeof(char *) * 8 * 16);
    memset(str2, 0, sizeof(char *) * 8*16);
    strcpy(str1, "adffdfd788\n");
    bin2str(str1, str2, sizeof(str1), 16);
    printf("%s\n", str2);
    return 0;
}
