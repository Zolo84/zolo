// FUN_00509130 @ 509130 size=144

uint __thiscall FUN_00509130(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (&DAT_00dc0fd4)[*(int *)(param_1[0x92] + 6)];
  if ((uVar2 != 0) && (*(int *)(param_2 + 0x254) == 8)) {
    if (0 < param_1[3]) {
      iVar1 = FUN_0051b230();
      uVar2 = *(uint *)(iVar1 + 0x3dc);
      if (uVar2 != *(uint *)(param_2 + 0x12)) goto LAB_005091b7;
    }
    iVar1 = FUN_00528030(param_1[0x92]);
    uVar2 = (**(code **)(*param_1 + 0xac))();
    if ((int)uVar2 <= iVar1) {
      iVar3 = FUN_005280a0(param_1[0x92],param_2);
      return CONCAT31((int3)(iVar3 + uVar2 >> 8),(int)(iVar3 + uVar2) <= iVar1);
    }
  }
LAB_005091b7:
  return uVar2 & 0xffffff00;
}


