// FUN_0045cee0 @ 45cee0 size=499

void __thiscall
FUN_0045cee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 in_stack_00000034;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbf16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 6);
    pvVar3 = operator_new(0xe8);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00466440();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042d320(uVar4);
    *puVar2 = &PTR_FUN_007e6000;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *(undefined2 *)puVar2[1] = 0x89;
    iVar6 = puVar2[1];
    *(undefined4 *)(iVar6 + 8) = DAT_0088f2a4;
    *(undefined2 *)(iVar6 + 0xc) = DAT_0088f2a8;
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar6 = puVar2[1];
    *(undefined4 *)(iVar6 + 2) = *puVar5;
    *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar5 + 1);
    *puVar2 = &PTR_FUN_007e5fe0;
    *(undefined4 *)(puVar2[1] + 0x16) = param_2;
    *(undefined4 *)(puVar2[1] + 0x1a) = uVar1;
    *(undefined4 *)(puVar2[1] + 0xe) = 0x12;
    *(undefined4 *)(puVar2[1] + 0x12) = 1;
    *(undefined4 *)(puVar2[1] + 200) = param_4;
    *(undefined4 *)(puVar2[1] + 0xcc) = param_5;
    *(undefined4 *)(puVar2[1] + 0xd0) = param_6;
    *(undefined4 *)(puVar2[1] + 0xd4) = param_7;
    *(undefined4 *)(puVar2[1] + 0xd8) = param_8;
    *(undefined4 *)(puVar2[1] + 0xdc) = param_9;
    *(undefined1 *)(puVar2[1] + 0xe0) = in_stack_00000034;
    *(undefined1 *)(puVar2[1] + 0xe1) = in_stack_00000034;
    iVar6 = 0x28;
    do {
      *(undefined4 *)(iVar6 + puVar2[1]) = *(undefined4 *)((int)&param_4 + iVar6 + 2);
      *(undefined4 *)(iVar6 + 0x14 + puVar2[1]) = *(undefined4 *)((int)&param_9 + iVar6 + 2);
      *(undefined4 *)(iVar6 + 0x28 + puVar2[1]) = *(undefined4 *)(&stack0x00000036 + iVar6);
      *(undefined4 *)(iVar6 + 0x3c + puVar2[1]) = *(undefined4 *)(&stack0x0000004a + iVar6);
      *(undefined4 *)(iVar6 + 0x50 + puVar2[1]) = *(undefined4 *)(&stack0x0000005e + iVar6);
      *(undefined4 *)(iVar6 + 100 + puVar2[1]) = *(undefined4 *)(&stack0x00000072 + iVar6);
      *(undefined4 *)(iVar6 + 0x78 + puVar2[1]) = *(undefined4 *)(&stack0x00000086 + iVar6);
      *(undefined4 *)(iVar6 + 0x8c + puVar2[1]) = *(undefined4 *)(&stack0x0000009a + iVar6);
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x3c);
    *(undefined4 *)(puVar2[1] + 0xe2) = 0;
    *(undefined1 *)(puVar2[1] + 0xe6) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565bf0(puVar2);
  ExceptionList = local_c;
  return;
}


