#include"st,easy.h"
string itc_cmp_str(string st, string st2, int a1) {
  string st3, st4;
  long long len1 = itc_len(st), len2 = itc_len(st2);
  if ((len1 < a1) || (a1 < 0)) return st;
  for (int i = 0; i < a1; i++) st3 += st[i];
  for (int i = 0; i < len2; i++) st3 += st2[i];
  for (int i = a1; st[i] != '\0'; i++) st3 += st[i];
  for (int i = 0; i < len1; i++) st4 += st3[i];
  return st4;
}
int itc_find_str(string st, string st2) {
  long long len1 = itc_len(st);
  long long len2 = itc_len(st2);
  for (long long i = 0; i < len1; i++) {
    if (st[i] == st2[0]) {
      long long k = i;
      long long j = 0;
      for (; j < len2 && k < len1; j++, k++) {
        if (st[k] != st2[j])
          break;
      }
      if (j == len2)
        return i;
    }
  }
  return -1;
}
string itc_three_str(string st, string st2, string st3) {
  long long a1;
  while (itc_find_str(st, st2) != -1) {
    string a2, a3;
    c = itc_find_str(st, st2);
    for (long long i = 0; i < a1; i++)
      a2 += st[i];
    for (long long i = c + itc_len(st2); st[i] != '\0'; i++)
      a3 += st[i];
    st = a2 + st3 + a3;
  }
  return st;
}
int itc_max_char_on_end(string st) {
  int a1 = 0, a2 = 0, a3 = 0;
  while (st[a3] != '\0') {
    if (st[a3] >= '0' && st[a3] <= '9') a2++;
    else {
      if (a2 > a1) a1 = a2;
      a2 = 0;
    }
    a3++;
  }
  if (a2 > a1) a1 = a2;
  return a1;
}
