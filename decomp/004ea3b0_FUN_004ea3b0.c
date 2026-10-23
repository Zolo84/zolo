// FUN_004ea3b0 @ 4ea3b0 size=386

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ea3b0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  param_2 = param_2 + *(float *)(param_1 + 0x270);
  fVar1 = *(float *)(param_1 + 0x270);
  *(float *)(param_1 + 0x270) = param_2;
  if (DAT_0087759c < param_2) {
    *(float *)(param_1 + 0x270) = DAT_0087759c;
  }
  if (*(float *)(param_1 + 0x270) < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  if ((*(int *)(param_1 + 0x3d8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x3d8) + 0x117de) != *(int *)(param_1 + 0x12))) {
    if ((fVar1 <= _DAT_007e3380) || (*(float *)(param_1 + 0x270) != _DAT_007e3380)) {
      if (((fVar1 == _DAT_007e3380) && (_DAT_007e3380 < *(float *)(param_1 + 0x270))) &&
         (iVar5 = 1, 1 < DAT_00877690)) {
        iVar4 = 0x4b2;
        do {
          iVar2 = *(int *)(iVar4 + 0x254 + DAT_00ab27b4);
          if (((iVar2 != 8) && (iVar2 != 9)) &&
             (iVar2 = *(int *)(iVar4 + DAT_00ab27b4 + 0x3d8), iVar2 != 0)) {
            if (iVar2 != *(int *)(param_1 + 0x3d8)) {
              cVar3 = FUN_0044b300(*(undefined4 *)(iVar2 + 6));
              if (cVar3 == '\0') goto LAB_004ea51a;
            }
            FUN_004ea310();
          }
LAB_004ea51a:
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x4b2;
        } while (iVar5 < DAT_00877690);
      }
    }
    else {
      iVar5 = 1;
      if (1 < DAT_00877690) {
        iVar4 = 0x4b2;
        do {
          iVar2 = *(int *)(iVar4 + 0x254 + DAT_00ab27b4);
          if (((iVar2 != 8) && (iVar2 != 9)) &&
             (*(int *)(iVar4 + DAT_00ab27b4 + 0x18a) == *(int *)(param_1 + 0x12))) {
            FUN_004ea310();
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x4b2;
        } while (iVar5 < DAT_00877690);
        return;
      }
    }
  }
  return;
}


