// FUN_0054f130 @ 54f130 size=708

undefined4 __thiscall FUN_0054f130(char *param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  
  do {
    while (iVar3 = FUN_00535490(), iVar3 == 1) {
      switch(param_2[1]) {
      case 0xf9:
        if (param_2[0x103] == 0x524) {
          uVar2 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined2 *)(param_1 + 4) = uVar2;
        }
        break;
      case 0xfa:
        iVar3 = param_2[0x103];
        if (iVar3 == 0xfe) {
          param_1[2] = '\0';
        }
        else if (iVar3 == 0xff) {
          param_1[2] = '\x01';
        }
        else if (iVar3 == 0x100) {
          param_1[2] = '\x02';
        }
        else if (iVar3 == 0x101) {
          param_1[2] = '\x03';
        }
        else if (iVar3 == 0x102) {
          param_1[2] = '\x04';
        }
        else if (iVar3 == 0x103) {
          param_1[2] = '\x05';
        }
        else if (iVar3 == 0x104) {
          param_1[2] = '\x06';
        }
        else if (iVar3 == 0x105) {
          param_1[2] = '\a';
        }
        else if (iVar3 == 0x106) {
          param_1[2] = '\b';
        }
        else if (iVar3 == 0x107) {
          param_1[2] = '\t';
        }
        else if (iVar3 == 0x108) {
          param_1[2] = '\n';
        }
        else if (iVar3 == 0x109) {
          param_1[2] = '\v';
        }
        else {
          cVar1 = FUN_007a7b3c(param_2 + 0x104);
          param_1[2] = cVar1;
          if ((DAT_00dc4b5e != '\0') &&
             (((param_2[0x103] != 0x524 || (cVar1 < '\0')) || ('\v' < cVar1)))) {
            FUN_00429a00(s_ERROR___Incorrect_value___s__for_008525c4,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
        if (param_1[2] < '\0') {
          param_1[2] = '\0';
        }
        if ('\v' < param_1[2]) {
          param_1[2] = '\v';
        }
        break;
      case 0xfb:
        if (param_2[0x103] == 0x524) {
          cVar1 = FUN_007a7b3c(param_2 + 0x104);
          param_1[1] = cVar1;
        }
        if ((DAT_00dc4b5e != '\0') &&
           (((param_2[0x103] != 0x524 || (param_1[1] < '\0')) || ('\x1d' < param_1[1])))) {
          FUN_00429a00(s_ERROR___Incorrect_value___s__for_008526b4,param_2 + 0x104,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        if ('\x1d' < param_1[1]) {
          param_1[1] = '\x1d';
        }
        if (param_1[1] < '\0') {
          param_1[1] = '\0';
        }
        break;
      case 0xfc:
        if (param_2[0x103] == 0x524) {
          cVar1 = FUN_007a7b3c(param_2 + 0x104);
          *param_1 = cVar1;
        }
        if ((DAT_00dc4b5e != '\0') &&
           (((param_2[0x103] != 0x524 || (*param_1 < '\0')) || ('\x17' < *param_1)))) {
          FUN_00429a00(s_ERROR___Incorrect_value___s__for_00852628,param_2 + 0x104,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        if ('\x17' < *param_1) {
          *param_1 = '\x17';
        }
        if (*param_1 < '\0') {
          *param_1 = '\0';
        }
        break;
      default:
        FUN_005349b0(s_Date___Unexpected_field_008525ac);
        return 0xfffffffe;
      }
    }
    piVar4 = (int *)FUN_00534391();
  } while (*piVar4 != 4);
  FUN_005343dc();
  return 0;
}


