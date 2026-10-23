// FUN_004beb40 @ 4beb40 size=149

void __thiscall FUN_004beb40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  piVar3 = *(int **)(iVar5 + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar5 = (**(code **)(*(int *)(*piVar3 + 0x22) + 4))();
    param_1[1] = param_1[1] + iVar5;
    FUN_0051c480();
    iVar5 = FUN_0050a580();
    piVar3 = piVar1;
    if (param_1[2] < iVar5) {
      param_1[2] = iVar5;
    }
  }
  if (param_1[2] < param_1[1]) {
    *(undefined1 *)(param_1[0x10] + 0x29) = 1;
  }
  param_1[1] = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  puVar4 = *(undefined4 **)(iVar5 + 4);
  while (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar4[2];
    (**(code **)(*param_1 + 4))(*puVar4,param_2);
    puVar4 = puVar2;
  }
  return;
}


