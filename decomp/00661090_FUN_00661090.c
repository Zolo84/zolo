// FUN_00661090 @ 661090 size=330

undefined4 FUN_00661090(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d3916;
  pvStack_c = ExceptionList;
  iVar1 = param_1[1];
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((iVar2 == 0x12e) && (*(int *)(iVar1 + 0xe) == 0)) {
    FUN_0064c090(0);
    *(undefined1 *)(DAT_00893750 + 0x120) = 1;
    puVar3 = operator_new(0xc);
    uStack_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0xe);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      if (puVar4 == (undefined2 *)0x0) {
        puVar5 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
        puVar5 = puVar4;
      }
      puVar3[1] = puVar5;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 9) = 1;
      *puVar3 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar3 + 10) = 0;
      *puVar5 = 0x4e;
      iVar1 = puVar3[1];
      uStack_14 = (uint)puVar4 & 0xff000000;
      *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
      iVar1 = puVar3[1];
      *(uint *)(iVar1 + 2) = uStack_14;
      *(undefined2 *)(iVar1 + 6) = 0;
      *puVar3 = &PTR_FUN_007e3e3c;
    }
    uStack_4 = 0xffffffff;
    if ((((DAT_00bd1500 == 0) || (*(char *)(DAT_00bd1500 + 0x37b) == '\0')) ||
        (*(char *)(DAT_00bd1500 + 0x37a) == '\0')) || (*(char *)(DAT_00bd1500 + 0x37b) == '\0')) {
      FUN_00565c30(puVar3);
    }
    else {
      FUN_00565bc0(puVar3);
    }
  }
  ExceptionList = pvStack_c;
  return 3;
}


