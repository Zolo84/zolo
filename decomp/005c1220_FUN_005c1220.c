// FUN_005c1220 @ 5c1220 size=94

undefined4 __thiscall FUN_005c1220(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a);
  if (0 < iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == param_2);
  }
  if (iVar1 < 0) {
    iVar1 = FUN_004e9370(param_2);
    return CONCAT31((int3)((uint)*(int *)(iVar1 + 0x28c) >> 8),
                    *(int *)(param_1 + 0x42) == *(int *)(iVar1 + 0x28c));
  }
  iVar1 = FUN_004e9370(param_2);
  return CONCAT31((int3)((uint)*(int *)(iVar1 + 0x288) >> 8),
                  *(int *)(param_1 + 0x3e) == *(int *)(iVar1 + 0x288));
}


