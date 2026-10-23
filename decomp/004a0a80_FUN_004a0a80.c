// FUN_004a0a80 @ 4a0a80 size=32

int __fastcall FUN_004a0a80(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)(*(int *)(param_1 + 6) + -1) >> 8);
  switch(*(int *)(param_1 + 6)) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 0xb:
  case 0x31:
    return CONCAT31(uVar1,1);
  default:
    return (uint)uVar1 << 8;
  }
}


