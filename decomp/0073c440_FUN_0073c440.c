// FUN_0073c440 @ 73c440 size=106

undefined4 __thiscall FUN_0073c440(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  while( true ) {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      if (*(int *)(param_2 + 4) == 0x141) {
        uVar2 = FUN_00760780(*(undefined4 *)(param_2 + 0x40c));
        *(undefined4 *)(param_1 + 0x16) = uVar2;
      }
      else if (*(int *)(param_2 + 4) == 0x14e) {
        uVar2 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x12) = uVar2;
      }
    }
    if (iVar1 == 2) break;
    piVar3 = (int *)FUN_00534391();
    if (*piVar3 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  return 0;
}


