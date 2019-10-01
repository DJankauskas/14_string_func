char *strcpy(char *dest, char *source)
{
    char *ret_val = dest;

    do
    {
        *dest = *source;
    } while (*source != '\0');

    return ret_val;
}