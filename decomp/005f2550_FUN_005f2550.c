// FUN_005f2550 @ 5f2550 size=142

void __fastcall FUN_005f2550(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  piVar1 = (int *)(param_1 + 0x46);
  uVar4 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x46) + 4))();
  if (0 < iVar3) {
    puVar2 = *(undefined4 **)(param_1 + 0x4a);
    uVar5 = *puVar2;
    uVar4 = puVar2[1];
    (**(code **)(*piVar1 + 0x1c))(puVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x36) + 0x18))(uVar5,uVar4);
  iVar3 = (**(code **)(*piVar1 + 4))();
  if (0 < iVar3) {
    puVar2 = *(undefined4 **)(param_1 + 0x4a);
    uVar5 = *puVar2;
    uVar4 = puVar2[1];
    (**(code **)(*piVar1 + 0x1c))(puVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x32) + 0x18))(uVar5,uVar4);
  iVar3 = (**(code **)(*piVar1 + 4))();
  if (0 < iVar3) {
    puVar2 = *(undefined4 **)(param_1 + 0x4a);
    uVar5 = *puVar2;
    uVar4 = puVar2[1];
    (**(code **)(*piVar1 + 0x1c))(puVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x18))(uVar5,uVar4);
  return;
}


