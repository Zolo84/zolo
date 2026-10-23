// ~ctype<> @ 79e46c size=32

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::ctype<unsigned short>::~ctype<unsigned short>(void)
    protected: virtual __thiscall std::ctype<wchar_t>::~ctype<wchar_t>(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall ~ctype<>(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008002d4;
  if (param_1[5] != 0) {
    FUN_007a77fa(param_1[4]);
  }
  *param_1 = &PTR_LAB_0080007c;
  return;
}


