// FUN_00419480 @ 419480 size=170

void __thiscall FUN_00419480(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = **(int **)(param_1 + 0xc);
    uVar2 = FUN_00415f10();
    (**(code **)(iVar1 + 0x2c))(uVar2);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x4e))
    ;
    FUN_00415a20(*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x1a),
                 *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x1e));
    iVar1 = **(int **)(param_1 + 0xc);
    uVar2 = (**(code **)(**(int **)(param_2 + 0xc) + 0x4c))();
    (**(code **)(iVar1 + 0x50))(uVar2);
    uVar2 = (**(code **)(**(int **)(param_2 + 0xc) + 0x4c))();
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x26) = uVar2;
    *(undefined1 *)(iVar1 + 0x67) = 0;
    uVar2 = FUN_00415f30();
    FUN_00415f20(uVar2);
    if (*(char *)(*(int *)(param_2 + 0xc) + 0x92) != '\0') {
      FUN_00417300();
      return;
    }
    FUN_00417340();
  }
  return;
}


