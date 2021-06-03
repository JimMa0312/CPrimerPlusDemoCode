/*print2.c--更多printf()的特性*/

int main(void)
{
    unsigned int un=3000000000; /*可运行在32位cpu和16位的系统上*/
    unsigned end=200;
    long big=65537;
    long long verybig=12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big,big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}