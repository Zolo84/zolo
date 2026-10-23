// empty @ 799501 size=71

/* Library Function - Single Match
    public: static class std::locale __cdecl std::locale::empty(void)
   
   Library: Visual Studio 2003 Release */

undefined4 * __cdecl std::locale::empty(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_007996df(extraout_ECX);
  pvVar2 = operator_new(0x28);
  *(void **)(unaff_EBP + -0x10) = pvVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_007997f3(1);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = uVar3;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


