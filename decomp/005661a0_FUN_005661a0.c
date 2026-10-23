// FUN_005661a0 @ 5661a0 size=123

undefined4 __thiscall FUN_005661a0(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = (**(code **)(*param_2 + 4))();
  uVar6 = uVar1 + 2;
  uVar2 = (**(code **)(*param_2 + 4))();
  uVar5 = (uint)uVar2;
  uVar3 = (uVar1 + 5 & 0xfffffffc) + 4;
  if (uVar3 < uVar6) {
    uVar3 = uVar6;
  }
  if (uVar3 < uVar5) {
    uVar3 = uVar5;
  }
  puVar4 = operator_new(uVar3);
  *(undefined2 **)(param_1 + 10) = puVar4;
  *puVar4 = (short)uVar6;
  puVar7 = (undefined4 *)param_2[1];
  puVar8 = (undefined4 *)(*(int *)(param_1 + 10) + 2);
  for (uVar3 = (uint)(uVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 10) + 2;
  return CONCAT31((uint3)(byte)(uVar2 >> 8),1);
}


