#include <cstdio>

typedef void (*tF)();
void f();
bool compFuncPtr(tF a_f);

int main()
{
    auto main_pf = &f;
    bool res = compFuncPtr(main_pf);
    printf("%d",  res);
}
