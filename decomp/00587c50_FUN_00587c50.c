// FUN_00587c50 @ 587c50 size=527

undefined4 __thiscall FUN_00587c50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  
LAB_00587c64:
  while( true ) {
    while (iVar1 = FUN_00535490(), iVar1 != 1) {
      piVar3 = (int *)FUN_00534391();
      if (*piVar3 == 4) {
        FUN_005343dc();
        return 0;
      }
    }
    iVar1 = *(int *)(param_2 + 4);
    if (0x1b6 < iVar1) break;
    if (iVar1 == 0x1b6) {
      uVar2 = FUN_004af6b0(param_2 + 0x410);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
    }
    else {
      switch(iVar1) {
      case 0xe4:
        iVar1 = *(int *)(param_2 + 0x40c);
        if (iVar1 != 0x111) goto LAB_00587e0a;
        *(undefined1 *)(param_1 + 0x138d0) = 1;
        break;
      default:
        goto switchD_00587c9f_caseD_e5;
      case 0x137:
        if (*(int *)(param_2 + 0x40c) != 3) goto LAB_00587cb9;
        FUN_00427ed0(param_2);
        break;
      case 0x141:
        uVar2 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x16) = uVar2;
        break;
      case 0x14e:
        fVar4 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x138c4) = (float)fVar4;
        break;
      case 0x1ae:
        uVar2 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x138cc) = uVar2;
        break;
      case 0x1b5:
        uVar2 = FUN_004af6b0(param_2 + 0x410);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
    }
  }
  switch(iVar1) {
  case 0x1b7:
    if (*(int *)(param_2 + 0x40c) != 3) goto LAB_00587cb9;
    FUN_00588070(param_2);
    goto LAB_00587c64;
  case 0x1b8:
    if (*(int *)(param_2 + 0x40c) == 3) {
      FUN_00588110(param_2);
    }
    else {
LAB_00587cb9:
      FUN_005349b0(s_No_left_curly_0082f278);
    }
    goto LAB_00587c64;
  default:
switchD_00587c9f_caseD_e5:
    FUN_005349b0(s_Peace___Unexpected_field_00857de4);
    return 0xfffffffe;
  case 0x1ba:
    iVar1 = *(int *)(param_2 + 0x40c);
    if (iVar1 == 0x111) {
      *(undefined1 *)(param_1 + 0x138c3) = 1;
      goto LAB_00587c64;
    }
    break;
  case 0x1bb:
    iVar1 = *(int *)(param_2 + 0x40c);
    if (iVar1 == 0x111) {
      *(undefined1 *)(param_1 + 0x138b4) = 1;
      goto LAB_00587c64;
    }
    break;
  case 0x1bc:
    iVar1 = *(int *)(param_2 + 0x40c);
    if (iVar1 == 0x111) {
      *(undefined1 *)(param_1 + 0x138b5) = 1;
      goto LAB_00587c64;
    }
    break;
  case 0x2b5:
    iVar1 = *(int *)(param_2 + 0x40c);
    if (iVar1 != 0x111) break;
    *(undefined1 *)(param_1 + 0x138d1) = 1;
    goto LAB_00587c64;
  }
LAB_00587e0a:
  if (iVar1 != 0x112) {
    FUN_005349b0(s_Illegal_argument_00857e00);
  }
  goto LAB_00587c64;
}


