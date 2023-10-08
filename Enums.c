#include <stdio.h>
enum year
{
    var,
    var2 = 4,
    var3,
    var4,
    var5,
    var6,

};

int main()
{
    enum year object;
    object = var;
    printf("%d %d %d %d %d %d", object, var2, var3, var4, var5, var6);

    return 0;
}
