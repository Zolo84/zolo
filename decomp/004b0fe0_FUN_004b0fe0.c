// FUN_004b0fe0 @ 4b0fe0 size=386

void __thiscall FUN_004b0fe0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  piVar1 = (int *)FUN_00534391();
  iVar2 = *piVar1;
  while (iVar2 != 4) {
    iVar2 = FUN_00535490();
    if (iVar2 != 1) {
      return;
    }
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 < 0x1ff) {
      if (iVar2 == 0x1fe) {
        fVar4 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x94) = (float)fVar4;
      }
      else {
        switch(iVar2) {
        case 0x156:
          FUN_0054f130(param_2);
          break;
        case 0x157:
          FUN_0054f130(param_2);
          break;
        default:
          goto switchD_004b1039_caseD_158;
        case 0x1a2:
          FUN_004b0670(param_2);
          break;
        case 0x1a3:
          FUN_004b0670(param_2);
          break;
        case 0x1f1:
          uVar3 = FUN_007a7b3c(param_2 + 0x410);
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x4ed:
        iVar2 = FUN_007a7b3c(param_2 + 0x410);
        *(bool *)(param_1 + 0xa6) = iVar2 != 0;
        break;
      default:
        goto switchD_004b1039_caseD_158;
      case 0x4f0:
        iVar2 = FUN_007a7b3c(param_2 + 0x410);
        *(bool *)(param_1 + 0xa4) = iVar2 != 0;
        break;
      case 0x4f3:
        iVar2 = FUN_007a7b3c(param_2 + 0x410);
        *(bool *)(param_1 + 0xa5) = iVar2 != 0;
        break;
      case 0x523:
        FUN_00427ed0(param_2);
      }
    }
    piVar1 = (int *)FUN_00534391();
    iVar2 = *piVar1;
  }
  FUN_005343dc();
  iVar2 = FUN_004e9370(uVar3);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(iVar2 + 0x14);
switchD_004b1039_caseD_158:
  return;
}


