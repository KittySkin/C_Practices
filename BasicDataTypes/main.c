#include <stdio.h>

int main() {
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company Xerox = XEROX;
    enum Company Google = GOOGLE;
    enum Company Ebay = EBAY;
    printf("Xerox is %d\n", Xerox);
    printf("Google is %d\n", Google);
    printf("Ebay is %d\n", Ebay);
    return 0;
}
