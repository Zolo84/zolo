// FUN_0056e470 @ 56e470 size=143

undefined4 * __thiscall FUN_0056e470(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c7cc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = (**(code **)(*param_2 + 4))();
  puVar3 = operator_new(uVar2 & 0xffff);
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e6160;
  *(undefined1 *)((int)param_1 + 10) = 1;
  puVar4 = (undefined4 *)param_2[1];
  uStack_4 = 0;
  uVar1 = (**(code **)(*param_2 + 4))();
  for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


