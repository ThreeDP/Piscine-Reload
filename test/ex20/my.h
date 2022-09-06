#ifndef __MY_H__
# define __MY_H__
#define PRINTRED(x)  "\x1B[31m"x"\x1B[37m"
#define PRINTGRN(x)  "\x1B[32m"x"\x1B[37m"
#define PRINTYEL(x)  "\x1B[33m"x"\x1B[37m"

char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);
#endif