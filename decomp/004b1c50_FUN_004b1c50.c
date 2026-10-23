// FUN_004b1c50 @ 4b1c50 size=197

void __thiscall FUN_004b1c50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  piVar1 = (int *)FUN_00534391();
  iVar2 = *piVar1;
  while( true ) {
    if (iVar2 == 4) {
      FUN_005343dc();
      return;
    }
    iVar2 = FUN_00535490();
    if (iVar2 != 1) break;
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 < 0x12e) {
      if (iVar2 == 0x12d) {
        FUN_00427ed0(param_2);
      }
      else if (iVar2 == 0x85) {
        uVar3 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0xc) = uVar3;
      }
      else {
        if (iVar2 != 0xfd) {
          return;
        }
        FUN_0054f130(param_2);
      }
    }
    else if (iVar2 == 0x12e) {
      uVar3 = FUN_007a7b3c(param_2 + 0x410);
      *(undefined4 *)(param_1 + 0x14) = uVar3;
    }
    else {
      if (iVar2 != 0x261) {
        return;
      }
      uVar3 = FUN_007a7b3c(param_2 + 0x410);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    piVar1 = (int *)FUN_00534391();
    iVar2 = *piVar1;
  }
  return;
}


