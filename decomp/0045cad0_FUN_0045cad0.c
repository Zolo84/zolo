// FUN_0045cad0 @ 45cad0 size=500

void __thiscall
FUN_0045cad0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 in_stack_00000034;
  undefined4 in_stack_000000dc;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbed6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 6);
    uVar2 = *(undefined4 *)(param_2 + 6);
    pvVar4 = operator_new(0xe8);
    local_4._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00466440();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042d320(uVar5);
    *puVar3 = &PTR_FUN_007e6000;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *(undefined2 *)puVar3[1] = 0x89;
    iVar7 = puVar3[1];
    *(undefined4 *)(iVar7 + 8) = DAT_0088f2a4;
    *(undefined2 *)(iVar7 + 0xc) = DAT_0088f2a8;
    puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar7 = puVar3[1];
    *(undefined4 *)(iVar7 + 2) = *puVar6;
    *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar6 + 1);
    *puVar3 = &PTR_FUN_007e5fe0;
    *(undefined4 *)(puVar3[1] + 0x16) = uVar1;
    *(undefined4 *)(puVar3[1] + 0x1a) = uVar2;
    *(undefined4 *)(puVar3[1] + 0xe) = in_stack_000000dc;
    *(undefined4 *)(puVar3[1] + 0x12) = 0;
    *(undefined4 *)(puVar3[1] + 200) = param_4;
    *(undefined4 *)(puVar3[1] + 0xcc) = param_5;
    *(undefined4 *)(puVar3[1] + 0xd0) = param_6;
    *(undefined4 *)(puVar3[1] + 0xd4) = param_7;
    *(undefined4 *)(puVar3[1] + 0xd8) = param_8;
    *(undefined4 *)(puVar3[1] + 0xdc) = param_9;
    *(undefined1 *)(puVar3[1] + 0xe0) = in_stack_00000034;
    *(undefined1 *)(puVar3[1] + 0xe1) = in_stack_00000034;
    iVar7 = 0x28;
    do {
      *(undefined4 *)(iVar7 + puVar3[1]) = *(undefined4 *)((int)&param_4 + iVar7 + 2);
      *(undefined4 *)(iVar7 + 0x14 + puVar3[1]) = *(undefined4 *)((int)&param_9 + iVar7 + 2);
      *(undefined4 *)(iVar7 + 0x28 + puVar3[1]) = *(undefined4 *)(&stack0x00000036 + iVar7);
      *(undefined4 *)(iVar7 + 0x3c + puVar3[1]) = *(undefined4 *)(&stack0x0000004a + iVar7);
      *(undefined4 *)(iVar7 + 0x50 + puVar3[1]) = *(undefined4 *)(&stack0x0000005e + iVar7);
      *(undefined4 *)(iVar7 + 100 + puVar3[1]) = *(undefined4 *)(&stack0x00000072 + iVar7);
      *(undefined4 *)(iVar7 + 0x78 + puVar3[1]) = *(undefined4 *)(&stack0x00000086 + iVar7);
      *(undefined4 *)(iVar7 + 0x8c + puVar3[1]) = *(undefined4 *)(&stack0x0000009a + iVar7);
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x3c);
    *(undefined4 *)(puVar3[1] + 0xe2) = 0;
    *(undefined1 *)(puVar3[1] + 0xe6) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565bf0(puVar3);
  ExceptionList = local_c;
  return;
}


