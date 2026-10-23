// FUN_006afdb0 @ 6afdb0 size=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006afdb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = *(int **)(param_1 + 0x72);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(char *)(iVar2 + 0x17b) == '\0') {
      if ((*(int *)(iVar2 + 0xc) != *(int *)(param_1 + 4)) ||
         (iVar5 = *(int *)(iVar2 + 0x240), *(int *)(iVar2 + 0x240) == 0)) {
        iVar5 = *(int *)(iVar2 + 0xc);
      }
      FUN_004e9370(*(int *)(param_1 + 4));
      cVar4 = FUN_004e79b0(iVar5);
      if (cVar4 == '\0') {
        uVar6 = *(undefined4 *)(param_1 + 4);
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 4);
      }
      FUN_0051c3a0(param_2,0,uVar6,cVar4 != '\0');
    }
  }
  return;
}


