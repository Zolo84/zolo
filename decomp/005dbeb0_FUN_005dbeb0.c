// FUN_005dbeb0 @ 5dbeb0 size=177

undefined * __thiscall FUN_005dbeb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int *piVar7;
  char *pcVar8;
  
  iVar2 = FUN_005dd1e0();
  iVar3 = FUN_00428ee0(param_1 + 0x80);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(iVar3 + -0x14);
  }
  if ((iVar2 != 0) && (piVar7 != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      if (*(char *)(*(int *)(param_1 + 0x88) + 0x86) == '\0') {
        uVar4 = (**(code **)(*piVar7 + 0xc))();
        pcVar8 = s_REORG_TO_0085b8f8;
      }
      else {
        pcVar8 = s_REORG_AIR_CAP_SIZE_0085b904;
        uVar4 = DAT_00dc1614;
      }
      uVar5 = FUN_0042b6c9(pcVar8);
      FUN_007a630a(&DAT_00cd4b50,uVar5,uVar4);
      return &DAT_00cd4b50;
    }
    puVar6 = (undefined *)FUN_005ddef0(param_2,param_3);
    return puVar6;
  }
  return (undefined *)0x0;
}


