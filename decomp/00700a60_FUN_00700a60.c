// FUN_00700a60 @ 700a60 size=371

void FUN_00700a60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db836;
  local_c = ExceptionList;
  local_14 = 7;
  uStack_12 = (undefined2)param_2;
  uStack_10 = (undefined2)((uint)param_2 >> 0x10);
  ExceptionList = &local_c;
  iVar3 = FUN_00428460(&local_14);
  if (((iVar3 != 0) && (iVar3 != 8)) && (iVar1 = (&DAT_0089cad8)[param_1], iVar1 != 0)) {
    *(int *)(iVar3 + 0x1c) = iVar1;
    puVar4 = operator_new(0xc);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar3 = _rand();
      puVar5 = operator_new(0x1e);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (puVar5 == (undefined2 *)0x0) {
        puVar5 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 5) = 0;
        puVar5[7] = 0;
        *(undefined4 *)(puVar5 + 8) = 0;
        puVar5[10] = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
      }
      puVar4[1] = puVar5;
      *(undefined1 *)(puVar4 + 2) = 0;
      *(undefined1 *)((int)puVar4 + 9) = 1;
      *puVar4 = &PTR_FUN_007e52f0;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *puVar5 = 0xa0;
      iVar2 = puVar4[1];
      *(uint *)(iVar2 + 8) = CONCAT22(uStack_12,local_14);
      *(undefined2 *)(iVar2 + 0xc) = uStack_10;
      puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar2 = puVar4[1];
      *(undefined4 *)(iVar2 + 2) = *puVar6;
      *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar6 + 1);
      iVar2 = puVar4[1];
      *puVar4 = &PTR_FUN_007e52d0;
      *(uint *)(iVar2 + 0xe) = CONCAT22(uStack_12,local_14);
      *(undefined2 *)(iVar2 + 0x12) = uStack_10;
      iVar2 = puVar4[1];
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 4);
      *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(iVar1 + 8);
      *(int *)(puVar4[1] + 0x1a) = iVar3;
    }
    local_4 = 0xffffffff;
    FUN_00565bc0(puVar4);
  }
  ExceptionList = local_c;
  return;
}


