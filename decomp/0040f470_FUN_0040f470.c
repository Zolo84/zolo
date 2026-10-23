// FUN_0040f470 @ 40f470 size=148

undefined4 FUN_0040f470(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  short local_10 [8];
  
  if (*(char *)(param_1 + 0x13c) == '\0') {
    FUN_004271a0(local_10,0xe);
    if ((*(char *)(param_1 + 0x13c) == '\0') && (local_10[0] == 0x4d42)) {
      FUN_004271a0(param_2,0x28);
      if (*(char *)(param_1 + 0x13c) == '\0') {
        uVar1 = *(int *)(param_2 + 4) + 3;
        uVar2 = uVar1 & 0xfffffffc;
        if (*(short *)(param_2 + 0xe) == 1) {
          uVar2 = (int)uVar1 >> 3;
        }
        if (*(int *)(param_2 + 0x14) == 0) {
          *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 8) * uVar2;
        }
        FUN_004273c0(0);
        return 1;
      }
    }
    FUN_004273c0(0);
  }
  return 0;
}


