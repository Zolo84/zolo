// FUN_0044c1e0 @ 44c1e0 size=483

void __fastcall FUN_0044c1e0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bbbe2;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  if (0 < DAT_008776b0) {
    puVar7 = (undefined4 *)(param_1 + 0x48a0);
    piVar4 = &DAT_00dbf99a;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      *(undefined1 *)(param_1 + 0x4b5c + iVar6) = 0;
      if (*(int *)(*piVar4 + 0x18) == 0) {
        pvVar1 = operator_new(0x166);
        local_4 = 0;
        if (pvVar1 == (void *)0x0) goto LAB_0044c29c;
        uVar2 = FUN_004f6510();
      }
      else if (*(int *)(*piVar4 + 0x18) == 1) {
        pvVar1 = operator_new(0x166);
        local_4 = 1;
        if (pvVar1 == (void *)0x0) {
LAB_0044c29c:
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_004f8180();
        }
      }
      else {
        pvVar1 = operator_new(0x166);
        local_4 = 2;
        if (pvVar1 == (void *)0x0) goto LAB_0044c29c;
        uVar2 = FUN_004f9b40();
      }
      *puVar7 = uVar2;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < DAT_008776b0);
  }
  iVar6 = 0;
  if (0 < DAT_0087769c) {
    piVar5 = &DAT_00dbd1a2;
    piVar4 = (int *)(param_1 + 0x4670);
    do {
      local_4 = 0xffffffff;
      *(undefined1 *)(param_1 + 0x4ad0 + iVar6) = (&DAT_00dbebee)[iVar6];
      iVar3 = *piVar5;
      if (iVar3 < 0xc) {
        pvVar1 = operator_new(0x166);
        local_4 = 3;
        if (pvVar1 == (void *)0x0) goto LAB_0044c373;
        iVar3 = FUN_004f6510();
      }
      else if ((iVar3 < 0x15) || (iVar3 == 0x8c)) {
        pvVar1 = operator_new(0x166);
        local_4 = 4;
        if (pvVar1 == (void *)0x0) goto LAB_0044c373;
        iVar3 = FUN_004f8180();
      }
      else {
        pvVar1 = operator_new(0x166);
        local_4 = 5;
        if (pvVar1 == (void *)0x0) {
LAB_0044c373:
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_004f9b40();
        }
      }
      *piVar4 = iVar3;
      *(int *)(iVar3 + 4) = iVar6;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      *(undefined4 *)(*piVar4 + 0xca) = 0;
      *(undefined4 *)(*piVar4 + 0xce) = 0;
      *(undefined4 *)(*piVar4 + 0xc6) = 0;
      piVar4 = piVar4 + 1;
    } while (iVar6 < DAT_0087769c);
  }
  ExceptionList = local_c;
  return;
}


