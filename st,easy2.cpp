#include"st,easy.h"
string itc_even_place(string st) {
  string st2 = "";
  if (itc_len(st) < 2) return "-1";
  for (long long i = 1; st[i] != '\0'; i++) {
    if (i % 2 == 1)
      st2 += st[i];
  }
  return st2;
}
double itc_percent_lower_uppercase(string st) {
  double a1 = 0;
  double a2 = 0;
  for (long long i = 0; i <= itc_len(st); i++) {
    if (st[i] >= 'A' && st[i] <= 'Z')
      a1++;
    if (st[i] >= 'a' && st[i] <= 'z')
      a2++;
  }
  return a1 / a2 * 100;
}
string itc_reverse_str(string st) {
  string st2 = "";
  for (int i = itc_len(st) - 1; i >= 0; i--) {
    st2 += st[i];
  }
  return st2;
}
string itc_slice_str(string st, int a1, int a2) {
  string st2;
  long long len = itc_len(st);
  if (a1 < 0)
    a1 = 0;
  if (a1 > a2)
    return st;
  for (long long i = a1; i <= a2 && i < len; i++)
    st2 += st[i];
  return st2;
}
bool itc_equal_reverse(string st) { return itc_reverse_str(st) == st; }
