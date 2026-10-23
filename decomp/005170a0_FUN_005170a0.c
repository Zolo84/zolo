// FUN_005170a0 @ 5170a0 size=177

uint __thiscall FUN_005170a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  piVar3 = *(int **)(param_2 + 4);
  do {
    if (piVar3 == (int *)0x0) {
      iVar8 = 0;
      piVar3 = *(int **)(param_1 + 0x26);
      while (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + 2;
        iVar5 = *piVar3;
        piVar3 = (int *)*piVar1;
        if (*(int *)(iVar5 + 0x134) == 0x1e) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar5 = 0;
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x2aa) + 4);
      while (puVar4 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar4[2];
        iVar7 = (**(code **)(*(int *)*puVar4 + 0x10))();
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x22) + 4))();
        iVar5 = iVar5 + iVar7;
        puVar4 = puVar2;
      }
      return (uint)(iVar9 <= iVar8 - iVar5);
    }
    piVar1 = (int *)piVar3[2];
    iVar8 = *piVar3;
    iVar5 = FUN_00508160();
    iVar9 = iVar9 + iVar5;
    uVar6 = FUN_0044a690(*(undefined4 *)(*(int *)(iVar8 + 0x248) + 6));
    piVar3 = piVar1;
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffff00;
}


