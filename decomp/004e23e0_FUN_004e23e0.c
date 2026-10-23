// FUN_004e23e0 @ 4e23e0 size=195

void __fastcall FUN_004e23e0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined1 *)(param_1 + 0x36) = 0;
  if (*(int *)(param_1 + 0x2a) != 0) {
    iVar5 = FUN_00406160();
    piVar2 = *(int **)(param_1 + 0x2e);
    iVar3 = piVar2[2];
    iVar4 = piVar2[1];
    (**(code **)(*piVar2 + 8))();
    iVar6 = (**(code **)(**(int **)(param_1 + 0x32) + 8))();
    *(undefined4 *)(param_1 + 0x1a) = 0;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(param_1 + 0x16) = 0;
        if (0 < iVar4 * 2) {
          do {
            iVar7 = *(int *)(param_1 + 0x16);
            uVar1 = *(undefined1 *)(iVar7 + 1 + iVar6);
            *(undefined1 *)(iVar7 + iVar5) = *(undefined1 *)(iVar7 + iVar6);
            *(undefined1 *)(iVar5 + 1 + *(int *)(param_1 + 0x16)) = uVar1;
            iVar7 = *(int *)(param_1 + 0x16) + 2;
            *(int *)(param_1 + 0x16) = iVar7;
          } while (iVar7 < iVar4 * 2);
        }
        iVar5 = iVar5 + *(int *)(*(int *)(param_1 + 0x2a) + 0x18);
        iVar6 = iVar6 + *(int *)(*(int *)(param_1 + 0x2e) + 0x18);
        iVar7 = *(int *)(param_1 + 0x1a) + 1;
        *(int *)(param_1 + 0x1a) = iVar7;
      } while (iVar7 < iVar3);
    }
    FUN_00406180();
    (**(code **)(**(int **)(param_1 + 0x2e) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x32) + 0xc))();
  }
  return;
}


