// FUN_00437910 @ 437910 size=266

void __thiscall FUN_00437910(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba9ab;
  piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  while( true ) {
    ExceptionList = ppvVar3;
    if (piVar7 == (int *)0x0) {
      FUN_00429c80(param_2,&DAT_008937d4);
      pvVar5 = operator_new(0x23e);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar9 = 1;
        uVar8 = 0;
        uVar6 = FUN_00584270(0x80,0x80,0x80);
        iVar4 = FUN_00415bd0(uVar6,uVar8,uVar9);
        iVar4 = FUN_00433f90(*(undefined4 *)(param_1 + 0x18),&DAT_008937d4,iVar4 + -0x14,uVar6,uVar8
                             ,uVar9);
      }
      *(undefined1 *)(iVar4 + 0x2e) = 0;
      iVar1 = *(int *)(param_1 + 0xc);
      local_4 = 0xffffffff;
      iVar2 = *(int *)(iVar1 + 8);
      piVar7 = operator_new(0xe);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = iVar4;
        piVar7[1] = iVar2;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(int **)(iVar1 + 8) = piVar7;
      *(int *)(iVar1 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(int **)(iVar1 + 4) = piVar7;
      }
      else {
        *(int **)(iVar2 + 8) = piVar7;
      }
      ExceptionList = local_c;
      return;
    }
    iVar4 = FUN_007a8730(*piVar7 + 0x34,param_2);
    if (iVar4 == 0) break;
    piVar7 = (int *)piVar7[2];
    ppvVar3 = ExceptionList;
  }
  ExceptionList = local_c;
  return;
}


