// dll1
typedef void (*tF)() ;
void f();

__declspec(dllexport) bool compFuncPtr(tF a_f) {
	auto pF = &f;
	bool res = (a_f == f);
	return res;
}

