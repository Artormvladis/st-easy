#include"st_easy.h"
string itc_hello_str(string st){
return ("Hello, " + st);
}
long long itc_len(string st) {
  long long a1 = 0;
  for (int i = 0; st[i] != '\0'; i++) {
    a1++;
  }
  return a1;
}
void itc_print_copy_str(string st, int a1) {
  for (int i = 0; i < a1; i++)
    cout << st;
}
void itc_first_end_three(string st) {
  long long a1 = itc_len(st);
  if (a1 > 5) {
    cout << st[0] << st[1] << st[2] << st[a1 - 3]
         << st[a1 - 2] << st[a1 - 1];
  } else {
    while (a1 > 0) {
      cout << st[0];
      a1--;
    }
  }
}
int itc_count_char_in_str(char ch, string st) {
  int a1 = 0;
  for (int i = 0; i <= itc_len(st); i++) {
    if (ch == st[i])
      a1++;
  }
  return a1;
}
