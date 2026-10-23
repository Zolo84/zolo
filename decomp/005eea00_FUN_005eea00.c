// FUN_005eea00 @ 5eea00 size=524

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005eea00(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined8 uVar12;
  undefined1 auStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cea0e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00436060();
  iVar1 = *(int *)(param_1 + 0x160);
  piVar2 = *(int **)(iVar1 + 4);
  while (piVar2 != (int *)0x0) {
    puVar10 = (undefined4 *)*piVar2;
    piVar2 = (int *)piVar2[2];
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)*puVar10)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0x160) + 0x14))();
  FUN_00435fd0();
  iVar1 = DAT_00ab27b4 + DAT_008477ac * 0x4b2;
  if (*(int *)(DAT_00ab27b4 + 0x3d8 + DAT_008477ac * 0x4b2) != 0) {
    uVar6 = FUN_004136a0();
    piVar2 = *(int **)(*(int *)(iVar1 + 0x3d8) + 0x3654);
    while (piVar2 != (int *)0x0) {
      piVar3 = (int *)piVar2[2];
      iVar1 = *piVar2;
      piVar2 = piVar3;
      if (*(int *)(iVar1 + 0x1c) != 0) {
        piVar3 = *(int **)(iVar1 + 0x18);
        fVar11 = (float10)FUN_0075ae20();
        uVar7 = (**(code **)(*piVar3 + 0xc))((double)(fVar11 * (float10)_DAT_007e4088));
        uVar8 = FUN_0042b6c9(s_HPROV_RESERACH_LIST_0085d33c);
        FUN_007a630a(auStack_10c,uVar8,uVar7);
        pvVar9 = operator_new(0x23e);
        uStack_4 = 0;
        if (pvVar9 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar12 = 0x100000000;
          uVar7 = FUN_00584270(0xff,0xbd,0);
          uVar7 = FUN_00433f90(uVar6,auStack_10c,0xe0,uVar7,uVar12);
        }
        iVar1 = *(int *)(param_1 + 0x160);
        uStack_4 = 0xffffffff;
        iVar4 = *(int *)(iVar1 + 8);
        puVar10 = operator_new(0xe);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          *puVar10 = uVar7;
          puVar10[1] = iVar4;
          puVar10[2] = 0;
          *(undefined1 *)(puVar10 + 3) = 0;
        }
        iVar5 = *(int *)(iVar1 + 0xc);
        *(undefined4 **)(iVar1 + 8) = puVar10;
        *(int *)(iVar1 + 0xc) = iVar5 + 1;
        if (iVar5 == 0) {
          *(undefined4 **)(iVar1 + 4) = puVar10;
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar10;
        }
      }
    }
    FUN_004353e0();
    if (param_2 != '\0') {
      FUN_00436130();
    }
  }
  ExceptionList = pvStack_c;
  return;
}


