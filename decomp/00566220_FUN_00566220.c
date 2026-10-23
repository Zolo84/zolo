// FUN_00566220 @ 566220 size=69

undefined4 __thiscall FUN_00566220(int param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar5 = uVar1 + 3 & 0xfffffffc;
  puVar2 = operator_new(uVar5);
  *(undefined4 **)(param_1 + 10) = puVar2;
  for (uVar3 = uVar1 + 3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 2;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)puVar2 = (char)*param_2;
    param_2 = (ushort *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 10) + 2;
  return CONCAT31((int3)(uVar5 >> 8),1);
}


