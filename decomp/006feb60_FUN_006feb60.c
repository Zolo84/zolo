// FUN_006feb60 @ 6feb60 size=367

void __fastcall FUN_006feb60(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined2 *puVar5;
  void *unaff_EBX;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db5cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00796cd8(*(undefined4 *)(param_1 + 0xc));
  FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  iVar2 = FUN_005841b0();
  iVar3 = FUN_005841a0();
  pvVar4 = operator_new(((iVar2 + -0x300 >> 1) + 0xfa) * iVar3 * 2);
  *(void **)(param_1 + 0xc) = pvVar4;
  iVar2 = *DAT_00bd1bac;
  iVar3 = FUN_005841b0();
  puVar5 = (undefined2 *)(**(code **)(iVar2 + 4))(0,(iVar3 + -0x300 >> 1) + 0x206);
  iVar6 = 0;
  iVar2 = DAT_00bd1bac[1];
  iVar3 = FUN_005841b0();
  if (0 < ((iVar3 + -0x300 >> 1) + 0xfa) * iVar2) {
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0xc) + iVar6 * 2) = uVar1;
      iVar6 = iVar6 + 1;
      iVar2 = DAT_00bd1bac[1];
      iVar3 = FUN_005841b0();
    } while (iVar6 < ((iVar3 + -0x300 >> 1) + 0xfa) * iVar2);
  }
  pvVar4 = operator_new(0x40);
  pvStack_c = (void *)0x0;
  if (pvVar4 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006fdf40(100,200,0xe7,0x20,0x21);
  }
  *(int *)(param_1 + 0x2a) = iVar2;
  *(undefined1 *)(iVar2 + 0x3a) = 1;
  pvStack_c = (void *)0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x2a) + 0x34) = 0xe;
  *(undefined1 *)(*(int *)(param_1 + 0x2a) + 0x39) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x2a) + 0x38) = 0;
  (**(code **)(*DAT_00bd1bac + 0xc))();
  ExceptionList = unaff_EBX;
  return;
}


