// FUN_006abeb0 @ 6abeb0 size=845

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006abeb0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5d1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar6 = FUN_0042e9a0();
  if (cVar6 != '\0') {
    ExceptionList = local_c;
    return 1;
  }
  if (*(int *)(param_2 + 0xc) == *(int *)(param_3 + 0x12)) {
    uVar7 = (**(code **)(*param_1 + 0xdc))(param_2);
    if ((*(char *)((int)param_1 + 0xf) == '\0') && ((char)param_1[4] == '\0')) {
      FUN_006ab6d0(uVar7);
      FUN_006aa000(uVar7);
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    cVar6 = FUN_0051a4c0();
    if (cVar6 != '\0') {
      uVar7 = FUN_0051b230();
      cVar6 = FUN_00431220(param_2,uVar7,param_3);
      if (((cVar6 != '\0') &&
          (iVar8 = (**(code **)(*param_1 + 0xdc))(param_2), *(char *)((int)param_1 + 0xf) == '\0'))
         && ((char)param_1[4] == '\0')) {
        FUN_006aa000(iVar8);
        for (; param_5 != 0; param_5 = param_5 + -1) {
          iVar1 = *(int *)(param_4 + 8);
          if (iVar1 != 0) {
            if (*(char *)(param_4 + 0x10) == '\0') {
              iVar3 = *(int *)(iVar1 + 4);
              *(int *)(param_4 + 8) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)(param_4 + 4) = 0;
              }
              else {
                *(undefined4 *)(iVar3 + 8) = 0;
              }
              FUN_00796cd8(iVar1);
              *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + -1;
            }
            else {
              *(undefined1 *)(iVar1 + 0xc) = 1;
            }
          }
        }
        uVar4 = 1;
        piVar5 = *(int **)(param_4 + 4);
        while (piVar5 != (int *)0x0) {
          piVar2 = (int *)piVar5[2];
          iVar1 = *piVar5;
          puVar9 = operator_new(0xc);
          uStack_4 = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            uVar7 = *(undefined4 *)(iVar1 + 0x12);
            uStack_24 = uStack_24 & 0xff000000;
            pvVar10 = operator_new(0x1e);
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            if (pvVar10 == (void *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_006ac560();
            }
            FUN_0042d320(uVar11);
            *puVar9 = &PTR_FUN_007e77e4;
            *(undefined1 *)((int)puVar9 + 10) = 0;
            *(undefined2 *)puVar9[1] = 0x34;
            iVar3 = puVar9[1];
            *(undefined4 *)(iVar3 + 8) = _DAT_0088f24c;
            *(undefined2 *)(iVar3 + 0xc) = DAT_0088f24e._2_2_;
            puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar3 = puVar9[1];
            *(undefined4 *)(iVar3 + 2) = *puVar12;
            *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar12 + 1);
            iVar3 = puVar9[1];
            *puVar9 = &PTR_FUN_007e7804;
            *(short *)(iVar3 + 0x14) = (short)uVar7;
            *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar8 + 0x18);
            *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar8 + 0x1c);
            *(undefined1 *)(iVar3 + 0x16) = uVar4;
            *(uint *)(iVar3 + 0x18) = uStack_24;
            *(undefined2 *)(iVar3 + 0x1c) = 0;
          }
          uStack_4 = 0xffffffff;
          FUN_00565c30(puVar9);
          puVar9 = operator_new(0xc);
          uStack_4 = 2;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            uVar7 = *(undefined4 *)(iVar1 + 0x12);
            puVar13 = operator_new(0x12);
            uStack_4 = CONCAT31(uStack_4._1_3_,3);
            if (puVar13 == (undefined2 *)0x0) {
              puVar13 = (undefined2 *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            puVar9[1] = puVar13;
            *(undefined1 *)(puVar9 + 2) = 0;
            *(undefined1 *)((int)puVar9 + 9) = 1;
            *puVar9 = &PTR_FUN_007e877c;
            *(undefined1 *)((int)puVar9 + 10) = 0;
            *puVar13 = 0x85;
            iVar1 = puVar9[1];
            *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar8 + 0x18);
            *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(iVar8 + 0x1c);
            puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar1 = puVar9[1];
            *(undefined4 *)(iVar1 + 2) = *puVar12;
            *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar12 + 1);
            *puVar9 = &PTR_FUN_007e875c;
            *(undefined2 *)(puVar9[1] + 0xe) = 1;
            *(short *)(puVar9[1] + 0x10) = (short)uVar7;
          }
          uStack_4 = 0xffffffff;
          FUN_00565bc0(puVar9);
          uVar4 = 0;
          piVar5 = piVar2;
        }
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


