// FUN_0050a170 @ 50a170 size=316

void __thiscall FUN_0050a170(int param_1,char param_2)

{
  float fVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x22)) {
    iVar2 = *(int *)(param_1 + 0x22) + -1;
    *(int *)(param_1 + 0x22) = iVar2;
    FUN_004b2eb0(param_1,iVar2);
    if (param_2 == '\0') {
      iVar2 = *(int *)(param_1 + 0x32);
      fVar1 = (float)(int)(&DAT_0084a0ec)[iVar2];
      if (fVar1 <= *(float *)(param_1 + 0x36)) {
        if (*(float *)(param_1 + 0x36) < (float)*(int *)(&DAT_0084a0f0 + iVar2 * 4)) {
          _param_2 = (*(float *)(param_1 + 0x36) - fVar1) /
                     ((float)*(int *)(&DAT_0084a0f0 + iVar2 * 4) - fVar1);
        }
        else {
          _param_2 = 1.0;
        }
      }
      else {
        *(float *)(param_1 + 0x36) = fVar1;
        _param_2 = 0.0;
      }
      if (0 < iVar2) {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (10 < iVar2) {
          iVar2 = 10;
        }
        FUN_004b2de0(param_1,iVar2);
        *(int *)(param_1 + 0x32) = iVar2;
        if (*(float *)(param_1 + 0x36) < (float)(int)(&DAT_0084a0ec)[iVar2]) {
          *(float *)(param_1 + 0x36) = (float)(int)(&DAT_0084a0ec)[iVar2];
        }
      }
      iVar2 = *(int *)(param_1 + 0x3e);
      if (iVar2 < *(int *)(param_1 + 0x32)) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (10 < iVar2) {
          iVar2 = 10;
        }
        if (*(int *)(param_1 + 0x32) != 0) {
          FUN_004b2de0(param_1,iVar2);
        }
        *(int *)(param_1 + 0x32) = iVar2;
        if (*(float *)(param_1 + 0x36) < (float)(int)(&DAT_0084a0ec)[iVar2]) {
          *(float *)(param_1 + 0x36) = (float)(int)(&DAT_0084a0ec)[iVar2];
        }
      }
      *(float *)(param_1 + 0x36) =
           (float)(*(int *)(&DAT_0084a0f0 + *(int *)(param_1 + 0x32) * 4) -
                  (&DAT_0084a0ec)[*(int *)(param_1 + 0x32)]) * _param_2 +
           (float)(int)(&DAT_0084a0ec)[*(int *)(param_1 + 0x32)];
    }
  }
  return;
}


