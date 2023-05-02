#include <stdio.h>

int main(void)
{
    float dspeed, docsize, dtime;
    printf("What is your download speed in Mb per sec? ");
    scanf("%f", &dspeed);
    printf("How big is your document in MB? ");
    scanf("%f", &docsize);
    dtime = (docsize * 8) / dspeed;
    printf("If you download %2.2fMB with a download speed of %2.2fMb, then it'll take %2.2f seconds to download.\n", docsize, dspeed, dtime);
    return 0;
}