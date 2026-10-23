// FUN_00516f90 @ 516f90 size=264

bool __thiscall FUN_00516f90(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  cVar5 = FUN_004e7940(*(undefined4 *)(param_2 + 0xc));
  if ((cVar5 == '\0') && (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))) {
    return false;
  }
  iVar6 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
  if (iVar6 != 0) {
    return false;
  }
  cVar5 = FUN_0044a690(*(undefined4 *)(*(int *)(param_2 + 0x248) + 6));
  if (cVar5 == '\0') {
    return false;
  }
  if ((*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc)) &&
     (*(int *)(DAT_00ab27b4 + 0x3dc + *(int *)(param_2 + 0xc) * 0x4b2) != *(int *)(param_1 + 0xc)))
  {
    return false;
  }
  iVar6 = 0;
  piVar4 = *(int **)(param_1 + 0x26);
  while (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + 2;
    iVar8 = *piVar4;
    piVar4 = (int *)*piVar1;
    if (*(int *)(iVar8 + 0x134) == 0x1e) {
      iVar6 = iVar6 + 1;
    }
  }
  iVar8 = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x2aa) + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar3[2];
    iVar7 = (**(code **)(*(int *)*puVar3 + 0x10))();
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x22) + 4))();
    iVar8 = iVar8 + iVar7;
    puVar3 = puVar2;
  }
  iVar7 = FUN_00508160();
  return iVar7 <= iVar6 - iVar8;
}


