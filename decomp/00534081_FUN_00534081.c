// FUN_00534081 @ 534081 size=123

undefined4 FUN_00534081(undefined1 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x21:
  case 0x23:
  case 0x3b:
    uVar1 = 9;
    break;
  case 0x22:
    uVar1 = 2;
    break;
  case 0x28:
    uVar1 = 5;
    break;
  case 0x29:
    uVar1 = 6;
    break;
  case 0x2c:
    uVar1 = 8;
    break;
  case 0x3d:
    uVar1 = 1;
    break;
  case 0x7b:
    uVar1 = 3;
    break;
  case 0x7d:
    uVar1 = 4;
    break;
  case 0xa4:
    uVar1 = 10;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


