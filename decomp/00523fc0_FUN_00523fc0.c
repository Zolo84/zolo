// FUN_00523fc0 @ 523fc0 size=49

uint __fastcall FUN_00523fc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x248);
  if (*(int *)(uVar4 + 6) != 0x157) {
    piVar3 = *(int **)(param_1 + 0x26);
    while (uVar4 = 0, piVar3 != (int *)0x0) {
      piVar1 = piVar3 + 2;
      iVar2 = *piVar3;
      piVar3 = (int *)*piVar1;
      if (*(char *)(iVar2 + 0x156) != '\0') {
        return CONCAT31((int3)((uint)*piVar1 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffff00;
}


