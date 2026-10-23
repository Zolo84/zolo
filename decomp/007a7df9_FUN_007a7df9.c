// FUN_007a7df9 @ 7a7df9 size=32

undefined4 FUN_007a7df9(HANDLE param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined4 *)FUN_007aadca();
    *puVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


