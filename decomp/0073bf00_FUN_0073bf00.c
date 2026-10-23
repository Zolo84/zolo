// FUN_0073bf00 @ 73bf00 size=55

uint __fastcall FUN_0073bf00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00428ee0(param_1 + 0x12);
  uVar2 = 0;
  if ((((iVar1 != 0) && (uVar2 = 0, iVar1 != 8)) && (uVar2 = 0, *(int *)(iVar1 + 100) != 0)) &&
     (uVar2 = *(uint *)(param_1 + 0x18), *(uint *)(*(int *)(iVar1 + 100) + 0xc) == uVar2)) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


