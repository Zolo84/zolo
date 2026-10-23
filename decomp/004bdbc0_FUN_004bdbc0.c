// FUN_004bdbc0 @ 4bdbc0 size=522

void __thiscall FUN_004bdbc0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007beca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b0490(param_2);
  puVar4 = operator_new(0xc);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
    uVar1 = *(undefined1 *)(param_1 + 0x4e);
    puVar6 = (undefined4 *)(iVar2 + 0xc);
    FUN_004c07c0(0x20,puVar6);
    iVar3 = puVar4[1];
    *puVar4 = &PTR_FUN_007e7660;
    *(undefined4 *)(iVar3 + 0xe) = *puVar6;
    *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x10);
    iVar2 = puVar4[1];
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined1 *)(puVar4[1] + 0x1a) = uVar1;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar4);
  if ((((*(int *)(param_2 + 0x176) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x74), iVar2 != 4)) && (iVar2 != 5)) &&
     (((iVar2 != 6 && (iVar2 != 7)) && (iVar2 != 8)))) {
    puVar4 = operator_new(0xc);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0x4e);
      iVar2 = *(int *)(param_2 + 0x176);
      puVar5 = operator_new(0x1c);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (puVar5 == (undefined2 *)0x0) {
        puVar5 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
        puVar5[7] = 0;
        *(undefined4 *)(puVar5 + 8) = 0;
        puVar5[10] = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
      }
      puVar4[1] = puVar5;
      *(undefined1 *)(puVar4 + 2) = 0;
      *(undefined1 *)((int)puVar4 + 9) = 1;
      *puVar4 = &PTR_FUN_007e7680;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *puVar5 = 0x20;
      iVar3 = puVar4[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar2 + 0x10);
      puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar3 = puVar4[1];
      *(undefined4 *)(iVar3 + 2) = *puVar6;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar6 + 1);
      iVar3 = puVar4[1];
      *puVar4 = &PTR_FUN_007e7660;
      *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x10);
      iVar2 = puVar4[1];
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
      *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(param_2 + 0x1c);
      *(undefined1 *)(puVar4[1] + 0x1a) = uVar1;
    }
    local_4 = 0xffffffff;
    FUN_00565bc0(puVar4);
  }
  ExceptionList = local_c;
  return;
}


