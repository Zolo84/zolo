// FUN_004b9440 @ 4b9440 size=96

void __thiscall FUN_004b9440(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x80) + 0x28);
  cVar3 = (**(code **)(*piVar1 + 0x24))(param_2);
  if (cVar3 != '\0') {
    (**(code **)(*piVar1 + 0x18))(param_2);
    FUN_00459f50(param_2);
  }
  iVar2 = *(int *)(param_1 + 0x84);
  cVar3 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x24))(param_2);
  if (cVar3 != '\0') {
    (**(code **)(*(int *)(iVar2 + 0x28) + 0x18))(param_2);
    FUN_00459f50(param_2);
  }
  return;
}


