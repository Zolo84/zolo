// FUN_00700220 @ 700220 size=658

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00700220(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined4 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db7be;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x1d4ca) != 0) && ((&DAT_00dc0fd4)[param_2] != 0)) &&
     (ExceptionList = &local_c, cVar2 = FUN_004a0780(param_2), cVar2 != '\0')) {
    param_2 = 0;
    do {
      bVar1 = false;
      iVar3 = _rand();
      iVar3 = iVar3 % *(int *)(param_1 + 0x1d4ca);
      local_14 = *(undefined2 *)(param_1 + 0x16 + iVar3 * 6);
      local_12 = *(undefined4 *)(param_1 + iVar3 * 6 + 0x18);
      iVar3 = FUN_00428460(&local_14);
      if (iVar3 == 0) {
        iVar9 = 0;
LAB_0070031e:
        bVar1 = true;
      }
      else {
        iVar9 = iVar3 + -8;
        if ((iVar9 == 0) || (*(char *)(iVar3 + 0x122c) != '\0')) goto LAB_0070031e;
        iVar4 = *(int *)(iVar3 + 0x124e);
        if (iVar5 == iVar4) {
          if (iVar4 == 0) goto LAB_007002dc;
LAB_00700309:
          *(undefined4 *)(iVar3 + 0x1c) = (&DAT_0089cad8)[iVar5];
          cVar2 = FUN_0070d430();
          if (cVar2 == '\0') goto LAB_0070031e;
        }
        else {
          if (iVar4 != 0) goto LAB_0070031e;
LAB_007002dc:
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x23a4) + 4))();
          if ((iVar4 < 1) ||
             (cVar2 = (**(code **)(*(int *)(iVar3 + 0x23a4) + 0x24))(iVar5), cVar2 != '\0'))
          goto LAB_00700309;
          bVar1 = true;
        }
      }
      param_2 = param_2 + 1;
      if (100 < param_2) {
        ExceptionList = local_c;
        return;
      }
    } while (bVar1);
    uStack_22 = (undefined2)iVar5;
    uStack_20 = (undefined2)((uint)iVar5 >> 0x10);
    uVar10 = 400;
    local_1c = *(undefined4 *)(DAT_00893530 + 0x14);
    local_18 = *(undefined2 *)(DAT_00893530 + 0x18);
    cVar2 = FUN_0044d840();
    if (cVar2 != '\0') {
      uVar10 = 0x85;
    }
    iVar5 = _rand();
    FUN_0042dc20(iVar5 % (int)uVar10 + uVar10 / 2);
    puVar6 = operator_new(0xc);
    local_4 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar5 = _rand();
      puVar7 = operator_new(0x1e);
      local_4._0_1_ = 1;
      if (puVar7 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
        puVar7[7] = 0;
        *(undefined4 *)(puVar7 + 8) = 0;
        puVar7[10] = 0;
        *(undefined4 *)(puVar7 + 0xb) = 0;
      }
      puVar6[1] = puVar7;
      *(undefined1 *)(puVar6 + 2) = 0;
      *(undefined1 *)((int)puVar6 + 9) = 1;
      *puVar6 = &PTR_FUN_007e52f0;
      *(undefined1 *)((int)puVar6 + 10) = 0;
      *puVar7 = 0xa0;
      iVar3 = puVar6[1];
      *(undefined4 *)(iVar3 + 8) = _DAT_0088f228;
      *(undefined2 *)(iVar3 + 0xc) = DAT_0088f22c;
      local_4 = CONCAT31(local_4._1_3_,2);
      puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar3 = puVar6[1];
      *(undefined4 *)(iVar3 + 2) = *puVar8;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar8 + 1);
      iVar3 = puVar6[1];
      *puVar6 = &PTR_FUN_007e52d0;
      *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar9 + 0xc);
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar9 + 0x10);
      iVar3 = puVar6[1];
      *(uint *)(iVar3 + 0x14) = CONCAT22(uStack_22,3);
      *(undefined2 *)(iVar3 + 0x18) = uStack_20;
      *(int *)(puVar6[1] + 0x1a) = iVar5;
    }
    local_4 = 0xffffffff;
    FUN_00565af0(puVar6,&local_1c);
  }
  ExceptionList = local_c;
  return;
}


