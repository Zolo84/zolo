// FUN_0066c690 @ 66c690 size=1430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0066c690(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d402b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ae0d0(1,0);
  iVar1 = (int)*(char *)(DAT_00893530 + 0x14) +
          ((int)*(char *)(DAT_00893530 + 0x15) +
          ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) * 0x1e) *
          0x18;
  cVar5 = *(char *)(*(int *)(*(int *)((int)param_1 + 10) + 0x12da) + 0x3b38);
  if (cVar5 == '\0') {
    bVar15 = (uint)(*(int *)(*(int *)((int)param_1 + 10) + 6) + iVar1) % 0xa8 == 0;
  }
  else {
    bVar15 = true;
  }
  bVar2 = false;
  bVar3 = false;
  if (bVar15) {
    FUN_0066d190();
  }
  cVar4 = FUN_006a8720();
  if (cVar4 == '\0') {
    if (param_1[0x9c55] == 0) {
      pvVar6 = operator_new(0x52);
      local_4 = 0;
      if (pvVar6 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0066a980(*(undefined4 *)((int)param_1 + 10));
      }
      local_4 = 0xffffffff;
      param_1[0x9c55] = iVar7;
    }
    FUN_0066af70(*(undefined4 *)((int)param_1 + 10));
    if ((char)param_1[0x9c56] == '\0') {
      piVar8 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
      if (piVar8 != (int *)0x0) {
        do {
          piVar10 = (int *)piVar8[2];
          piVar8 = (int *)*piVar8;
          cVar4 = (**(code **)(*piVar8 + 0x30))();
          if (cVar4 != '\0') {
            if (((int *)piVar8[0x7d] != (int *)0x0) &&
               (cVar4 = (**(code **)(*(int *)piVar8[0x7d] + 0xe4))(), cVar4 != '\0')) {
              (**(code **)(*param_1 + 0x1b8))(piVar8);
            }
            iVar7 = (**(code **)(*(int *)((int)piVar8 + 0x22) + 4))();
            if (0 < iVar7) {
              bVar2 = true;
            }
          }
          piVar8 = piVar10;
        } while (piVar10 != (int *)0x0);
        if (bVar2) {
          piVar8 = (int *)(**(code **)(*param_1 + 0x1b4))();
          iVar7 = (**(code **)(*piVar8 + 4))();
          if ((0 < iVar7) && (bVar15)) {
            iVar7 = (**(code **)(*param_1 + 0x1b4))();
            *(undefined1 *)(iVar7 + 0x10) = 1;
            iVar7 = (**(code **)(*param_1 + 0x1b4))();
            for (piVar8 = *(int **)(iVar7 + 4); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
              iVar7 = *piVar8;
              iVar9 = (**(code **)(*(int *)(iVar7 + 0x22) + 4))();
              if ((0 < iVar9) && (*(int *)(iVar7 + 0x176) == 0)) {
                if (!bVar3) {
                  FUN_0066d6c0();
                  bVar3 = true;
                }
                if ((cVar5 == '\0') || ((uint)(*(int *)(iVar7 + 0x1a) + iVar1) % 0x18 == 0)) {
                  FUN_00669770(iVar7);
                  local_4 = 1;
                  piVar10 = (int *)FUN_004ef800();
                  if ((piVar10 != (int *)0x0) ||
                     (piVar10 = (int *)FUN_0066e990(auStack_28), piVar10 != (int *)0x0)) {
                    (**(code **)(*piVar10 + 0xb4))(param_1);
                    (**(code **)(*piVar10 + 0xc4))();
                    (**(code **)(*piVar10 + 0x1b8))(iVar7);
                    iVar9 = FUN_004ef800();
                    if (iVar9 != 0) {
                      piVar11 = (int *)FUN_004ef800();
                      if ((piVar10 != piVar11) &&
                         (puVar12 = (undefined4 *)FUN_004ef800(), puVar12 != (undefined4 *)0x0)) {
                        (**(code **)*puVar12)(1);
                      }
                      FUN_004ef7f0(0);
                    }
                    iVar9 = FUN_004ef820();
                    if (iVar9 != 0) {
                      iVar9 = FUN_004ef820();
                      if (*(int *)(iVar9 + 0x8c) != 0) {
                        FUN_004ef820();
                        uVar13 = FUN_004ef820();
                        FUN_004d1330(uVar13);
                      }
                      piVar11 = (int *)FUN_004ef820();
                      iVar9 = (**(code **)(*piVar11 + 0x218))();
                      if (iVar9 != 0) {
                        piVar11 = (int *)FUN_004ef820();
                        iVar9 = (**(code **)(*piVar11 + 0x218))();
                        *(undefined4 *)(iVar9 + 0x10) = 0;
                      }
                      puVar12 = (undefined4 *)FUN_004ef820();
                      if (puVar12 != (undefined4 *)0x0) {
                        (**(code **)*puVar12)(1);
                      }
                    }
                    FUN_004ef810(piVar10);
                    *(undefined4 *)(iVar7 + 0x118) = 0xc47a0666;
                  }
                  local_4 = 0xffffffff;
                  FUN_00669740();
                }
              }
            }
            piVar8 = (int *)(**(code **)(*param_1 + 0x1b4))();
            *(undefined1 *)(piVar8 + 4) = 0;
            iVar7 = piVar8[1];
            while (iVar7 != 0) {
              if (*(char *)(iVar7 + 0xc) == '\0') {
                iVar7 = *(int *)(iVar7 + 8);
              }
              else {
                iVar9 = *(int *)(iVar7 + 8);
                (**(code **)(*piVar8 + 0x1c))(iVar7);
                iVar7 = iVar9;
              }
            }
          }
          for (piVar8 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508); piVar8 != (int *)0x0;
              piVar8 = (int *)piVar8[2]) {
            piVar10 = (int *)*piVar8;
            cVar5 = (**(code **)(*piVar10 + 0x30))();
            if ((cVar5 != '\0') &&
               (iVar7 = (**(code **)(*(int *)((int)piVar10 + 0x22) + 4))(), 0 < iVar7)) {
              if ((float)piVar10[0x46] == _DAT_007f0ef4) {
                piVar10[0x46] = 0;
              }
              else if (*(int *)((int)piVar10 + 0x176) == 0) {
                bVar2 = false;
                iVar7 = FUN_004f0a80();
                if ((iVar7 == 0) || (*(char *)(iVar7 + 0x45) == '\0')) {
                  if ((bVar15) && (iVar7 = FUN_004ef820(), iVar7 != 0)) {
                    piVar11 = (int *)FUN_004ef820();
                    iVar7 = (**(code **)(*piVar11 + 0x1e8))();
                    if (iVar7 == 0x44) {
                      uVar14 = 8;
                    }
                    else {
                      piVar11 = (int *)FUN_004ef820();
                      fVar16 = (float10)(**(code **)(*piVar11 + 0x208))();
                      uVar14 = 0x18;
                      if ((float10)_DAT_007e4090 <= fVar16) {
                        uVar14 = 0xa8;
                      }
                    }
                    if ((uint)(*(int *)((int)piVar10 + 0x1a) + iVar1) % uVar14 == 0)
                    goto LAB_0066cb0c;
                  }
                }
                else {
                  bVar2 = true;
LAB_0066cb0c:
                  FUN_00669770(piVar10);
                  local_4 = 2;
                  piVar10 = (int *)FUN_004ef820();
                  if ((((bVar2) && (piVar10 != (int *)0x0)) &&
                      (iVar7 = (**(code **)(*piVar10 + 0x1e8))(), iVar7 == 0x44)) &&
                     (*(char *)(piVar10[0x23] + 0x45) == '\0')) {
                    local_4 = 0xffffffff;
                    FUN_00669740();
                  }
                  else {
                    if (!bVar3) {
                      FUN_0066d6c0();
                      bVar3 = true;
                    }
                    piVar11 = (int *)FUN_0066e990(auStack_44);
                    if (piVar11 != (int *)0x0) {
                      fVar16 = (float10)(**(code **)(*piVar11 + 0x208))();
                      if (piVar10 == (int *)0x0) {
                        fVar17 = (float10)0.0;
                      }
                      else {
                        fVar17 = (float10)(**(code **)(*piVar10 + 0x208))();
                      }
                      if ((float10)(float)fVar16 <= fVar17 + (float10)_DAT_007e3374) {
                        (**(code **)*piVar11)(1);
                      }
                      else {
                        puVar12 = (undefined4 *)FUN_004ef800();
                        if (puVar12 != (undefined4 *)0x0) {
                          (**(code **)*puVar12)(1);
                        }
                        FUN_004ef7f0(piVar11);
                      }
                    }
                    local_4 = 0xffffffff;
                    FUN_00669740();
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x9c56) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}


