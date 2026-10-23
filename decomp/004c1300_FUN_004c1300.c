// FUN_004c1300 @ 4c1300 size=194

undefined4 __thiscall FUN_004c1300(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  do {
    while (iVar1 = FUN_00535490(), iVar1 == 1) {
      if (*(int *)(param_2 + 4) == 0xfd) {
        FUN_0054f130(param_2);
      }
      else {
        if (*(int *)(param_2 + 4) != 0x141) {
          FUN_005349b0(s_CombatEvent___Unexpected_field_0083f5e0);
          return 0xfffffffe;
        }
        switch(*(undefined4 *)(param_2 + 0x40c)) {
        case 0x475:
          *param_1 = 0;
          break;
        case 0x476:
          *param_1 = 1;
          break;
        case 0x477:
          *param_1 = 2;
          break;
        case 0x478:
          *param_1 = 3;
          break;
        case 0x479:
          *param_1 = 4;
          break;
        case 0x47a:
          *param_1 = 5;
          break;
        case 0x47b:
          *param_1 = 6;
          break;
        default:
          *param_1 = 7;
        }
      }
    }
    piVar2 = (int *)FUN_00534391();
  } while (*piVar2 != 4);
  FUN_005343dc();
  return 0;
}


