// FUN_00600aa0 @ 600aa0 size=91

void __thiscall FUN_00600aa0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = *(int *)(*(int *)(param_1 + 0x86) + 4);
  if (iVar3 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + 8);
      iVar2 = FUN_005c9960();
      if (iVar2 == 0) {
        bVar1 = true;
      }
    } while (iVar3 != 0);
    if (bVar1) {
      FUN_00600d20();
    }
  }
  iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x86) + 0x12) + 4))(param_2);
  if (iVar3 == 0) {
    FUN_00415a60(param_2);
  }
  return;
}


