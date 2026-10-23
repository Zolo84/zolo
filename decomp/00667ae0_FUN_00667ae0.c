// FUN_00667ae0 @ 667ae0 size=597

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00667ae0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  undefined2 in_stack_ffffff94;
  undefined2 uVar11;
  undefined1 auStack_4c [4];
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_38;
  undefined4 uStack_36;
  undefined **ppuStack_30;
  int iStack_2c;
  undefined **ppuStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_16;
  undefined4 uStack_12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = (int)param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d3aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)param_2 + 0x18) + 4))();
  piVar8 = (int *)((int)param_2 + 0x2a);
  iStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  ppuStack_28 = &PTR_LAB_007e6edc;
  uStack_16 = 0x4b18967f;
  uStack_12 = 0x4b18967f;
  ppuStack_30 = &PTR_FUN_007f0bf4;
  uStack_4 = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0x4b18967f;
  *(undefined4 *)(param_1 + 0xb2) = 0x4b18967f;
  *(int *)(param_1 + 0x9c) = param_1;
  uVar11 = 0x7b6c;
  iStack_2c = param_1;
  (**(code **)(*(int *)(param_1 + 0xa0) + 0x10))();
  for (iVar4 = iStack_24; iVar4 != 0; iVar4 = *(int *)(iVar4 + 10)) {
    FUN_00446d10(iVar4);
    FUN_0049a190(in_stack_ffffff94,uVar11);
  }
  uStack_4 = 0xffffffff;
  ppuStack_28 = &PTR_LAB_007e6edc;
  FUN_0049a150();
  while( true ) {
    iVar4 = (**(code **)(*piVar8 + 4))();
    if (iVar4 < 1) {
      ExceptionList = pvStack_c;
      return;
    }
    puVar6 = (undefined2 *)0x0;
    param_2 = 0.0;
    fVar9 = (float10)(**(code **)(*(int *)(param_1 + 0x98) + 0xc))();
    puVar7 = *(undefined2 **)(iVar2 + 0x2e);
    if (puVar7 == (undefined2 *)0x0) break;
    do {
      uStack_3e = *(undefined4 *)(puVar7 + 1);
      uStack_40 = *puVar7;
      FUN_00446d10(&uStack_40);
      piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0xa0) + 0x28))(auStack_4c);
      if (*piVar5 == 0) {
        uStack_38 = *puVar7;
        uStack_36 = *(undefined4 *)(puVar7 + 1);
        iVar4 = FUN_00428ee0((short)&uStack_38);
        if (iVar4 == 0) {
          sVar3 = 0;
        }
        else {
          sVar3 = (short)iVar4 + -8;
        }
        fVar10 = (float10)FUN_0066a550(sVar3);
        if ((float10)param_2 < fVar10 - (float10)(float)fVar9) {
          param_2 = (float)(fVar10 - (float10)(float)fVar9);
          puVar6 = puVar7;
        }
      }
      puVar7 = *(undefined2 **)(puVar7 + 5);
    } while (puVar7 != (undefined2 *)0x0);
    if (param_2 <= _DAT_007e3380) {
      ExceptionList = pvStack_c;
      return;
    }
    if (puVar6 != (undefined2 *)0x0) {
      uStack_48 = *puVar6;
      uStack_46 = *(undefined4 *)(puVar6 + 1);
      iVar4 = FUN_00428ee0((short)&uStack_48);
      if (iVar4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(iVar4 + -8);
      }
      if ((float)piVar5[0xbc] <= (float)piVar5[0xbd]) {
        fVar1 = (float)piVar5[0xbc];
      }
      else {
        fVar1 = (float)piVar5[0xbd];
      }
      if (fVar1 < *(float *)(param_1 + 0xb6)) {
        if ((float)piVar5[0xbc] <= (float)piVar5[0xbd]) {
          iVar4 = piVar5[0xbc];
        }
        else {
          iVar4 = piVar5[0xbd];
        }
        *(int *)(param_1 + 0xb6) = iVar4;
      }
      fVar9 = (float10)(**(code **)(*piVar5 + 0x28))();
      if (fVar9 < (float10)*(float *)(param_1 + 0xb2)) {
        fVar9 = (float10)(**(code **)(*piVar5 + 0x28))();
        *(float *)(param_1 + 0xb2) = (float)fVar9;
      }
      FUN_0049a190(uStack_48,(short)((uint)uStack_46 >> 0x10));
    }
  }
  ExceptionList = pvStack_c;
  return;
}


