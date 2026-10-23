// FUN_00738670 @ 738670 size=212

uint __thiscall FUN_00738670(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1e) == 0) {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 6);
  }
  if (*(int *)(param_1 + 0x1a) == 0) {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 6);
  }
  if ((&DAT_0089cad8)[*(int *)(param_1 + 0x12)] == 0) {
    uVar2 = FUN_004af700(*(int *)(param_1 + 0x12));
    uVar3 = FUN_006d0d70(DAT_00d13348,s_Country__s_does_not_exist__00872a24,uVar2);
    return uVar3 & 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x16);
  if ((-1 < iVar1) && ((&DAT_0089cad8)[iVar1] == 0)) {
    uVar2 = FUN_004af700(iVar1);
    uVar3 = FUN_006d0d70(DAT_00d13348,s_Country__s_does_not_exist__00872a24,uVar2);
    return uVar3 & 0xffffff00;
  }
  if (*(char *)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 0x12)] + 0x12da) + 0x31 + iVar1 * 0x2c)
      != '\0') {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  uVar2 = FUN_004af700(iVar1);
  uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 0x12),uVar2);
  uVar3 = FUN_006d0d70(DAT_00d13348,s__s_and__s_are_not_allied___008733f0,uVar2);
  return uVar3 & 0xffffff00;
}


