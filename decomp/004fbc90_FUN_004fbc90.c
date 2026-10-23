// FUN_004fbc90 @ 4fbc90 size=512

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004fbc90(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,char param_6)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int aiStack_28 [5];
  int aiStack_14 [5];
  
  if (param_6 != '\0') {
    param_1[0x4c] = 0x8c;
    param_1[0x4d] = 0x8c;
    param_1[0x50] = 0x8c;
    param_1[0x4b] = 0x3f800000;
    param_1[0x4a] = 0x3f800000;
    param_1[0x27] = param_4;
    *(undefined1 *)((int)param_1 + 0x162) = 1;
    param_1[0x4f] = 1;
    param_1[0x51] = -1;
    param_1[0x22] = param_3;
    iVar2 = FUN_0044c630(param_3);
    fVar1 = *(float *)(iVar2 + 0x24) + *(float *)(param_2 + 0x24);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x3d] = (int)fVar1;
    (**(code **)(*param_1 + 0x38))(param_2);
    fVar1 = *(float *)(iVar2 + 0x24) + *(float *)(param_2 + 0x24);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x3e] = (int)fVar1;
    fVar1 = *(float *)(iVar2 + 0x1c) + *(float *)(param_2 + 0x1c);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x42] = (int)fVar1;
    fVar1 = *(float *)(iVar2 + 0x20) + *(float *)(param_2 + 0x20);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x43] = (int)fVar1;
    fVar1 = *(float *)(iVar2 + 0x18) + *(float *)(param_2 + 0x18);
    if (fVar1 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0x44] = (int)fVar1;
    return;
  }
  param_1[0x4c] = *(int *)(param_2 + 4);
  param_1[0x4d] = (&DAT_00dbd1a2)[*(int *)(param_2 + 4)];
  param_1[0x4e] = *(int *)(param_2 + 0x3c);
  FUN_004fcfd0(param_2,param_5);
  if (0x8b < param_3) {
    iVar2 = 0;
    piVar3 = param_1 + 0x27;
    do {
      *(int *)((int)aiStack_28 + iVar2) = piVar3[-5];
      *(int *)((int)aiStack_14 + iVar2) = *piVar3;
      piVar3[-5] = 0;
      *piVar3 = 0;
      iVar2 = iVar2 + 4;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x14);
    param_1[0x4f] = 0;
    iVar2 = 0;
    do {
      if (*(int *)((int)aiStack_28 + iVar2) != 0) {
        (**(code **)(*param_1 + 0x20))
                  (*(int *)((int)aiStack_28 + iVar2),*(undefined4 *)((int)aiStack_14 + iVar2),
                   0xffffffff);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x14);
    return;
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x20))(param_3,param_4,0xffffffff);
    return;
  }
  if ((char)param_1[0x58] != '\0') {
    (**(code **)(*param_1 + 0x34))(0x7f7fffff);
  }
  return;
}


