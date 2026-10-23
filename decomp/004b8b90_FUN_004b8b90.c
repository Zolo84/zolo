// FUN_004b8b90 @ 4b8b90 size=219

undefined4 __fastcall FUN_004b8b90(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 0x28) + 4))();
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 0x28) + 4))();
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
  puVar2 = *(undefined4 **)(iVar4 + 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
      puVar2 = *(undefined4 **)(iVar4 + 4);
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return 1;
        }
        puVar1 = (undefined4 *)puVar2[2];
        uVar6 = *puVar2;
        uVar5 = uVar6;
        (**(code **)(**(int **)(param_1 + 0x80) + 0xc))(uVar6);
        cVar3 = FUN_00527e90(uVar5);
        if (cVar3 == '\0') break;
        (**(code **)(**(int **)(param_1 + 0x84) + 0xc))(uVar6);
        cVar3 = FUN_00527e90(uVar6);
        puVar2 = puVar1;
        if (cVar3 != '\0') {
          return 0;
        }
      }
      return 0;
    }
    puVar1 = (undefined4 *)puVar2[2];
    uVar6 = *puVar2;
    uVar5 = uVar6;
    (**(code **)(**(int **)(param_1 + 0x80) + 0xc))(uVar6);
    cVar3 = FUN_00527e90(uVar5);
    if (cVar3 != '\0') break;
    (**(code **)(**(int **)(param_1 + 0x84) + 0xc))(uVar6);
    cVar3 = FUN_00527e90(uVar6);
    puVar2 = puVar1;
    if (cVar3 == '\0') {
      return 0;
    }
  }
  return 0;
}


