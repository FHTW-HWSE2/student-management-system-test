#include <stdio.h>
#include "student.h"

int main() {

    student bic2024[80] ={{"Julia", "Teissl", "1985-06-29", "teissl.julia@gmail.com"}};

    printf("Hello %s\n" , bic2024[0].first_name);
    return 0;
}
