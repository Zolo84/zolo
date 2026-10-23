// FUN_006df250 @ 6df250 size=222

void __thiscall FUN_006df250(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d9b7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
  }
  pvVar1 = operator_new(0x7e);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar2 = FUN_0044b160(param_2);
    piVar3 = (int *)FUN_00414c80(uVar2);
  }
  *(int **)(param_1 + 0x5c) = piVar3;
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x34))(4);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x38))(0);
  uVar2 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar2);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(0xc,0xe);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(0xfe,0xe);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))(0);
  ExceptionList = (void *)0x0;
  return;
}


