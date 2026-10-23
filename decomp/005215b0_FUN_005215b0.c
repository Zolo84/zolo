// FUN_005215b0 @ 5215b0 size=261

uint __thiscall FUN_005215b0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(param_2 + 0x248) + 6));
  if ((char)uVar1 == '\x01') {
    return uVar1;
  }
  iVar2 = (&DAT_0089cad8)[*(int *)(param_2 + 0x146)];
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 0x248);
  }
  if ((iVar2 != *(int *)(param_2 + 0x248)) &&
     (uVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x248) + 6)), (char)uVar1 == '\x01'))
  {
    return uVar1;
  }
  uVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 0x146)];
  uVar3 = uVar1;
  if (uVar1 == 0) {
    uVar3 = *(uint *)(param_1 + 0x248);
  }
  if (uVar3 != *(uint *)(param_1 + 0x248)) {
    uVar1 = FUN_0044b280(*(undefined4 *)(*(int *)(param_2 + 0x248) + 6));
    if ((char)uVar1 == '\x01') {
      return uVar1;
    }
    uVar1 = (&DAT_0089cad8)[*(int *)(param_2 + 0x146)];
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_2 + 0x248);
    }
    if (uVar1 != *(uint *)(param_2 + 0x248)) {
      iVar2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x146)];
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x248);
      }
      uVar1 = FUN_0044b280(*(undefined4 *)(iVar2 + 6));
      if ((char)uVar1 == '\x01') {
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffff00;
}


