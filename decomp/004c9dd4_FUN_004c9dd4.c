// FUN_004c9dd4 @ 4c9dd4 size=215

void __fastcall FUN_004c9dd4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int *local_8;
  
  (**(code **)(*(int *)(param_1 + 0x3a) + 0x10))();
  local_8 = *(int **)(param_1 + 0x2c);
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    iVar2 = *local_8;
    iVar3 = *(int *)(iVar2 + 0x290);
    for (local_14 = 0; local_8 = piVar1, local_14 < iVar3; local_14 = local_14 + 1) {
      iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar2 + 0x298) + local_14 * 0xc));
      iVar4 = *(int *)(iVar4 + 0x482);
      if ((iVar4 != 0) && (iVar4 != param_1)) {
        FUN_004ca017(iVar4,1);
      }
    }
  }
  return;
}


