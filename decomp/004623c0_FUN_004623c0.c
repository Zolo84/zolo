// FUN_004623c0 @ 4623c0 size=440

void __thiscall FUN_004623c0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar6 = DAT_00893530;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc7fe;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)(param_1 + 0x2b36 + param_2 * 6);
  ExceptionList = &local_c;
  *puVar3 = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(iVar6 + 0x18);
  piVar2 = DAT_00d615f6;
  if ((&DAT_0089cad8)[param_2] != 0) {
    bVar7 = false;
    piVar5 = DAT_00d615f6;
    if (DAT_00d615f6 != (int *)0x0) {
      do {
        piVar1 = piVar5 + 2;
        iVar6 = *piVar5;
        if (*(int *)(iVar6 + 0x1e) == 2) {
          if ((*(int *)(iVar6 + 0x16) == *(int *)(param_1 + 6)) &&
             (*(int *)(iVar6 + 0x1a) == param_2)) {
            bVar7 = true;
          }
          if ((*(int *)(iVar6 + 0x16) == param_2) &&
             (*(int *)(iVar6 + 0x1a) == *(int *)(param_1 + 6))) {
            bVar7 = true;
          }
        }
        piVar5 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      if (bVar7) goto LAB_00462546;
    }
    puVar3 = operator_new(0x4c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar4 = FUN_00428eb0(local_14);
      FUN_00425b20();
      local_4._0_1_ = 1;
      FUN_00428b00();
      *(undefined ***)((int)puVar3 + 0x12) = &PTR_LAB_007e4068;
      local_4 = CONCAT31(local_4._1_3_,2);
      *(undefined2 *)((int)puVar3 + 0x26) = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      *(undefined1 *)((int)puVar3 + 0x23) = 0;
      *(undefined1 *)((int)puVar3 + 0x22) = 0;
      FUN_0042d2d0();
      *puVar3 = &PTR_FUN_007e64c0;
      puVar3[2] = &PTR_LAB_007e64ac;
      *(undefined ***)((int)puVar3 + 0x12) = &PTR_FUN_007e64a4;
      FUN_00428d60(uVar4);
      FUN_005896e0(2);
    }
    uVar4 = *(undefined4 *)(param_1 + 6);
    *(int *)((int)puVar3 + 0x1a) = param_2;
    *(undefined4 *)((int)puVar3 + 0x16) = uVar4;
    piVar5 = DAT_00d615fa;
    local_4 = 0xffffffff;
    DAT_00d615fa = operator_new(0xe);
    if (DAT_00d615fa == (int *)0x0) {
      DAT_00d615fa = (int *)0x0;
    }
    else {
      *DAT_00d615fa = (int)puVar3;
      DAT_00d615fa[1] = (int)piVar5;
      DAT_00d615fa[2] = 0;
      *(undefined1 *)(DAT_00d615fa + 3) = 0;
    }
    iVar6 = DAT_00d615fe + 1;
    bVar7 = DAT_00d615fe != 0;
    piVar2 = DAT_00d615fa;
    DAT_00d615fe = iVar6;
    if (bVar7) {
      piVar5[2] = (int)DAT_00d615fa;
      piVar2 = DAT_00d615f6;
    }
  }
LAB_00462546:
  DAT_00d615f6 = piVar2;
  *(undefined1 *)(*(int *)(param_1 + 0x12da) + param_2 * 0x2c + 0x2c) = 0;
  FUN_00586760();
  ExceptionList = local_c;
  return;
}


