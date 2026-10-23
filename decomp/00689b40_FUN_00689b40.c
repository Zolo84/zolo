// FUN_00689b40 @ 689b40 size=792

/* WARNING: Removing unreachable block (ram,0x00689d58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689b40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  char cVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_38;
  float local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d4e88;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x11e) == '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    local_34 = *(float *)(iVar1 + 0x39c4);
    local_38 = *(float *)(iVar1 + 0x39b4);
    if (DAT_00dc1540 == '\0') {
      if (local_34 <= _DAT_007e67ec) {
        return;
      }
      if (local_38 <= _DAT_007e67e4) {
        return;
      }
      local_34 = local_34 - _DAT_007e67ec;
      local_38 = local_38 - _DAT_007e67e4;
    }
    else {
      local_34 = local_34 - *(float *)(iVar1 + 0x3bd0) * _DAT_00877624;
      if (local_34 < _DAT_007e3380) {
        return;
      }
      if (local_34 <= _DAT_007e3380) {
        return;
      }
      local_38 = local_38 - *(float *)(iVar1 + 0x3bd0) * _DAT_00877628;
      if (local_38 < _DAT_007e3380) {
        local_38 = 0.0;
      }
    }
    ppvVar6 = &local_c;
    piVar5 = *(int **)(param_1 + 0xa4);
joined_r0x00689bdc:
    ExceptionList = ppvVar6;
    if (piVar5 != (int *)0x0) {
      piVar8 = (int *)piVar5[2];
      piVar2 = (int *)*piVar5;
      cVar7 = FUN_00524000();
      ppvVar6 = ExceptionList;
      piVar5 = piVar8;
      if (cVar7 != '\0') {
        FUN_00447250();
        cVar7 = (**(code **)(*(int *)(param_1 + 200) + 0x24))();
        ppvVar6 = ExceptionList;
        if (cVar7 == '\0') {
          iVar1 = *(int *)((int)piVar2 + 0x26);
          do {
            if (iVar1 == 0) {
              fVar9 = (float10)FUN_0051c550();
              ppvVar6 = ExceptionList;
              if (fVar9 <= (float10)_DAT_0087762c) {
                (**(code **)(*piVar2 + 0x10))();
                fVar9 = (float10)FUN_00525b10();
                ppvVar6 = ExceptionList;
                if (fVar9 <= (float10)_DAT_00877630) {
                  (**(code **)(*piVar2 + 0x10))();
                  fVar9 = (float10)FUN_00525ba0();
                  ppvVar6 = ExceptionList;
                  if (fVar9 <= (float10)_DAT_00877630) {
                    uStack_4 = 0;
                    piVar8 = operator_new(0xe);
                    if (piVar8 != (int *)0x0) {
                      *piVar8 = (int)piVar2;
                      piVar8[1] = 0;
                      piVar8[2] = 0;
                      *(undefined1 *)(piVar8 + 3) = 0;
                    }
                    fVar9 = (float10)FUN_004a4610();
                    if (fVar9 <= (float10)local_34) {
                      fVar10 = (float10)FUN_004a4690();
                      if ((fVar10 <= (float10)local_38) &&
                         (fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x120) + 0xd8),
                         fVar11 = (float10)FUN_0051a470(),
                         (float10)(float)fVar10 <= fVar11 * (float10)fVar3)) {
                        local_34 = local_34 - (float)fVar9;
                        iVar1 = *(int *)(param_2 + 8);
                        local_38 = local_38 - (float)fVar10;
                        piVar8 = operator_new(0xe);
                        if (piVar8 == (int *)0x0) {
                          piVar8 = (int *)0x0;
                        }
                        else {
                          *piVar8 = (int)piVar2;
                          piVar8[1] = iVar1;
                          piVar8[2] = 0;
                          *(undefined1 *)(piVar8 + 3) = 0;
                        }
                        iVar4 = *(int *)(param_2 + 0xc);
                        *(int **)(param_2 + 8) = piVar8;
                        *(int *)(param_2 + 0xc) = iVar4 + 1;
                        if (iVar4 == 0) {
                          *(int **)(param_2 + 4) = piVar8;
                        }
                        else {
                          *(int **)(iVar1 + 8) = piVar8;
                        }
                      }
                    }
                    uStack_4 = 0xffffffff;
                    FUN_00527230();
                    ppvVar6 = ExceptionList;
                  }
                }
              }
              break;
            }
            iVar1 = *(int *)(iVar1 + 8);
            cVar7 = FUN_004fd350();
            ppvVar6 = ExceptionList;
          } while (cVar7 == '\0');
        }
      }
      goto joined_r0x00689bdc;
    }
  }
  ExceptionList = local_c;
  return;
}


