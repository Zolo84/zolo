// FUN_0068e930 @ 68e930 size=672

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0068e930(int param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  float fStack_34;
  float local_30;
  void *local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_007d5028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_004e9370(param_2);
  iVar9 = 0;
  local_30 = 100000.0;
  iVar6 = iVar9;
  piVar10 = *(int **)(param_1 + 0x94);
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    do {
      piVar2 = (int *)piVar10[2];
      iVar7 = *piVar10;
      cVar3 = FUN_00525660();
      iVar9 = iVar6;
      fVar1 = local_30;
      if ((((cVar3 == '\0') && (iVar5 = (**(code **)(*(int *)(iVar7 + 0x11c) + 4))(), iVar5 == 0))
          && (*(char *)(iVar7 + 0x17b) == '\0')) &&
         ((param_3 == (int *)0x0 || (cVar3 = (**(code **)(*param_3 + 0x24))(iVar7), cVar3 == '\0')))
         ) {
        fVar12 = (float10)FUN_0044a9c0(param_2,*(undefined4 *)(iVar7 + 0xc));
        iVar5 = FUN_0051b230();
        cVar3 = FUN_004ccb10(*(undefined4 *)(iVar5 + 0x482));
        if (cVar3 != '\0') {
          fStack_34 = *(float *)(iVar4 + 0x48a) * _DAT_007e40b8 + (float)fVar12;
          cVar3 = FUN_005237d0();
          if (cVar3 != '\0') {
            fStack_34 = fStack_34 - _DAT_007e4090;
          }
          cVar3 = FUN_0051cc00();
          if (cVar3 != '\0') {
            fStack_34 = fStack_34 - _DAT_007e3834;
          }
          fVar12 = (float10)FUN_00525ba0();
          iVar9 = *(int *)(param_1 + 10);
          fVar1 = (float)(fVar12 + (float10)fStack_34);
          iVar5 = FUN_00522770();
          if (iVar5 != iVar9) {
            fVar1 = fVar1 + _DAT_007e3834;
          }
          iVar9 = iVar7;
          if ((iVar6 != 0) && (local_30 <= fVar1)) {
            iVar9 = iVar6;
            fVar1 = local_30;
          }
        }
      }
      local_30 = fVar1;
      iVar6 = iVar9;
      piVar10 = piVar2;
    } while (piVar2 != (int *)0x0);
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0xc) != *(int *)(iVar4 + 0x12))) {
      if (DAT_00dc18f8 != '\0') {
        iVar6 = (**(code **)**(undefined4 **)(iVar4 + 0x482))();
        iVar6 = *(int *)(iVar6 + 0x6c);
        iVar7 = FUN_0051b230();
        iVar7 = (**(code **)**(undefined4 **)(iVar7 + 0x482))();
        if (iVar6 != *(int *)(iVar7 + 0x6c)) {
          ExceptionList = local_c;
          return 0;
        }
      }
      uVar8 = *(undefined4 *)(param_1 + 10);
      FUN_0051b230(uVar8);
      cVar3 = FUN_004e9500(uVar8);
      if (cVar3 == '\0') {
        piStack_4 = piVar2;
        uVar8 = FUN_0051b230();
        cVar3 = FUN_00431220(iVar9,uVar8,iVar4);
        if (cVar3 == '\0') {
          bVar11 = false;
          iVar9 = 0;
          while (bVar11) {
            iVar6 = *(int *)(iVar9 + 8);
            FUN_00796cd8(iVar9);
            bVar11 = iVar6 != 0;
            iVar9 = iVar6;
          }
          iVar9 = 0;
        }
        else {
          cVar3 = FUN_00431d90(*(undefined4 *)(param_1 + 10));
          if (cVar3 == '\0') {
            bVar11 = false;
            iVar6 = 0;
            while (bVar11) {
              iVar4 = *(int *)(iVar6 + 8);
              FUN_00796cd8(iVar6);
              bVar11 = iVar4 != 0;
              iVar6 = iVar4;
            }
          }
          else {
            bVar11 = false;
            iVar9 = 0;
            while (bVar11) {
              iVar6 = *(int *)(iVar9 + 8);
              FUN_00796cd8(iVar9);
              bVar11 = iVar6 != 0;
              iVar9 = iVar6;
            }
            iVar9 = 0;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return iVar9;
}


