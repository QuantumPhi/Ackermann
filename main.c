#include <stdio.h>

long long ack(long long i, long long j)
{
    printf("%lld, %lld\n", i, j);
    long long ans;
    if(i == 0) ans = j + 1;
    else if(j == 0) ans = ack(i - 1, 1);
    else ans = ack(i - 1, ack(i, j - 1));
    return ans;
}

void main(int argc, char** argv)
{
    if(argc == 3) printf("%lld", ack(atoll(argv[1]), atoll(argv[2])));
}
