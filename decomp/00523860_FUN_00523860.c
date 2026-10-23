// FUN_00523860 @ 523860 size=167

void __fastcall FUN_00523860(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x26);
  while (piVar1 != (int *)0x0) {
    switch(*(undefined4 *)(*piVar1 + 0x134)) {
    case 0:
    case 0x19:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    case 4:
    case 0x11:
    case 0x16:
    case 0x1c:
      break;
    case 5:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x17:
    case 0x1b:
    case 0x1d:
    case 0x1e:
      break;
    case 6:
    case 7:
    case 8:
      break;
    default:
      break;
    case 10:
    case 0x15:
      break;
    case 0xe:
    case 0x18:
      break;
    case 0x13:
    case 0x14:
      break;
    case 0x1a:
    }
    piVar1 = (int *)piVar1[2];
  }
  __ftol();
  return;
}


