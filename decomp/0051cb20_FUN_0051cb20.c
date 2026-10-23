// FUN_0051cb20 @ 51cb20 size=209

undefined4 __fastcall FUN_0051cb20(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_4 [4];
  
  iVar2 = FUN_004e9370(*(undefined4 *)(param_1 + 0xc));
  iVar5 = *(int *)(param_1 + 0x14a);
  if (iVar5 == 0) {
    iVar5 = param_1 + 0x188;
  }
  if (*(int *)(iVar5 + 0x22) < 2) {
    iVar5 = *(int *)(param_1 + 0x26);
    do {
      if (iVar5 == 0) goto LAB_0051cb81;
      puVar3 = (undefined4 *)FUN_00499730(local_4,0);
    } while (*(int *)(*(int *)*puVar3 + 0x134) != 10);
  }
  else {
LAB_0051cb81:
    cVar1 = FUN_00527940(*(undefined4 *)(param_1 + 0x248));
    if (cVar1 == '\0') {
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x290)) {
        iVar4 = 0;
        do {
          FUN_004e9370(*(undefined4 *)(*(int *)(iVar2 + 0x298) + iVar4));
          cVar1 = FUN_00527940(*(undefined4 *)(param_1 + 0x248));
          if (cVar1 != '\0') {
            return 1;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar5 < *(int *)(iVar2 + 0x290));
      }
      return 0;
    }
  }
  return 1;
}


