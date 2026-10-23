// FUN_0040e100 @ 40e100 size=248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0040e100(int param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  int *piStack_234;
  int *piStack_230;
  undefined *puStack_22c;
  undefined4 uStack_228;
  int *local_20c [118];
  LPCSTR pCStack_34;
  
  local_20c[0] = (int *)0x0;
  uStack_228 = 0x40e12a;
  HVar1 = CoCreateInstance((IID *)&DAT_007fc360,(LPUNKNOWN)0x0,1,(IID *)&DAT_007fc3e0,local_20c);
  if (HVar1 < 0) {
    return 0;
  }
  piStack_234 = (int *)0x0;
  iVar2 = (**(code **)(*local_20c[0] + 0x30))();
  if (iVar2 < 0) {
    return 0;
  }
  piStack_230 = *(int **)(param_1 + 0x36);
  uStack_228 = 0;
  puStack_22c = &DAT_007fa7f0;
  uStack_238 = 0x40e171;
  iVar2 = (**(code **)(*piStack_234 + 0x3c))();
  if (iVar2 < 0) {
    return 0;
  }
  uStack_238 = 0;
  uStack_23c = 1;
  puStack_240 = &DAT_007fa7e0;
  iVar2 = (**(code **)(*piStack_230 + 0x3c))(piStack_230);
  if (iVar2 < 0) {
    return 0;
  }
  MultiByteToWideChar(0,0,pCStack_34,-1,(LPWSTR)&puStack_240,0x104);
  ppuVar3 = &puStack_240;
  iVar2 = (**(code **)(_DAT_00000000 + 0x40))(0,ppuVar3,0);
  if (iVar2 < 0) {
    return 0;
  }
  *(undefined ***)(param_1 + 0x3e) = ppuVar3;
  return 1;
}


