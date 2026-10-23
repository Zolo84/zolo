// FUN_006362c0 @ 6362c0 size=980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006362c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  float10 fVar11;
  int *piStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_007d1c17;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar11 = (float10)FUN_00436060();
  iVar7 = *(int *)(param_1 + 0x112);
  piVar10 = (int *)0x0;
  piVar4 = *(int **)(iVar7 + 4);
  while (piVar4 != (int *)0x0) {
    piVar10 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar10;
  }
  *(int **)(iVar7 + 4) = piVar10;
  *(int **)(iVar7 + 8) = piVar10;
  *(int **)(iVar7 + 0xc) = piVar10;
  piVar4 = operator_new(0x32);
  if (piVar4 == piVar10) {
    piVar4 = (int *)0x0;
  }
  else {
    piStack_4 = piVar10;
    uVar5 = FUN_0044e1b0();
    FUN_00433f00();
    *piVar4 = (int)&PTR_FUN_007ef808;
    piVar4[2] = (int)&PTR_LAB_007ef804;
    *(undefined4 *)((int)piVar4 + 0x2e) = uVar5;
  }
  iVar7 = *(int *)(param_1 + 0x112);
  piStack_4 = (int *)0xffffffff;
  iVar1 = *(int *)(iVar7 + 8);
  pvVar6 = operator_new(0xe);
  piStack_4 = (int *)0x1;
  if (pvVar6 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_005926a0(piVar4,iVar1,0);
  }
  iVar2 = *(int *)(iVar7 + 0xc);
  piStack_4 = (int *)0xffffffff;
  *(undefined4 *)(iVar7 + 8) = uVar5;
  *(int *)(iVar7 + 0xc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar7 + 4) = uVar5;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = uVar5;
  }
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 0xe8a4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar3[2];
    iVar7 = FUN_004e9370(*puVar3);
    puVar3 = puVar8;
    if ((((_DAT_007e3380 < *(float *)(iVar7 + 0x270)) || (_DAT_007e3380 < *(float *)(iVar7 + 0x278))
         ) || (_DAT_007e3380 < *(float *)(iVar7 + 0x27c))) ||
       ((_DAT_007e3380 < *(float *)(iVar7 + 0x274) || (_DAT_007e3380 < *(float *)(iVar7 + 0x280)))))
    {
      puVar8 = operator_new(0x32);
      piStack_4 = (int *)0x2;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar7 + 0x12);
        FUN_00433f00();
        *puVar8 = &PTR_FUN_007ef808;
        puVar8[2] = &PTR_LAB_007ef804;
        *(undefined4 *)((int)puVar8 + 0x2e) = uVar5;
      }
      piStack_4 = (int *)0xffffffff;
      iVar7 = *(int *)(param_1 + 0x112);
      iVar1 = *(int *)(iVar7 + 8);
      pvVar6 = operator_new(0xe);
      piStack_4 = (int *)0x3;
      if (pvVar6 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_005926a0(puVar8,iVar1,0);
      }
      iVar2 = *(int *)(iVar7 + 0xc);
      piStack_4 = (int *)0xffffffff;
      *(undefined4 *)(iVar7 + 8) = uVar5;
      *(int *)(iVar7 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar7 + 4) = uVar5;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = uVar5;
      }
    }
  }
  piStack_18 = &DAT_0089cad8;
  do {
    iVar7 = *piStack_18;
    if (((iVar7 != 0) && (iVar1 = *(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30), iVar1 != 0)) &&
       (((&DAT_0089cad8)[iVar1] != 0 && ((&DAT_0089cad8)[iVar1] == *(int *)(param_1 + 0x90))))) {
      puVar3 = *(undefined4 **)(iVar7 + 0xe8a4);
      while (puVar3 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)puVar3[2];
        iVar7 = FUN_004e9370(*puVar3);
        puVar3 = puVar8;
        if ((((_DAT_007e3380 < *(float *)(iVar7 + 0x270)) ||
             (_DAT_007e3380 < *(float *)(iVar7 + 0x278))) ||
            (_DAT_007e3380 < *(float *)(iVar7 + 0x27c))) ||
           ((_DAT_007e3380 < *(float *)(iVar7 + 0x274) ||
            (_DAT_007e3380 < *(float *)(iVar7 + 0x280))))) {
          puVar8 = operator_new(0x32);
          piStack_4 = (int *)0x4;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            uVar5 = *(undefined4 *)(iVar7 + 0x12);
            FUN_00433f00();
            *puVar8 = &PTR_FUN_007ef808;
            puVar8[2] = &PTR_LAB_007ef804;
            *(undefined4 *)((int)puVar8 + 0x2e) = uVar5;
          }
          piStack_4 = (int *)0xffffffff;
          iVar7 = *(int *)(param_1 + 0x112);
          iVar1 = *(int *)(iVar7 + 8);
          puVar9 = operator_new(0xe);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = puVar8;
            puVar9[1] = iVar1;
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar2 = *(int *)(iVar7 + 0xc);
          *(undefined4 **)(iVar7 + 8) = puVar9;
          *(int *)(iVar7 + 0xc) = iVar2 + 1;
          if (iVar2 == 0) {
            *(undefined4 **)(iVar7 + 4) = puVar9;
          }
          else {
            *(undefined4 **)(iVar1 + 8) = puVar9;
          }
        }
      }
    }
    piStack_18 = piStack_18 + 1;
  } while ((int)piStack_18 < 0x89d038);
  FUN_004353e0();
  FUN_00436130((float)fVar11);
  ExceptionList = pvStack_c;
  return;
}


