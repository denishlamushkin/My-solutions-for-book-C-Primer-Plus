#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me_32;

    me_32 = 45633945;
    printf("Сначала предположим, что int32_t является int: ");
    printf("me32 = %d\n", me_32);
    printf("Далее не будем делать никаких предположений\n");
    printf("Вместо этого воспользуемся \"макросом\" из файла inttypes.h\n");
    printf("me32 = %" PRId32 "\n", me_32);

    return 0;
}