// FUN_00524640 @ 524640 size=441

void __fastcall FUN_00524640(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  void **ppvVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c21f6;
  ppvVar5 = &pvStack_c;
  piVar3 = *(int **)((int)param_1 + 0x26);
  pvStack_c = ExceptionList;
  do {
    do {
      ExceptionList = ppvVar5;
      if (piVar3 == (int *)0x0) {
        (**(code **)(*param_1 + 0x94))();
        ExceptionList = pvStack_c;
        return;
      }
      piVar1 = (int *)piVar3[2];
      puVar7 = (undefined4 *)*piVar3;
      ppvVar5 = ExceptionList;
      piVar3 = piVar1;
    } while (*(char *)(puVar7 + 0x57) == '\0');
    (**(code **)(*(int *)((int)param_1 + 0x22) + 0x18))(puVar7);
    puVar7[0x1b] = 0;
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    ppvVar5 = ExceptionList;
  } while (0 < iVar6);
  *(undefined1 *)(param_1 + 0x61) = 1;
  puVar7 = operator_new(0xc);
  uVar4 = DAT_0088f28c;
  uStack_4 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar6 = param_1[0x92];
    uStack_12 = (undefined2)DAT_0088f28e;
    uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
    pvVar8 = operator_new(0x20);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
      *(undefined2 *)((int)pvVar8 + 0xe) = 0;
      *(undefined4 *)((int)pvVar8 + 0x10) = 0;
      *(undefined2 *)((int)pvVar8 + 0x1a) = 0;
      *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
    }
    FUN_0042d320(pvVar8);
    *puVar7 = &PTR_FUN_007e5e5c;
    *(undefined1 *)((int)puVar7 + 10) = 0;
    *(undefined2 *)puVar7[1] = 0x35;
    iVar2 = puVar7[1];
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 4);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar6 + 8);
    puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar6 = puVar7[1];
    *(undefined4 *)(iVar6 + 2) = *puVar9;
    *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar9 + 1);
    iVar6 = puVar7[1];
    *puVar7 = &PTR_FUN_007e5370;
    *(int *)(iVar6 + 0xe) = param_1[6];
    *(short *)(iVar6 + 0x12) = (short)param_1[7];
    *(undefined1 *)(puVar7[1] + 0x14) = 1;
    *(undefined1 *)(puVar7[1] + 0x15) = 0;
    *(undefined4 *)(puVar7[1] + 0x16) = 0;
    iVar6 = puVar7[1];
    *(uint *)(iVar6 + 0x1a) = CONCAT22(uStack_12,uVar4);
    *(undefined2 *)(iVar6 + 0x1e) = uStack_10;
  }
  uStack_4 = 0xffffffff;
  FUN_00565c50(puVar7);
  ExceptionList = pvStack_c;
  return;
}


