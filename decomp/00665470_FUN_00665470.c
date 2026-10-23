// FUN_00665470 @ 665470 size=340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00665470(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined **ppuStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d3a18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_3 + 4))();
  if (iVar2 != 0) {
    puStack_1c = (undefined4 *)0x0;
    puStack_18 = (undefined4 *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
    ppuStack_20 = &PTR_FUN_007e4c84;
    uStack_4 = 0;
    puStack_18 = operator_new(0xe);
    if (puStack_18 == (undefined4 *)0x0) {
      puStack_18 = (undefined4 *)0x0;
    }
    else {
      puStack_18[1] = 0;
      *puStack_18 = param_2;
      puStack_18[2] = 0;
      *(undefined1 *)(puStack_18 + 3) = 0;
    }
    puVar3 = puStack_18;
    if (iStack_14 != 0) {
      _DAT_00000008 = puStack_18;
      puVar3 = puStack_1c;
    }
    puStack_1c = puVar3;
    iStack_14 = iStack_14 + 1;
    fVar6 = (float10)FUN_00667520(&ppuStack_20);
    fVar7 = (float10)FUN_00667520(param_3);
    if (fVar7 * (float10)_DAT_007e34c0 < (float10)(float)fVar6) {
      iVar2 = *(int *)(param_1 + 0x48);
      uVar4 = *(undefined4 *)(*(int *)param_3[1] + 0xc);
      puVar3 = operator_new(0xe);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = uVar4;
        puVar3[1] = iVar2;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x4c);
      *(undefined4 **)(param_1 + 0x48) = puVar3;
      *(int *)(param_1 + 0x4c) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(param_1 + 0x44) = puVar3;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar3;
      }
      uVar8 = 0;
      uVar4 = FUN_0051b230(0);
      FUN_006aaff0(param_2,uVar4,uVar8);
      FUN_00666ee0(param_2);
    }
    uStack_4 = 0xffffffff;
    uVar5 = FUN_00527230();
    ExceptionList = pvStack_c;
    return uVar5 & 0xffffff00;
  }
  ExceptionList = pvStack_c;
  return 0;
}


