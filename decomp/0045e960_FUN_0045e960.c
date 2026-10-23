// FUN_0045e960 @ 45e960 size=407

void __thiscall FUN_0045e960(int param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc206;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00428ee0(&param_2);
  iVar1 = (int)param_4;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  if (*(int *)(iVar3 + 0x13c) < *(int *)(&DAT_00d7c830 + *(int *)(iVar3 + 0x130) * 4)) {
    iVar4 = 0;
    piVar8 = (int *)(iVar3 + 0x88);
    do {
      if (*piVar8 == *(int *)((int)param_4 + 0x88)) {
        ExceptionList = local_c;
        return;
      }
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar4 < 5);
    cVar2 = FUN_004a4340(*(int *)((int)param_4 + 0x88),*(int *)(iVar3 + 0x130));
    if (cVar2 != '\0') {
      puVar5 = operator_new(0xc);
      local_4 = 0;
      param_4 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x20);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar6 == (undefined2 *)0x0) {
          puVar6 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d6c0();
          puVar6[7] = 0;
          *(undefined4 *)(puVar6 + 8) = 0;
          puVar6[10] = 0;
          *(undefined4 *)(puVar6 + 0xb) = 0;
        }
        puVar5[1] = puVar6;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined1 *)((int)puVar5 + 9) = 1;
        *puVar5 = &PTR_FUN_007e6160;
        *(undefined1 *)((int)puVar5 + 10) = 0;
        *puVar6 = 0x70;
        iVar3 = puVar5[1];
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
        *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_1 + 8);
        puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar3 = puVar5[1];
        *(undefined4 *)(iVar3 + 2) = *puVar7;
        *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
        iVar3 = puVar5[1];
        *puVar5 = &PTR_FUN_007e6140;
        *(undefined4 *)(iVar3 + 0xe) = param_2;
        *(undefined2 *)(iVar3 + 0x12) = param_3;
        iVar3 = puVar5[1];
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar1 + 0x10);
        *(undefined2 *)(puVar5[1] + 0x1a) = 0;
        *(undefined4 *)(puVar5[1] + 0x1c) = 0xffffffff;
      }
      local_4 = 0xffffffff;
      FUN_00565bc0(puVar5);
    }
  }
  ExceptionList = local_c;
  return;
}


