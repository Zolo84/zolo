// FUN_004bf180 @ 4bf180 size=117

undefined4 __fastcall FUN_004bf180(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x80) + 0x46) == 0) {
    return 0;
  }
  if ((((*(int *)(*(int *)(param_1 + 0x84) + 0x46) == 0) &&
       (iVar1 = *(int *)(param_1 + 0x74), iVar1 != 6)) && (iVar1 != 7)) && (iVar1 != 8)) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 0x28) + 4))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 0x28) + 4))();
  if (((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x74), iVar1 != 6)) &&
     ((iVar1 != 7 && (iVar1 != 8)))) {
    return 0;
  }
  return 1;
}


