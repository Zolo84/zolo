// FUN_00437a20 @ 437a20 size=381

void __thiscall FUN_00437a20(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  void **ppvVar2;
  undefined2 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba9cb;
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  while( true ) {
    ExceptionList = ppvVar2;
    if (iVar6 == 0) {
      FUN_00429c80();
      pvVar5 = operator_new(0x24c);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar6 = FUN_00415bd0(param_3);
        piVar7 = (int *)FUN_00434260(*(undefined4 *)(param_1 + 0x18),&DAT_00893770,iVar6 + -0x14,
                                     param_3);
      }
      local_4 = 0xffffffff;
      *(undefined1 *)((int)piVar7 + 0x2e) = 0;
      (**(code **)(*piVar7 + 0x34))();
      if (param_4 == '\0') {
        *(undefined1 *)(piVar7 + 0x92) = 0;
      }
      else {
        *(undefined1 *)(piVar7 + 0x92) = 1;
      }
      if (*(int *)(param_1 + 0x3a) == 1) {
        uVar10 = 0xa0;
        uVar9 = 0xa0;
      }
      else {
        uVar10 = 0;
        uVar9 = 0;
      }
      uVar3 = FUN_00584270(uVar9,uVar10);
      *(undefined2 *)(piVar7 + 3) = uVar3;
      iVar6 = (**(code **)(**(int **)(param_1 + 0xc) + 4))();
      if (iVar6 == 0) {
        *(int **)(param_1 + 0x14) = piVar7;
      }
      iVar6 = *(int *)(param_1 + 0xc);
      iVar4 = *(int *)(iVar6 + 8);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = piVar7;
        puVar8[1] = iVar4;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar1 = *(int *)(iVar6 + 0xc);
      *(undefined4 **)(iVar6 + 8) = puVar8;
      *(int *)(iVar6 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(iVar6 + 4) = puVar8;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar8;
      }
      (**(code **)(**(int **)(param_1 + 0xc) + 0x38))();
      ExceptionList = local_c;
      return;
    }
    iVar4 = FUN_007a8730();
    if (iVar4 == 0) break;
    iVar6 = *(int *)(iVar6 + 8);
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_c;
  return;
}


