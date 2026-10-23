// FUN_006aaba0 @ 6aaba0 size=651

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006aaba0(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  uint uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5b96;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x28))();
  if (param_1[3] == *(int *)(param_2 + 0x12)) {
    uVar5 = 1;
  }
  else {
    cVar4 = FUN_0051a4c0();
    if (cVar4 == '\0') {
      uVar5 = 3;
    }
    else {
      uVar5 = FUN_0051b230();
      cVar4 = FUN_00431220(param_1,uVar5,param_2);
      if (cVar4 == '\0') {
        uVar5 = 2;
      }
      else {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          iVar9 = param_3[2];
          if (iVar9 != 0) {
            if ((char)param_3[4] == '\0') {
              iVar1 = *(int *)(iVar9 + 4);
              param_3[2] = iVar1;
              if (iVar1 == 0) {
                param_3[1] = 0;
              }
              else {
                *(undefined4 *)(iVar1 + 8) = 0;
              }
              FUN_00796cd8(iVar9);
              param_3[3] = param_3[3] + -1;
            }
            else {
              *(undefined1 *)(iVar9 + 0xc) = 1;
            }
          }
        }
        cVar4 = (**(code **)(*param_3 + 8))();
        if (cVar4 == '\0') {
          uStack_24 = (undefined2)param_1[6];
          param_2._0_1_ = '\x01';
          uStack_22 = (undefined2)*(undefined4 *)((int)param_1 + 0x1a);
          uStack_20 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 0x1a) >> 0x10);
          piVar3 = (int *)param_3[1];
          while (piVar3 != (int *)0x0) {
            piVar2 = (int *)piVar3[2];
            iVar9 = *piVar3;
            if ((char)param_2 != '\0') {
              if ((param_1[0x99] != 1) && (param_1[0x99] != 0)) {
                FUN_0050bca0(param_1);
              }
              FUN_0050bd90(1,*(undefined4 *)(iVar9 + 0x12));
            }
            puVar6 = operator_new(0xc);
            iStack_4 = 0;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              uVar5 = *(undefined4 *)(iVar9 + 0x12);
              uStack_1c = uStack_1c & 0xff000000;
              pvVar7 = operator_new(0x1e);
              iStack_4._0_1_ = 1;
              if (pvVar7 == (void *)0x0) {
                pvVar7 = (void *)0x0;
              }
              else {
                FUN_0042d6c0();
                *(undefined2 *)((int)pvVar7 + 0xe) = 0;
                *(undefined4 *)((int)pvVar7 + 0x10) = 0;
                FUN_0042d2d0();
              }
              iStack_4 = (uint)iStack_4._1_3_ << 8;
              FUN_0042d320(pvVar7);
              *puVar6 = &PTR_FUN_007e77e4;
              *(undefined1 *)((int)puVar6 + 10) = 0;
              *(undefined2 *)puVar6[1] = 0x34;
              iVar9 = puVar6[1];
              *(undefined4 *)(iVar9 + 8) = _DAT_0088f24c;
              *(undefined2 *)(iVar9 + 0xc) = DAT_0088f24e._2_2_;
              puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
              iVar9 = puVar6[1];
              *(undefined4 *)(iVar9 + 2) = *puVar8;
              param_4._0_2_ = (undefined2)uVar5;
              *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar8 + 1);
              iVar9 = puVar6[1];
              *puVar6 = &PTR_FUN_007e7804;
              *(undefined2 *)(iVar9 + 0x14) = (undefined2)param_4;
              *(uint *)(iVar9 + 0xe) = CONCAT22(uStack_22,uStack_24);
              *(undefined2 *)(iVar9 + 0x12) = uStack_20;
              *(char *)(iVar9 + 0x16) = (char)param_2;
              *(uint *)(iVar9 + 0x18) = uStack_1c;
              *(undefined2 *)(iVar9 + 0x1c) = 0;
            }
            iStack_4 = 0xffffffff;
            FUN_00565c30(puVar6);
            iVar9 = FUN_00428ee0(&uStack_24);
            if ((iVar9 == 0) || (iVar9 == 0x14)) break;
            param_2._0_1_ = '\0';
            piVar3 = piVar2;
          }
          uVar5 = 0;
        }
        else {
          FUN_006ab6d0(param_1);
          uVar5 = 1;
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar5;
}


