// FUN_006e0290 @ 6e0290 size=343

void __fastcall FUN_006e0290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_114;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9cb9;
  local_c = ExceptionList;
  local_114 = 0;
  if (0 < *(int *)(param_1 + 0x840)) {
    puVar7 = (undefined4 *)(param_1 + 0x98);
    ExceptionList = &local_c;
    do {
      FUN_00429d20(puVar7[-3],local_10c);
      puVar4 = operator_new(0x42);
      local_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *puVar7;
        FUN_00433f00();
        local_4 = CONCAT31(local_4._1_3_,1);
        *puVar4 = &PTR_FUN_007f7d14;
        puVar4[2] = &PTR_LAB_007f7d10;
        *(undefined4 *)((int)puVar4 + 0x36) = uVar5;
        if (&stack0x00000000 != (undefined1 *)0x10c) {
          uVar5 = FUN_007a8d6d(local_10c);
          *(undefined4 *)((int)puVar4 + 0x3a) = uVar5;
        }
        *(char **)((int)puVar4 + 0x3e) = s________0086d4a4;
        uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        *(undefined4 *)((int)puVar4 + 0x2e) = uVar5;
      }
      *(undefined4 *)((int)puVar4 + 0x16) = *(undefined4 *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x5e);
      local_4 = 0xffffffff;
      iVar2 = *(int *)(iVar1 + 8);
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = puVar4;
        puVar6[1] = iVar2;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      *(undefined4 **)(iVar1 + 8) = puVar6;
      *(int *)(iVar1 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar1 + 4) = puVar6;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar6;
      }
      local_114 = local_114 + 1;
      puVar7 = (undefined4 *)((int)puVar7 + 0x3e);
    } while (local_114 < *(int *)(param_1 + 0x840));
  }
  ExceptionList = local_c;
  return;
}


