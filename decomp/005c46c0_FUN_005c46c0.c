// FUN_005c46c0 @ 5c46c0 size=207

void __thiscall FUN_005c46c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_2 + 0x3a);
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      piVar1 = *(int **)((int)&DAT_008e977c + *(int *)(param_2 + 0x42) * 0x12);
    }
    else {
      piVar1 = *(int **)((int)&DAT_008ea36c + *(int *)(param_2 + 0x3e) * 0x12);
    }
    iVar5 = *(int *)(*piVar1 + 0x12);
  }
  piVar1 = (int *)FUN_004e9370(iVar5);
  uVar2 = (**(code **)(*piVar1 + 0xc))();
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00598ca0(param_2);
      return;
    }
    iVar5 = *piVar1;
    iVar6 = *(int *)(iVar5 + 0x3a);
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        piVar3 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x42) * 0x12);
      }
      else {
        piVar3 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x3e) * 0x12);
      }
      iVar6 = *(int *)(*piVar3 + 0x12);
    }
    piVar3 = (int *)FUN_004e9370(iVar6);
    uVar4 = (**(code **)(*piVar3 + 0xc))();
    iVar5 = FUN_007a8730(uVar2,uVar4);
    if (iVar5 < 0) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_00592460(param_2,piVar1);
  return;
}


