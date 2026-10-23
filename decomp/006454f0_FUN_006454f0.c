// FUN_006454f0 @ 6454f0 size=148

uint __fastcall FUN_006454f0(int param_1)

{
  uint uVar1;
  uint3 uVar4;
  int *piVar2;
  int *piVar3;
  
  uVar1 = FUN_00428ee0(param_1 + 0xb8);
  if ((uVar1 == 0) || (uVar1 == 8)) {
    return uVar1 & 0xffffff00;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x8e) + 0x3350);
  if (piVar2 == DAT_00d615c2) {
    return (uint)piVar2 & 0xffffff00;
  }
  uVar4 = (uint3)((uint)piVar2 >> 8);
  if (piVar2 == DAT_00d615c6) {
    return (uint)uVar4 << 8;
  }
  if (piVar2 == DAT_00d615ca) {
    return (uint)uVar4 << 8;
  }
  if (piVar2 == (int *)(uVar1 - 8)) {
LAB_00645547:
    return (uint)piVar2 & 0xffffff00;
  }
  piVar3 = *(int **)(*(int *)(uVar1 + 0x1a) + 4);
  if (piVar3 != (int *)0x0) {
    do {
      piVar2 = (int *)piVar3[2];
      if (*(char *)(*(int *)((&DAT_0089cad8)[*piVar3] + 0x12da) +
                   (*(int *)(*(int *)(param_1 + 0x8e) + 6) + 1) * 0x2c) != '\0') goto LAB_00645547;
      piVar3 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return 1;
}


