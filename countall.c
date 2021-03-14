#include <stdio.h>

main()
{
    int c, nl, nt, ns;

    nl = 0;
    nt = 0;
    ns = 0;

    while((c = getchar()) != EOF)
        switch(c) {
            case '\n':
                ++nl;
                break;
            case '\t':
                ++nt;
                break;
            case ' ':
                ++ns;
                break;
        }
    printf("%d new lines, %d new tabs, %d new spaces", nl, nt, ns);

}
