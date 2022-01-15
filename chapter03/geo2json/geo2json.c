#include <stdio.h>
#include <stdbool.h>

// assumes terminated with null and out is twice the size
// out does not need to be initialized before passing
void escape_dquotes(char *in, char *out)
{
        //for (char c=*in ; c != '\0' ; out++, in++, c=*in) { // clear
        for (; *in; in++, out++) {                            // consise
                if (*in == '"') {
                        *out='\\';
                        out++;
                }
                *out=*in;
        }

        *out = '\0'; // DON'T FORGET TO TERMINATE STRING!
 }

int main()
{
        float lon, lat;
        char info[80], escaped_info[160];
        //bool started = false;
       
        scanf("%f,%f,%79[^\r\n]",&lon,&lat,info);
        printf("You entered info: %s\n",info);
        escape_dquotes(info,escaped_info);

        printf("{\n  \"data\": [\n");
        printf("    \"lon\": %f,\n", lon);
        printf("    \"lat\": %f,\n", lat);
        printf("    \"info\": \"%s\"\n", escaped_info);
        printf("  ]\n}");

        return 0;
}
