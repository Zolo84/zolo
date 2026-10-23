// FUN_005896e0 @ 5896e0 size=144

void __thiscall FUN_005896e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(int *)(param_1 + 0x1e) = param_2;
  iVar1 = DAT_00893530;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar1 + 0x18);
  iVar1 = DAT_00893530;
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(iVar1 + 0x18);
  if (param_2 == 2) {
    FUN_0042dd60(1);
    FUN_0042dcc0(6);
  }
  else {
    if (param_2 == 1) {
      uVar3 = 2;
    }
    else {
      uVar3 = 100;
    }
    FUN_0042dd60(uVar3);
  }
  puVar2 = (undefined4 *)(param_1 + 0x2e);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  return;
}


