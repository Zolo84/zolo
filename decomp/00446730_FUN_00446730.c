// FUN_00446730 @ 446730 size=348

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00446730(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb96e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00428460(param_2);
  if ((iVar2 != 0) && (iVar2 != 8)) {
    puVar3 = operator_new(0xc);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar2 = _rand();
      puVar4 = operator_new(0x1e);
      local_4._0_1_ = 1;
      if (puVar4 == (undefined2 *)0x0) {
        puVar4 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
        puVar4[7] = 0;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
      }
      puVar3[1] = puVar4;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 9) = 1;
      *puVar3 = &PTR_FUN_007e52f0;
      *(undefined1 *)((int)puVar3 + 10) = 0;
      *puVar4 = 0xa0;
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 8) = _DAT_0088f228;
      local_4 = CONCAT31(local_4._1_3_,2);
      *(undefined2 *)(iVar1 + 0xc) = DAT_0088f22c;
      puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 2) = *puVar5;
      *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar5 + 1);
      iVar1 = puVar3[1];
      *puVar3 = &PTR_FUN_007e52d0;
      *(undefined4 *)(iVar1 + 0xe) = *param_2;
      *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 + 1);
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 4);
      *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_1 + 8);
      *(int *)(puVar3[1] + 0x1a) = iVar2;
    }
    local_4 = 0xffffffff;
    FUN_00565ca0(puVar3);
  }
  ExceptionList = local_c;
  return;
}


