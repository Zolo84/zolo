// FUN_0051cc30 @ 51cc30 size=61

uint __fastcall FUN_0051cc30(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x14a);
  if (uVar4 == 0) {
    uVar4 = param_1 + 0x188;
  }
  if (*(int *)(uVar4 + 0x22) < 2) {
    piVar3 = *(int **)(param_1 + 0x26);
    while (uVar4 = 0, piVar3 != (int *)0x0) {
      piVar1 = piVar3 + 2;
      iVar2 = *piVar3;
      piVar3 = (int *)*piVar1;
      if (*(int *)(iVar2 + 0x134) == 10) {
        return CONCAT31((int3)((uint)*piVar1 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffff00;
}


