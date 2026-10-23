// FUN_0049ed40 @ 49ed40 size=99

uint __thiscall FUN_0049ed40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined3 uVar3;
  
  uVar1 = (&DAT_0089cad8)[param_2];
  if (param_2 == *(int *)(param_1 + 6)) {
    return uVar1 & 0xffffff00;
  }
  if (uVar1 == 0) {
    iVar2 = *(int *)(&DAT_00d68602 + param_2 * 0xa8);
  }
  else {
    iVar2 = *(int *)(uVar1 + 0x1185a);
  }
  if (iVar2 != 0) {
    uVar3 = (undefined3)((uint)iVar2 >> 8);
    if (iVar2 == *(int *)(param_1 + 6)) {
      return CONCAT31(uVar3,1);
    }
    if (iVar2 == *(int *)(param_1 + 0x1185a)) {
      return CONCAT31(uVar3,1);
    }
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1185a) >> 8),
                  *(int *)(param_1 + 0x1185a) == param_2);
}


