// FUN_0046d790 @ 46d790 size=396

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046d790(int param_1)

{
  int *piVar1;
  float fVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bcbbb;
  piVar1 = *(int **)(param_1 + 0x4508);
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar3, piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
    piVar1 = (int *)piVar1[2];
    ppvVar3 = ExceptionList;
    if ((*(int *)(iVar5 + 0x14a) != 0) &&
       ((iVar4 = (**(code **)(*(int *)(iVar5 + 0x11c) + 4))(), iVar4 != 0 ||
        (ppvVar3 = ExceptionList, *(int *)(iVar5 + 0x176) != 0)))) {
      FUN_0051c480();
      fVar2 = DAT_00dc1670;
      iVar5 = _rand();
      ppvVar3 = ExceptionList;
      if ((float)iVar5 * _DAT_007e68c0 < fVar2) {
        puVar6 = operator_new(0xc);
        uStack_4 = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar5 = FUN_0051c480();
          puVar7 = operator_new(0x14);
          if (puVar7 == (undefined2 *)0x0) {
            puVar7 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar7[4] = 0;
            *(undefined4 *)(puVar7 + 5) = 0;
            puVar7[7] = 0;
            *(undefined4 *)(puVar7 + 8) = 0;
          }
          puVar6[1] = puVar7;
          *(undefined1 *)(puVar6 + 2) = 0;
          *(undefined1 *)((int)puVar6 + 9) = 1;
          *puVar6 = &PTR_FUN_007e68a0;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *puVar7 = 0x91;
          iVar4 = puVar6[1];
          uStack_14 = uStack_14 & 0xff000000;
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 4);
          *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_1 + 8);
          iVar4 = puVar6[1];
          *(uint *)(iVar4 + 2) = uStack_14;
          *(undefined2 *)(iVar4 + 6) = 0;
          iVar4 = puVar6[1];
          *puVar6 = &PTR_FUN_007e6880;
          *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar5 + 0x10);
          *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar5 + 0x14);
        }
        uStack_4 = 0xffffffff;
        FUN_00565bc0(puVar6);
        ppvVar3 = ExceptionList;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


