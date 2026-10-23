// FUN_00414770 @ 414770 size=122

void __thiscall FUN_00414770(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar3 = operator_new(10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = FUN_007a8d6d(param_2);
    puVar3[1] = uVar4;
  }
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = param_3;
  iVar1 = *(int *)(param_1 + 0x1a);
  puVar5 = operator_new(0xe);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = puVar3;
    puVar5[1] = iVar1;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1e);
  *(undefined4 **)(param_1 + 0x1a) = puVar5;
  *(int *)(param_1 + 0x1e) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar5;
    return;
  }
  *(undefined4 **)(param_1 + 0x16) = puVar5;
  return;
}


