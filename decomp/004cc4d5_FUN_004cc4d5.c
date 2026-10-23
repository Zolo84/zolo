// FUN_004cc4d5 @ 4cc4d5 size=289

undefined4 __thiscall FUN_004cc4d5(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  iVar5 = FUN_004e9370(param_3);
  local_8 = *(undefined4 *)(param_1 + 0x52);
  local_c = 100000;
  local_10 = *(int **)(param_1 + 0x2c);
  while (local_10 != (int *)0x0) {
    piVar1 = (int *)local_10[2];
    iVar2 = *local_10;
    local_10 = piVar1;
    if (*(int *)(iVar2 + 0x46a) != 0) {
      FUN_004ed6d0(*(undefined4 *)(iVar2 + 0x12));
      iVar6 = __ftol();
      if (*(int *)(iVar5 + 0x3dc) != 0) {
        uVar3 = *(undefined4 *)(iVar5 + 0x3dc);
        FUN_004e9370(*(undefined4 *)(iVar2 + 0x3dc));
        cVar4 = FUN_004ed600(param_2,uVar3);
        if ((cVar4 != '\0') && (iVar6 < local_c)) {
          local_8 = *(undefined4 *)(iVar2 + 0x12);
          local_c = iVar6;
        }
      }
    }
  }
  return local_8;
}


