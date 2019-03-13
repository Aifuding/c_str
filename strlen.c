
int mystrlen(char *str)
{
  char *p = str;
  
  while(*p != '\0')
  {
    p++;
  }
  return p-str;
}
