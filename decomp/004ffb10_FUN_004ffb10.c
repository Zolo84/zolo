// FUN_004ffb10 @ 4ffb10 size=405

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004ffb10(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_1 + 0x13c);
  }
  if (param_4 < *(int *)(&DAT_00d7c830 + *(uint *)(param_1 + 0x130) * 4)) {
    iVar4 = *(int *)(param_1 + 0x88 + param_4 * 4);
    if ((0 < iVar4) && (iVar4 < 0x8c)) {
      uVar3 = FUN_00789ce0(iVar4,*(undefined4 *)(param_1 + 0x9c + param_4 * 4));
      FUN_00500110(uVar3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        uVar3 = FUN_0044c630(*(undefined4 *)(param_1 + 0x88 + param_4 * 4));
        FUN_00500110(uVar3);
      }
    }
    iVar4 = *(int *)(param_1 + 0x88 + param_4 * 4);
    if (param_2 == 0) {
      if ((iVar4 != 0) &&
         (iVar4 = *(int *)(param_1 + 0x13c) + -1, *(int *)(param_1 + 0x13c) = iVar4, iVar4 < 0)) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
    }
    else {
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
      }
      uVar3 = FUN_00789ce0(param_2,param_3);
      FUN_004ffcb0(uVar3);
      if (*(int *)(param_1 + 0x5c) != 0) {
        uVar3 = FUN_0044c630(param_2);
        FUN_004ffcb0(uVar3);
      }
    }
    *(int *)(param_1 + 0x88 + param_4 * 4) = param_2;
    *(undefined4 *)(param_1 + 0x9c + param_4 * 4) = param_3;
    iVar4 = *(int *)(param_1 + 0x13c);
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    if (0 < iVar4) {
      piVar6 = (int *)(param_1 + 0x88);
      do {
        if (*(int *)(&DAT_00dc002a + *piVar6 * 4) == 3) {
          *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
        }
        iVar4 = FUN_00789ce0(*piVar6,piVar6[5]);
        fVar1 = *(float *)(iVar4 + 0x70);
        if (_DAT_007e3380 < fVar1) {
          if ((*(float *)(param_1 + 0x2f8) <= _DAT_007e3380) ||
             (fVar2 = *(float *)(param_1 + 0x2f8), fVar1 <= *(float *)(param_1 + 0x2f8))) {
            fVar2 = fVar1;
          }
          *(float *)(param_1 + 0x2f8) = fVar2;
        }
        iVar4 = *(int *)(param_1 + 0x13c);
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < iVar4);
    }
    *(undefined1 *)(param_1 + 0x230) = 1;
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  return *(uint *)(param_1 + 0x130) & 0xffffff00;
}


