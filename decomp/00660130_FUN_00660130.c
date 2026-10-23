// FUN_00660130 @ 660130 size=738

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00660130(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d38d1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_14 = operator_new(0xc);
  local_4 = 0;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_004c0150(0x1b,&DAT_0088f29c);
    *local_14 = &PTR_FUN_007e3e3c;
  }
  iVar4 = 1;
  local_4 = 0xffffffff;
  if (1 < DAT_00877690) {
    iVar5 = 0x4b2;
    do {
      FUN_004e8a10(1);
      iVar1 = *(int *)(DAT_00ab27b4 + iVar5 + 0x254);
      if (iVar1 < 8) {
        if (*(int *)(DAT_00ab27b4 + iVar5 + 0x3d4) == 0) {
          FUN_004e72a0(param_1);
          FUN_004e7300(param_1,0);
          *(undefined4 *)(DAT_00ab27b4 + 0x19e + iVar5) = 5;
          iVar1 = *(int *)(DAT_00ab27b4 + 0x1de + iVar5);
          fVar6 = (float10)FUN_004d0d40(*(undefined4 *)(iVar1 + 0x18));
          if ((float10)_DAT_007e3848 <= fVar6) {
            fVar6 = (float10)_DAT_007e3848;
          }
          else {
            fVar6 = (float10)FUN_004d0d40(*(undefined4 *)(iVar1 + 0x18));
          }
          *(float *)(iVar1 + 0x10) = (float)fVar6;
          if (fVar6 < (float10)_DAT_007e3380) {
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
          iVar1 = *(int *)(DAT_00ab27b4 + 0x1d6 + iVar5);
          fVar6 = (float10)FUN_004d0d40(*(undefined4 *)(iVar1 + 0x18));
          if ((float10)_DAT_007e3848 <= fVar6) {
            fVar6 = (float10)_DAT_007e3848;
          }
          else {
            fVar6 = (float10)FUN_004d0d40(*(undefined4 *)(iVar1 + 0x18));
          }
          *(float *)(iVar1 + 0x10) = (float)fVar6;
          if (fVar6 < (float10)_DAT_007e3380) {
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
        }
        pvVar2 = operator_new(0x2b6);
        local_4 = 1;
        if (pvVar2 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00507bc0(param_1);
        }
        local_4 = 0xffffffff;
        (**(code **)(piVar3[5] + 8))();
        FUN_005088c0(iVar4,0);
        (**(code **)(*piVar3 + 0x38))(param_1);
      }
      else if (iVar1 != 9) {
        pvVar2 = operator_new(700);
        local_4 = 2;
        if (pvVar2 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_005169b0(param_1);
        }
        local_4 = 0xffffffff;
        (**(code **)(piVar3[5] + 8))();
        (**(code **)(*piVar3 + 0x60))(iVar4);
        (**(code **)(*piVar3 + 0x38))(param_1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x4b2;
    } while (iVar4 < DAT_00877690);
  }
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)*local_14)(1);
  }
  iVar4 = FUN_006436d0(0x3a);
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  iVar4 = FUN_006436d0(0x3d);
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  iVar4 = FUN_006436d0(0x3c);
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  iVar4 = FUN_006436d0(0x3b);
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  iVar4 = FUN_006436d0(0x3e);
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  iVar4 = FUN_006436d0(0x3f);
  *(undefined1 *)(iVar4 + 0xa2) = 0;
  FUN_006436d0(0x3a);
  FUN_00433950();
  FUN_0064c090(0);
  FUN_004d87c0();
  ExceptionList = pvStack_c;
  return;
}


