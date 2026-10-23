// FUN_00663e10 @ 663e10 size=1284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00663e10(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  int local_54;
  int iStack_48;
  undefined1 auStack_3c [8];
  undefined **ppuStack_34;
  undefined **ppuStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d39b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004e9370();
  fVar9 = (float10)FUN_00667520();
  FUN_004e9370();
  local_54 = FUN_00527ab0();
  local_54 = local_54 + 1;
  piVar3 = *(int **)((int)param_1 + 0x7e);
joined_r0x00663e73:
  do {
    if ((piVar3 == (int *)0x0) || (local_54 < 1)) {
      if (param_3 != '\0') {
        piVar3 = *(int **)((int)param_1 + 0x6a);
        iVar5 = local_54;
        while ((piVar3 != (int *)0x0 && (0 < iVar5))) {
          piVar8 = (int *)piVar3[2];
          piVar1 = (int *)*piVar3;
          iVar6 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
          piVar3 = piVar8;
          if ((iVar6 != 0) && (fVar10 = (float10)FUN_0051a210(), (float10)_DAT_007e685c <= fVar10))
          {
            FUN_00457e10();
            ppuStack_20 = &PTR_FUN_007e7b70;
            uStack_4 = 1;
            FUN_00528270();
            fVar10 = (float10)FUN_00667520();
            if ((float10)(float)fVar9 * (float10)_DAT_007e40a8 <= fVar10) {
              FUN_0044a9c0();
              iVar5 = __ftol();
              if ((iVar5 < 10) && (piVar1[3] != param_2)) {
                iVar5 = *(int *)((int)param_1 + 10);
                (**(code **)(*piVar1 + 0xc))();
                (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                FUN_00458570();
                FUN_00428eb0();
                FUN_00446d10();
                FUN_00516300();
                FUN_00449290(auStack_3c);
                FUN_00667670();
                FUN_00462100();
                iVar5 = FUN_00428ee0();
                if (iVar5 == 0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  piVar8 = (int *)(iVar5 + -0x14);
                }
                piVar7 = (int *)FUN_0051b230();
                iVar5 = *(int *)((int)param_1 + 10);
                (**(code **)(*piVar7 + 0xc))();
                (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                FUN_00458570();
                (**(code **)(*param_1 + 0x1c8))();
                if ((piVar8 != (int *)0x0) && (piVar8 != piVar1)) {
                  piVar7 = *(int **)((int)piVar1 + 0x26);
                  while (piVar7 != (int *)0x0) {
                    piVar2 = (int *)*piVar7;
                    piVar7 = (int *)piVar7[2];
                    iVar5 = piVar2[0x4d];
                    if ((0x14 < iVar5) && (iVar5 < 0x1c)) {
                      iVar5 = *(int *)((int)param_1 + 10);
                      (**(code **)(*piVar8 + 0xc))();
                      (**(code **)(*piVar1 + 0xc))();
                      (**(code **)(*piVar2 + 0xc))();
                      (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                      FUN_00458570();
                      FUN_0045e6c0();
                    }
                  }
                  FUN_004e9370();
                  FUN_006aaee0();
                  iVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
                  local_54 = local_54 - iVar5;
                }
              }
              uStack_4 = 0xffffffff;
              FUN_00527230();
              iVar5 = local_54;
            }
            else {
              uStack_4 = 0xffffffff;
              FUN_00527230();
            }
          }
        }
      }
      ExceptionList = pvStack_c;
      return;
    }
    piVar8 = (int *)piVar3[2];
    piVar1 = (int *)*piVar3;
    iVar5 = (**(code **)(piVar1[0x47] + 4))();
    piVar3 = piVar8;
  } while (iVar5 != 0);
  cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
  if (cVar4 == '\0') goto code_r0x00663ec8;
  goto LAB_00663f1b;
code_r0x00663ec8:
  FUN_0051c0c0();
  FUN_004e9370();
  FUN_004e9370();
  iVar5 = FUN_00527cb0();
  iVar6 = FUN_00527cb0();
  if (iVar5 <= iVar6) {
LAB_00663f1b:
    fVar10 = (float10)FUN_0051a210();
    if ((float10)_DAT_007e682c <= fVar10) {
      FUN_0044a9c0();
      iVar5 = __ftol();
      if (iVar5 < 0x15) {
        if (*(char *)((int)piVar1 + 0x2ba) != '\0') {
          iVar5 = *(int *)(*(int *)((int)param_1 + 10) + 0x120);
          cVar4 = (**(code **)(*(int *)(iVar5 + 0x1aa) + 0x24))();
          if (cVar4 == '\0') {
            iVar6 = FUN_004e9370();
            iStack_48 = 0;
            if (0 < *(int *)(iVar6 + 0x290)) {
              do {
                FUN_004e9370();
                cVar4 = (**(code **)(*(int *)(iVar5 + 0x1aa) + 0x24))();
                if (cVar4 != '\0') goto LAB_00663ff0;
                iStack_48 = iStack_48 + 1;
              } while (iStack_48 < *(int *)(iVar6 + 0x290));
            }
            goto joined_r0x00663e73;
          }
        }
LAB_00663ff0:
        FUN_00457e10();
        ppuStack_34 = &PTR_FUN_007e7b70;
        uStack_4 = 0;
        FUN_00528270();
        fVar10 = (float10)FUN_00667520();
        if ((float10)(float)fVar9 * (float10)_DAT_007f0bc8 <= fVar10) {
          iVar5 = *(int *)((int)param_1 + 10);
          (**(code **)(*piVar1 + 0xc))();
          (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
          FUN_00458570();
          FUN_004e9370();
          FUN_006aaee0();
          iVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
          local_54 = local_54 - iVar5;
        }
        uStack_4 = 0xffffffff;
        FUN_00527230();
      }
    }
  }
  goto joined_r0x00663e73;
}


