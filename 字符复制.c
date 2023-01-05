#include<assert.h>
 char * my_strcpy( char* dest, const char* src)
{
    
    {
        char* ret = dest;
        assert(dest != NULL);
        assert(src != NULL);
        while (*dest++ = *src++)
        {
            ;
            // src++;
            // dest++;
        }
        return ret;
    }
     //*dest = *src;//'\0'
}
int main()
{
    char arr1[] = "###&&&&";
    char arr2[] = "bit";
    // Á´Ê½·ÃÎÊ
    printf("%s\n", my_strcpy(arr1, arr2));
    return 0;
}