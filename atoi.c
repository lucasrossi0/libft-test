// #include <stdio.h>
// #include <unistd.h>

int ft_atoi(const char *str) {
  int i;
  int pos;
  int res;

  i = 0;
  pos = 1;
  res = 0;
  if (str[i] == '+' || str[i] == '-') {
    if (str[i] == '-')
      pos *= -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9') {
    res = res * 10 + (str[i] - '0');
    i++;
  }
  return (res * pos);
}
/*
int main(void) {
  const char *str = "-535";
  int test = ft_atoi(str);
  printf("Testando %d", test);
  int p1 = test / 10;
  int p2 = test % 10;
  // printf("Testando P1 %d", p1);
  // printf("Testando P2 %d", p2);
  //  write(1, &test, 5);
  p1 += '0';
  p2 += '0';
  write(1, &p1, 1);
  write(1, &p2, 1);
  return (0);
}
*/