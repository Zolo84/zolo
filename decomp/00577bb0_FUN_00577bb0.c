// FUN_00577bb0 @ 577bb0 size=77

void __thiscall FUN_00577bb0(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = *(int *)(param_2 + 4);
    if (0 < (int)*(char *)(iVar1 + 3) +
            ((int)*(char *)(iVar1 + 4) + *(short *)(iVar1 + 6) * 0xc) * 0x1e) {
      FUN_00578d60(param_2);
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(param_2);
  return;
}


