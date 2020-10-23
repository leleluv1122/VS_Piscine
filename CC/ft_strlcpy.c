//// https://blog.dasomoli.org/478/
//// https://sihyeon-kim.github.io/android-packagemanager/2019/09/02/Android-Package-Manager-09-strlcpy.html
/////// 아직 다 안함 ex10
#include <stdio.h>

unsigned int size_src(char* src)
{
	unsigned int len;
	char* c;
	
	c = src;
	len = 0;
	while (*c)
	{
		len++;
		c++;
	}
	return (len);
}

unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
	unsigned int ret;
	unsigned int len;

	ret = size_src(src);
	if (size)
	{
		if (ret >= size)
			len = size - 1;
		else
			len = ret;
	}
}