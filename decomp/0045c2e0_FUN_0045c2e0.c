// FUN_0045c2e0 @ 45c2e0 size=355

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c2e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bbdf6;
  piVar1 = *(int **)(*(int *)(param_1 + 0x294) + 4);
  ppvVar4 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar5 = (**(code **)(*piVar2 + 0x28))();
    ppvVar4 = ExceptionList;
    if (cVar5 != '\0') {
      puVar6 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar7 = operator_new(0x1a);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar7[4] = 0;
          *(undefined4 *)(puVar7 + 5) = 0;
          puVar7[7] = 0;
          *(undefined4 *)(puVar7 + 8) = 0;
          puVar7[10] = 0;
          *(undefined4 *)(puVar7 + 0xb) = 0;
        }
        puVar6[1] = puVar7;
        *(undefined1 *)(puVar6 + 2) = 0;
        *(undefined1 *)((int)puVar6 + 9) = 1;
        *puVar6 = &PTR_FUN_007e5f00;
        *(undefined1 *)((int)puVar6 + 10) = 0;
        *puVar7 = 0xea;
        iVar3 = puVar6[1];
        uStack_14 = uStack_14 & 0xff000000;
        *(undefined4 *)(iVar3 + 8) = _DAT_0088f24c;
        *(undefined2 *)(iVar3 + 0xc) = DAT_0088f24e._2_2_;
        iVar3 = puVar6[1];
        *(uint *)(iVar3 + 2) = uStack_14;
        *(undefined2 *)(iVar3 + 6) = 0;
        iVar3 = puVar6[1];
        *puVar6 = &PTR_FUN_007e5ee0;
        *(int *)(iVar3 + 0xe) = piVar2[6];
        *(short *)(iVar3 + 0x12) = (short)piVar2[7];
        iVar3 = puVar6[1];
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0x18);
        *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(param_1 + 0x1c);
      }
      uStack_4 = 0xffffffff;
      FUN_00565bf0(puVar6);
      ppvVar4 = ExceptionList;
    }
  }
  ExceptionList = local_c;
  return;
}


