// Peek @ 79b588 size=36

/* Library Function - Multiple Matches With Same Base Name
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)const 
   
   Library: Visual Studio */

undefined1 __fastcall Peek(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_0079b5ac();
    if (iVar1 != -1) {
      *(char *)((int)param_1 + 5) = (char)iVar1;
      goto LAB_0079b5a3;
    }
  }
  *param_1 = 0;
LAB_0079b5a3:
  *(undefined1 *)(param_1 + 1) = 1;
  return *(undefined1 *)((int)param_1 + 5);
}


