// FUN_004e84b0 @ 4e84b0 size=45

undefined4 __fastcall FUN_004e84b0(int param_1)

{
  if (*(int *)(param_1 + 0x284) == 6) {
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x28c)) {
  case 1:
  case 5:
  case 8:
  case 0xf:
  case 0x16:
  case 0x1a:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x3b:
  case 0x3c:
  case 0x44:
  case 0x45:
  case 0x4e:
    return 1;
  default:
    return 0;
  }
}


