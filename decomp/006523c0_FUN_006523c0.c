// FUN_006523c0 @ 6523c0 size=32

int __fastcall FUN_006523c0(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)*(undefined4 *)(param_1 + 0x21e62) >> 8);
  switch(*(undefined4 *)(param_1 + 0x21e62)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    return CONCAT31(uVar1,1);
  default:
    return (uint)uVar1 << 8;
  }
}


