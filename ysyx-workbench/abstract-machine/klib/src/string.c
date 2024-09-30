
/*
#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


size_t strlen(const char *s)
{
  assert(s!=NULL);
  size_t len = 0;
  while(*s!='\0'){
    len++;
    s++;
  }
  return len;
}

char *strcpy(char *dst, const char *src)
{ 
  assert(src!=NULL);
  char *p = dst;
    while (*src != '\0') {
        *p = *src; 
        p++;       
        src++;       
    }
    *p = '\0'; 
    return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{
  assert(dst != NULL);
  char *p = dst;
  while (*src != '\0' && n!=0){
    *p= *src;
    p++;
    src++;
    n--;
  }
  *p = '\0';
  return dst;
}

char *strcat(char *dst, const char *src)
{
  assert(dst != NULL);
  char *p = dst + strlen(dst);
  while (*src != '\0' ){
    *p= *src;
    p++;
    src++;
  }
  *p = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2)
{
  while (*s1 != '\0' && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
  while (*s1 != '\0' && --n && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

void *memset(void *s, int c, size_t n)
{
  char *p = s;
  while (n!=0){
    *p++= c;
    n--;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n)
{
  assert(dst != NULL);
  for (int i = n - 1; i >= 0; i--)
    *((char *)dst + i) = *((char *)src + i);
  return dst;
}

void *memcpy(void *out, const void *in, size_t n)
{
  assert(out != NULL);
  for (int i = 0; i < n; i++)
    *((char *)out + i) = *((char *)in + i);
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
  char *tmp1 = (char *)s1;
  char *tmp2 = (char *)s2;
  while (*tmp1 && --n &&(*tmp1 == *tmp2))
  {
    tmp1++;
    tmp2++;
  }
  return *tmp1 - *tmp2;
}
#endif
*/




#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	const char *sc = s;
	assert(s != NULL);
	while(*sc != '\0') {
		sc++;
	}

	return sc - s ;
}

char *strcpy(char *dst, const char *src) {
	char *tmp = dst;
	assert((dst != NULL) && (src != NULL));

	while((*tmp++ = *src++) != '\0');

	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
	char *tmp = dst;
	assert((dst != NULL) && (src != NULL));

	while(n && (*src != '\0')) {
		*tmp++ = *src++;
		n--;
	}

	while(n--) {
		*tmp++ = '\0';
	}

	return dst;
}

char *strcat(char *dst, const char *src) {
	assert(dst != NULL && src != NULL);
	char *tmp = dst;
	
	while(*dst != '\0'){
		dst++;
	}

	while((*dst++ = *src++) != '\0');

	return tmp;
}

int strcmp(const char *s1, const char *s2) {
	assert(s1 != NULL && s2 != NULL);
	
	while(*(unsigned char*)s1 == *(unsigned char*)s2){
		if(*(unsigned char*)s1 == '\0'){
			return 0;
		}
		s1++;
		s2++;
	}

	return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	assert(s1 != NULL && s2 != NULL);
	
	while(--n && *s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}

	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

void *memset(void *s, int c, size_t n) {
	assert(s != NULL);

	unsigned char* tmp = s;

	while(n--){
		*tmp++ = (unsigned char)c;
	}

	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
	char *d = dst;
	const char *s = src;

	if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else if (d > s) {
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }
    return dst;
	/*
	if(d < s){
		for(int i = 0; i < n; i++){
			*((char *)d + i) = *((char *)s + i);
		}
		return d;
	} else if(d > s){
		for(int i = n; i > 0; i--){
		//for(int i = n; i >= 0; i--){
			*((char *)d + i) = *((char *)s + i);
		}
		return d;
	} else {
		return d;
	}
	*/
	/*
	if(d < s) {
		while(n--){
			*d++ = *s++;
		}
	} else {
		d += n;
		s += n;
		while(n--){
			*--d = *--s;
		}
	}
	return dst;
	*/
}

void *memcpy(void *out, const void *in, size_t n) {
	if(out == NULL || in == NULL){
		return out;
	}

	char *d = out;
	const char *s = in;

	while(n--){
		*d++ = *s++;
	}
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
	assert(s1 != NULL && s2 != NULL);

	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	while(n--){
		if(*p1 != *p2){
			return *p1 - *p2;
		}
		p1++;
		p2++;
	}
	return 0;
}

#endif
