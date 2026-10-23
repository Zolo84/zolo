// FUN_00657690 @ 657690 size=319

undefined4 __thiscall FUN_00657690(int param_1,int param_2,int param_3)

{
  char cVar1;
  int unaff_ESI;
  int unaff_retaddr;
  
  if ((DAT_00d12a38 != 0) && (cVar1 = FUN_006cb690(&param_2), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = FUN_006e99d0(&param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((param_2 < 0x100) && (param_3 < 0x300)) {
    return 1;
  }
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
    break;
  default:
    if ((param_2 < 0x400) && (param_3 < 0x300)) {
      return 1;
    }
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x13d9c) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((unaff_retaddr < 0x44) && (unaff_ESI < 0x400)) {
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x21e62)) {
  case 5:
    cVar1 = FUN_005df9d0(unaff_ESI,unaff_retaddr);
    if (cVar1 != '\0') {
      return 1;
    }
    break;
  case 0xf:
  case 0x10:
  case 0x14:
  case 0x16:
  case 0x17:
    if ((unaff_ESI < 0x400) && (unaff_retaddr < 0x300)) {
      return 1;
    }
    return 0;
  case 0x15:
    if (((DAT_00dc1960 != '\0') && (unaff_ESI < 0x178)) && (unaff_retaddr < 0x274)) {
      return 1;
    }
  }
  return 0;
}


