#include <stdio.h>
int cmp(char s[],char t[]) {
  int i=0;
  while( s[i]==t[i] && s[i] )
    i++;
  return s[i]-t[i];
}
int mainComparacao(void) {
  char v[5] = "ano";
  char w[5] = "anore";
  puts( cmp(v,w)>0 ? "maior" : "menor");
  return 0;
}