// FUN_004e8a90 @ 4e8a90 size=29

uint __fastcall FUN_004e8a90(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x3d4) != 0) &&
     (uVar1 = *(uint *)(*(int *)(param_1 + 0x3d4) + 0x117de), uVar1 == *(uint *)(param_1 + 0x12))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


