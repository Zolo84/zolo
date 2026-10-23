// FUN_004d78d0 @ 4d78d0 size=263

undefined4 FUN_004d78d0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0x16) {
    return 0;
  }
  switch(*(undefined4 *)(param_1[1] + 0xe)) {
  case 1:
    if ((DAT_00d0ca90 != 0) && (*(char *)(DAT_00d0ca90 + 0x21de2) != '\0')) {
      return 0;
    }
    DAT_00a98414 = 0xffffd8f0;
    break;
  case 2:
    if ((DAT_00d0ca90 != 0) && (*(char *)(DAT_00d0ca90 + 0x21de2) != '\0')) {
      return 0;
    }
    DAT_00a98414 = 10000;
    break;
  case 3:
    if ((DAT_00d0ca90 != 0) && (*(char *)(DAT_00d0ca90 + 0x21de2) != '\0')) {
      return 0;
    }
    DAT_00a98410 = 0xffffd8f0;
    break;
  case 4:
    if ((DAT_00d0ca90 != 0) && (*(char *)(DAT_00d0ca90 + 0x21de2) != '\0')) {
      return 0;
    }
    DAT_00a98410 = 10000;
    break;
  default:
    goto switchD_004d78fd_caseD_5;
  case 0x52:
    FUN_00407da0();
    FUN_004ddcd0(s_palette_act_0083b438,&DAT_00a43018);
    FUN_004d7db0();
    goto switchD_004d78fd_caseD_5;
  }
  cVar1 = FUN_0042e9a0();
  if (cVar1 != '\0') {
    *(int *)(DAT_00d0ca90 + 0x221fe) = *(int *)(DAT_00d0ca90 + 0x221fe) + 1;
    return 0;
  }
switchD_004d78fd_caseD_5:
  return 0;
}


