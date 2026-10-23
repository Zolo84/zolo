// FUN_0041e7a0 @ 41e7a0 size=131

void FUN_0041e7a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25c);
  while (7 < iVar1) {
    *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
         (char)((uint)*(undefined4 *)(param_1 + 600) >> 0x18);
    iVar1 = *(int *)(param_1 + 0x25c) + -8;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
    *(int *)(param_1 + 0x25c) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x25c);
  *(int *)(param_1 + 0x25c) = iVar1 + param_2;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | param_3 << ((' ' - (char)iVar1) - (char)param_2 & 0x1fU);
  return;
}


