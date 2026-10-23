// FUN_005b5f40 @ 5b5f40 size=304

undefined4
FUN_005b5f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 uStack_12;
  byte bStack_11;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cbf46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0050b140(&param_4);
  if (iVar1 != 0) {
    puVar2 = operator_new(0xc);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uStack_12 = (undefined1)param_1;
      bStack_11 = (byte)((uint)param_1 >> 8);
      uStack_10 = (undefined2)((uint)param_1 >> 0x10);
      puVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (puVar3 == (undefined2 *)0x0) {
        puVar3 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar3[4] = 0;
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[7] = 0;
        *(undefined4 *)(puVar3 + 8) = 0;
      }
      puVar2[1] = puVar3;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined1 *)((int)puVar2 + 9) = 1;
      *(undefined1 *)((int)puVar2 + 10) = 0;
      *puVar3 = 0x91;
      iVar1 = puVar2[1];
      *(uint *)(iVar1 + 8) = CONCAT13(bStack_11,CONCAT12(uStack_12,3));
      *(undefined2 *)(iVar1 + 0xc) = uStack_10;
      iVar1 = puVar2[1];
      *(uint *)(iVar1 + 2) = (uint)bStack_11 << 0x18;
      *(undefined2 *)(iVar1 + 6) = 0;
      iVar1 = puVar2[1];
      *puVar2 = &PTR_FUN_007e6880;
      *(undefined4 *)(iVar1 + 0xe) = param_4;
      *(undefined2 *)(iVar1 + 0x12) = param_5;
    }
    local_4 = 0xffffffff;
    FUN_00565bc0(puVar2);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}


