// FUN_00669270 @ 669270 size=802

undefined4 __thiscall FUN_00669270(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  
  do {
    while( true ) {
      while (iVar2 = FUN_00535490(), iVar2 != 1) {
        piVar3 = (int *)FUN_00534391();
        if (*piVar3 == 4) {
          FUN_005343dc();
          return 0;
        }
      }
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 < 0xea) break;
      switch(iVar2) {
      case 0x4df:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 4) = (float)fVar8;
        break;
      case 0x4e0:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 8) = (float)fVar8;
        break;
      case 0x4e1:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0xc) = (float)fVar8;
        break;
      case 0x4e2:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x10) = (float)fVar8;
        break;
      case 0x4e3:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x14) = (float)fVar8;
        break;
      case 0x4e4:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x18) = (float)fVar8;
        break;
      case 0x4e5:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x1c) = (float)fVar8;
        break;
      case 0x4e6:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x20) = (float)fVar8;
        break;
      case 0x4e7:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x24) = (float)fVar8;
        break;
      case 0x4e8:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(param_1 + 0x28) = (float)fVar8;
        break;
      case 0x4e9:
        *(bool *)(param_1 + 0x7e) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x4ea:
        *(bool *)(param_1 + 0x7c) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      default:
switchD_006692b2_caseD_37:
        FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
        return 0xfffffffe;
      }
    }
    if (iVar2 == 0xe9) {
      if (*(int *)(param_2 + 0x40c) == 0x527) {
        uVar4 = 0xffffffff;
        pcVar6 = (char *)(param_2 + 0x410);
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (~uVar4 - 1 < 0x50) {
          uVar4 = 0xffffffff;
          pcVar6 = (char *)(param_2 + 0x410);
          do {
            pcVar7 = pcVar6;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar7 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar6 = pcVar7 + -uVar4;
          pcVar7 = (char *)(param_1 + 0x2c);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x36:
        *(bool *)(param_1 + 0x7d) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      default:
        goto switchD_006692b2_caseD_37;
      case 0x3c:
        *(bool *)(param_1 + 0x7f) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x3d:
        *(bool *)(param_1 + 0x81) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x3e:
        *(bool *)(param_1 + 0x83) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x3f:
        *(bool *)(param_1 + 0x86) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x40:
        *(bool *)(param_1 + 0x80) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x41:
        *(bool *)(param_1 + 0x87) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x42:
        *(bool *)(param_1 + 0x88) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x43:
        *(bool *)(param_1 + 0x82) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x44:
        *(bool *)(param_1 + 0x84) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x45:
        *(bool *)(param_1 + 0x8b) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x46:
        *(bool *)(param_1 + 0x8a) = *(int *)(param_2 + 0x40c) == 0x111;
        break;
      case 0x50:
        *(bool *)(param_1 + 0x89) = *(int *)(param_2 + 0x40c) == 0x111;
      }
    }
  } while( true );
}


