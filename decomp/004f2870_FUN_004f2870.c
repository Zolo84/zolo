// FUN_004f2870 @ 4f2870 size=104

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2870(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  
  fVar1 = *(float *)((int)param_1 + 0x46) - _DAT_007e3374;
  *(float *)((int)param_1 + 0x46) = fVar1;
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)((int)param_1 + 0x46) = 0;
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  if ((cVar3 == '\0') || (*(int *)((int)param_1 + 0x5a) != 1)) {
    fVar1 = *(float *)(*(int *)(param_1[0xb] + 0x244) + 0x42) - _DAT_00dc17e0;
    fVar2 = DAT_00dc17e4 + *(float *)((int)param_1 + 0x4e);
    *(float *)((int)param_1 + 0x4e) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)((int)param_1 + 0x4e) = fVar1;
      return;
    }
  }
  return;
}


