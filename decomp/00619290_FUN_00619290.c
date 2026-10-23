// FUN_00619290 @ 619290 size=371

void __fastcall FUN_00619290(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d0ad3;
  pvStack_c = ExceptionList;
  if (*(int *)(DAT_00d0ca90 + 0x21e66) == 0x17) {
    iVar1 = (&DAT_0089cad8)[param_1[0x32]];
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    iVar1 = FUN_004e9370(DAT_008477ac);
    iVar2 = *(int *)(iVar1 + 0x3d8);
    iVar1 = DAT_00d0ca90;
    if (((iVar2 != 0) && (iVar1 = iVar2, DAT_008477ac != 0)) &&
       (iVar2 = FUN_0044e1b0(), DAT_008477ac == iVar2)) {
      iVar1 = *(int *)(DAT_00ab27b4 + 0x3d4 + DAT_008477ac * 0x4b2);
    }
  }
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x41])(1);
  }
  puVar3 = operator_new(0xae);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_00d0ca90 + 6);
    FUN_00433660();
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    *puVar3 = &PTR_FUN_007ef334;
    puVar3[2] = &PTR_LAB_007ef330;
    *(undefined ***)((int)puVar3 + 0x7e) = &PTR_LAB_007ef32c;
    *(undefined4 *)((int)puVar3 + 0xaa) = uVar4;
    uVar4 = FUN_0044b160(uVar4);
    FUN_004159f0(uVar4);
    uVar4 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
    FUN_00415f20(uVar4);
    FUN_00415b90(4);
    puVar5 = puVar3;
  }
  uStack_4 = 0xffffffff;
  param_1[0x41] = (int)puVar5;
  (**(code **)(*param_1 + 0x74))(iVar1);
  FUN_00619ff0(0);
  DAT_008477ac = 0;
  ExceptionList = puVar3;
  return;
}


