// FUN_006ad9a0 @ 6ad9a0 size=190

void FUN_006ad9a0(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_0042e980();
  if (cVar3 == '\0') {
    return;
  }
  if (param_4 != '\0') {
    iVar4 = *(int *)(param_2 + 0x80);
    if (*(char *)(iVar4 + 0x3f) == '\0') {
      if (*(char *)(iVar4 + 0x4e) == '\0') {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x40) + 0x80);
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x40) + 0x84);
      }
      if (*(char *)(iVar4 + 0x3f) != '\0') goto LAB_006ada13;
    }
    piVar1 = *(int **)(*(int *)(param_2 + 0x78) + 0x3d4);
    if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x1c))(), cVar3 != '\0')) {
      FUN_00690ea0(*(undefined4 *)(param_2 + 0x78));
    }
  }
LAB_006ada13:
  cVar3 = FUN_0042e980();
  piVar1 = DAT_00d1287e;
  if (cVar3 != '\0') {
    while (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        piVar2 = (int *)piVar1[2];
        FUN_006add20(piVar1);
        piVar1 = piVar2;
      }
      else {
        FUN_006ade70(param_1,param_2,param_3);
        piVar1 = (int *)piVar1[2];
      }
    }
  }
  return;
}


