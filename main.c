#include <stdio.h>

int ack(int i, int j)
{
    int ans;
    if(i == 0) ans = j + 1;
    else if(j == 0) ans = ack(i - 1, j);
    else ans = ack(i - 1, ack(i, j - 1));
    return ans;
}

void main(int argc, char** argv)
{
    printf("%d", ack(2, 2));
}
