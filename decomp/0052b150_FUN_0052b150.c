// FUN_0052b150 @ 52b150 size=256

uint __thiscall FUN_0052b150(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar7 = *(uint *)(param_2 + 0x2b2);
  if (uVar7 == 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x248) + 6);
    uVar6 = FUN_00508160();
    puVar4 = *(undefined4 **)(param_1 + 4);
    uVar7 = uVar6;
    while (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar4[2];
      piVar3 = (int *)*puVar4;
      uVar7 = (**(code **)(*piVar3 + 0x2c))();
      puVar4 = puVar2;
      if ((char)uVar7 != '\0') {
        iVar8 = (**(code **)(*piVar3 + 0x14))();
        uVar7 = (**(code **)(*(int *)(iVar8 + 0x11c) + 4))();
        if (((uVar7 == 0) && (*(int *)((int)*(int **)(iVar8 + 0x248) + 6) == iVar1)) &&
           ((*(int *)(iVar8 + 500) == *(int *)(param_2 + 500) ||
            ((cVar5 = (**(code **)(**(int **)(iVar8 + 0x248) + 0x1c))(), cVar5 == '\0' ||
             (uVar7 = FUN_006a8720(), (char)uVar7 != '\0')))))) {
          iVar9 = *(int *)(param_2 + 0xc);
          if ((*(int *)(iVar8 + 0xc) == iVar9) ||
             (uVar7 = iVar9 * 0x259,
             *(int *)(DAT_00ab27b4 + 0x3dc + iVar9 * 0x4b2) == *(int *)(iVar8 + 0xc))) {
            iVar8 = FUN_00516f50();
            iVar9 = FUN_00516cc0();
            uVar7 = iVar9 - iVar8;
            if ((int)uVar6 <= (int)uVar7) {
              return CONCAT31((int3)(uVar7 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar7 & 0xffffff00;
}


