// FUN_005341fe @ 5341fe size=171

undefined * FUN_005341fe(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x529) {
    if (param_1 == 0x528) {
      return &DAT_00850b54;
    }
    switch(param_1) {
    case 1:
      puVar1 = &DAT_00850b30;
      break;
    case 2:
      puVar1 = &DAT_00850b34;
      break;
    case 3:
      puVar1 = &DAT_00850b38;
      break;
    case 4:
      puVar1 = &DAT_00850b3c;
      break;
    case 5:
      puVar1 = &DAT_00850b40;
      break;
    case 6:
      puVar1 = &DAT_00850b44;
      break;
    default:
      goto switchD_0053422c_caseD_7;
    case 8:
      puVar1 = &DAT_00850b50;
      break;
    case 9:
      puVar1 = &DAT_00850b48;
      break;
    case 10:
      puVar1 = &DAT_00850b4c;
    }
  }
  else {
    if (param_1 == 0x529) {
      return &DAT_00850b58;
    }
    if (param_1 == 0x52a) {
      return &DAT_00850b5c;
    }
switchD_0053422c_caseD_7:
    puVar1 = *(undefined **)(&DAT_00bcc57c + param_1 * 4);
  }
  return puVar1;
}


