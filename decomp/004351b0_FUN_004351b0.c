// FUN_004351b0 @ 4351b0 size=555

void __fastcall FUN_004351b0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *apiStack_14 [2];
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar8 = 0;
  bVar3 = false;
  puVar6 = *(undefined4 **)(param_1 + 0x3e);
  do {
    if (puVar6 == (undefined4 *)0x0) goto LAB_00435257;
    puVar1 = (undefined4 *)puVar6[2];
    piVar2 = (int *)*puVar6;
    iVar4 = (**(code **)(*piVar2 + 0x18))();
    iVar8 = iVar8 + iVar4;
    apiStack_14[0] = *(int **)(param_1 + 0x2a);
    puVar6 = puVar1;
  } while ((iVar8 < (int)apiStack_14[0]) ||
          (iVar4 = (**(code **)(*piVar2 + 0x18))(), iVar8 - (int)apiStack_14[0] < iVar4));
  bVar3 = true;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(*(int *)(param_1 + 0x3e) + 8);
  piVar2 = *(int **)(param_1 + 0x4a);
  iVar8 = *piVar2;
  apiStack_14[0] = piVar2;
  iVar4 = FUN_00415be0();
  apiStack_14[0] = (int *)(float)(*(int *)(param_1 + 0x2a) - iVar4);
  FUN_00436060();
  uVar7 = __ftol();
  puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x28))(&uStack_8,uVar7);
  (**(code **)(iVar8 + 0x18))(*puVar6);
LAB_00435257:
  iVar8 = 0;
  puVar6 = *(undefined4 **)(param_1 + 0x3e);
  do {
    if (puVar6 == (undefined4 *)0x0) goto LAB_004352aa;
    puVar1 = (undefined4 *)puVar6[2];
    piVar2 = (int *)*puVar6;
    iVar4 = (**(code **)(*piVar2 + 0x18))();
    iVar8 = iVar8 + iVar4;
    apiStack_14[0] = *(int **)(param_1 + 0x2a);
    puVar6 = puVar1;
  } while ((iVar8 < (int)apiStack_14[0]) ||
          (iVar4 = (**(code **)(*piVar2 + 0x18))(), iVar8 - (int)apiStack_14[0] < iVar4));
  if ((*(int *)(param_1 + 0x3e) != 0) && (*(int *)(*(int *)(param_1 + 0x3e) + 4) != 0)) {
LAB_004352aa:
    if (!bVar3) {
      iVar8 = *(int *)(param_1 + 0x52);
      piVar2 = *(int **)(param_1 + 0x4a);
      uStack_8 = *(undefined4 *)(iVar8 + 0x14);
      iVar4 = *(int *)(iVar8 + 0x18);
      fStack_c = *(float *)(iVar8 + 0x1c);
      iVar8 = *piVar2;
      apiStack_14[0] = piVar2;
      iVar5 = FUN_00415be0();
      puVar6 = (undefined4 *)
               (**(code **)(*piVar2 + 0x28))(&uStack_8,(iVar4 + (int)fStack_c) - iVar5);
      (**(code **)(iVar8 + 0x18))(*puVar6);
      apiStack_14[0] = *(int **)(param_1 + 4);
      iVar8 = 0;
      while (apiStack_14[0] != (int *)0x0) {
        iVar4 = (**(code **)(*(int *)*apiStack_14[0] + 0x18))();
        iVar8 = iVar8 + iVar4;
        FUN_00436e10(&fStack_c,0);
      }
      fStack_c = (float)(iVar8 - *(int *)(param_1 + 0x2a));
      iVar8 = __ftol();
      if (0 < iVar8) {
        apiStack_14[0] = *(int **)(param_1 + 4);
        while (apiStack_14[0] != (int *)0x0) {
          iVar4 = (**(code **)(*(int *)*apiStack_14[0] + 0x18))();
          iVar8 = iVar8 - iVar4;
          if (iVar8 < 0) {
            *(int **)(param_1 + 0x3e) = apiStack_14[0];
            break;
          }
          FUN_00436e10(&fStack_c,0);
        }
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x52);
  uStack_8 = *(undefined4 *)(iVar8 + 0x14);
  uStack_4 = *(undefined4 *)(iVar8 + 0x18);
  iVar8 = *(int *)(iVar8 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x4a);
  iVar4 = *piVar2;
  apiStack_14[0] = piVar2;
  iVar5 = FUN_00415be0();
  fStack_c = (float)(iVar8 - iVar5);
  FUN_00436060();
  uVar7 = __ftol();
  puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x28))(apiStack_14,uVar7);
  (**(code **)(iVar4 + 0x18))(*puVar6);
  return;
}


