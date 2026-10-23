// FUN_005194d0 @ 5194d0 size=379

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005194d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float unaff_retaddr;
  undefined4 uVar4;
  
  FUN_00415d30(*(undefined4 *)(param_1 + 0x62));
  FUN_00415d30(*(undefined4 *)(param_1 + 0x62));
  FUN_00415d30(*(undefined4 *)(param_1 + 0x62));
  (**(code **)(*DAT_00adcf30 + 0x10))(0);
  iVar1 = FUN_00415bd0();
  iVar2 = FUN_00415bd0();
  if ((float)(iVar2 + -1) < (float)iVar1 * unaff_retaddr) {
    FUN_00415bd0();
  }
  iVar1 = __ftol();
  uVar4 = 1000;
  iVar2 = FUN_00415bd0(1000);
  FUN_00415ed0(iVar1,0,iVar2 + -1,uVar4);
  (**(code **)(*DAT_00adcf34 + 0x18))(0,0);
  (**(code **)(*DAT_00adcf34 + 0x10))(0);
  iVar2 = FUN_00415bd0();
  iVar1 = iVar1 - iVar2 / 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = FUN_00415bd0();
  iVar3 = FUN_00415bd0();
  if (iVar3 - iVar2 <= iVar1) {
    iVar1 = FUN_00415bd0();
    iVar2 = FUN_00415bd0();
    iVar1 = (iVar2 - iVar1) + -1;
  }
  (**(code **)(*DAT_00adcf38 + 0x18))(iVar1,0);
  (**(code **)(*DAT_00adcf38 + 0x10))(0);
  return;
}


