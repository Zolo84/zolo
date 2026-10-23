// FUN_005b6160 @ 5b6160 size=306

void FUN_005b6160(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cbf66;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0xc);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x62);
      puVar4 = operator_new(0x1a);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (puVar4 == (undefined2 *)0x0) {
        puVar5 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
        puVar4[7] = 0;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
        puVar5 = puVar4;
      }
      puVar3[1] = puVar5;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 9) = 1;
      *puVar3 = &PTR_FUN_007e5e3c;
      *(undefined1 *)((int)puVar3 + 10) = 0;
      *puVar5 = 0x8e;
      iVar2 = puVar3[1];
      local_14 = (uint)puVar4 & 0xff000000;
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 4);
      *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar1 + 8);
      iVar1 = puVar3[1];
      *(uint *)(iVar1 + 2) = local_14;
      *(undefined2 *)(iVar1 + 6) = 0;
      iVar1 = puVar3[1];
      *puVar3 = &PTR_FUN_007e5310;
      *(undefined4 *)(iVar1 + 0xe) = param_2;
      *(undefined2 *)(iVar1 + 0x12) = param_3;
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_1 + 0x14);
    }
    local_4 = 0xffffffff;
    FUN_00565bc0(puVar3);
  }
  ExceptionList = local_c;
  return;
}


