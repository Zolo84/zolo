// FUN_004429a0 @ 4429a0 size=73

void __fastcall FUN_004429a0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(DAT_00893530 + 0x14);
  uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
  uVar3 = __ftol();
  FUN_0042dc20(uVar3);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}


