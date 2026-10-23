// FUN_00518ad0 @ 518ad0 size=155

void __thiscall FUN_00518ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_004e9370((short)*(undefined4 *)(param_1 + 0x212));
  iVar1 = FUN_004ece90();
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_00447250();
    FUN_00518b70(*puVar2,(short)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10));
    piVar3 = (int *)FUN_005190f0();
    (**(code **)(*piVar3 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x212) = param_2;
  FUN_004e9370((short)param_2);
  iVar1 = FUN_004ece90();
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_00447250();
    uVar4 = *puVar2;
    uVar5 = (undefined2)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10);
    FUN_00518b70(uVar4,uVar5);
    FUN_005190f0();
    FUN_004739f0(uVar4,uVar5);
  }
  return;
}


