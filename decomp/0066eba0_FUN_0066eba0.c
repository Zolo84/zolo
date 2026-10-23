// FUN_0066eba0 @ 66eba0 size=206

void __thiscall
FUN_0066eba0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar3 = operator_new(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = *param_3;
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_3 + 1);
    *(undefined4 *)((int)puVar3 + 10) = *param_4;
    *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)(param_4 + 1);
    puVar3[4] = param_5;
    puVar3[5] = param_6;
  }
  iVar5 = *(int *)(param_1 + 0x30db4);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = puVar3;
    puVar4[1] = iVar5;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30db8);
  *(undefined4 **)(param_1 + 0x30db4) = puVar4;
  *(int *)(param_1 + 0x30db8) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x30db0) = puVar4;
  }
  else {
    *(undefined4 **)(iVar5 + 8) = puVar4;
  }
  iVar5 = (**(code **)(*(int *)(param_1 + 0x30dac) + 4))();
  if (0x14 < iVar5) {
    uVar2 = **(undefined4 **)(param_1 + 0x30db0);
    (**(code **)(*(int *)(param_1 + 0x30dac) + 0x18))(uVar2);
    FUN_00796cd8(uVar2);
  }
  return;
}


