// FUN_005e1d40 @ 5e1d40 size=539

void __fastcall FUN_005e1d40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce01b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4))();
  if (iVar2 < 1) {
    FUN_0064c090(0);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_004d8730();
  piVar1 = (int *)**(int **)(*(int *)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4);
  *(int *)(param_1 + 0xfc) = piVar1[6];
  *(short *)(param_1 + 0x100) = (short)piVar1[7];
  FUN_005e23f0();
  FUN_005e2210();
  uVar3 = FUN_0051c480();
  FUN_0061e4e0(param_1 + 0x136,uVar3);
  uVar3 = FUN_0051c480();
  *(undefined4 *)(param_1 + 0xf4) = uVar3;
  if (piVar1[0x92] == *(int *)(param_1 + 0x90)) {
    iVar2 = FUN_00522770();
    if (iVar2 != 0) {
      iVar2 = FUN_00522770();
      uVar3 = *(undefined4 *)(iVar2 + 6);
      iVar2 = **(int **)(param_1 + 0x172);
      goto LAB_005e1e2c;
    }
  }
  uVar3 = *(undefined4 *)(piVar1[0x92] + 6);
  iVar2 = **(int **)(param_1 + 0x172);
LAB_005e1e2c:
  uVar3 = FUN_0044b1c0(uVar3);
  (**(code **)(iVar2 + 0x2c))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x172) + 0x34))(0x19);
  iVar2 = *(int *)(param_1 + 0x172);
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 10;
  *(undefined1 *)(iVar2 + 0x67) = 0;
  uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar3);
  *(undefined1 *)(*(int *)(param_1 + 0x18a) + 0x3b) = 0;
  FUN_004388d0();
  uVar3 = (**(code **)(*piVar1 + 0xc))();
  FUN_00438900(uVar3);
  iVar2 = *(int *)(param_1 + 0x18a);
  *(undefined1 *)(iVar2 + 0x39) = 0;
  *(undefined1 *)(iVar2 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x48;
  *(undefined4 *)(param_1 + 0xf0) = 0xa8;
  if (*(undefined4 **)(param_1 + 0x10a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10a))(1);
  }
  pvVar4 = operator_new(0x54);
  pvStack_c = (void *)0x0;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005efbe0(piVar1[3],0);
  }
  pvStack_c = (void *)0xffffffff;
  *(undefined4 *)(param_1 + 0x10a) = uVar3;
  if (*(undefined4 **)(param_1 + 0x11a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11a))(1);
  }
  *(undefined4 *)(param_1 + 0x11a) = 0;
  if (*(undefined4 **)(param_1 + 0x122) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x122))(1);
  }
  *(undefined4 *)(param_1 + 0x122) = 0;
  if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11e))(1);
  }
  *(undefined4 *)(param_1 + 0x11e) = 0;
  ExceptionList = unaff_ESI;
  return;
}


