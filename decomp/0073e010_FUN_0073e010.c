// FUN_0073e010 @ 73e010 size=277

undefined4 __thiscall FUN_0073e010(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  char *pcVar6;
  
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  do {
    while( true ) {
      while (iVar2 = FUN_00535490(), iVar2 != 1) {
        if (iVar2 == 2) {
          return 0;
        }
        piVar4 = (int *)FUN_00534391();
        if (*piVar4 == 4) {
          FUN_005343dc();
          return 0;
        }
      }
      iVar2 = param_2[1];
      if (0x1f1 < iVar2) break;
      if (iVar2 == 0x1f1) {
        uVar3 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x12) = uVar3;
      }
      else if (iVar2 == 0x141) {
        iVar2 = FUN_004f55b0(param_2 + 0x103);
        *(int *)(param_1 + 0x1a) = iVar2;
        if (iVar2 == 0) {
          iVar2 = *param_2;
          iVar1 = *(int *)(iVar2 + 0x212);
          piVar4 = param_2 + 0x104;
          pcVar6 = s_ERROR___Invalid_building_type____008474b4;
LAB_0073e0d1:
          FUN_00429a00(pcVar6,piVar4,iVar2 + 0x216,iVar1 + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
      else {
        if (iVar2 != 0x14e) goto LAB_0073e0b8;
        fVar5 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x16) = (float)fVar5;
      }
    }
    if (iVar2 != 0x345) {
LAB_0073e0b8:
      iVar2 = *param_2;
      iVar1 = *(int *)(iVar2 + 0x212);
      piVar4 = param_2 + 2;
      pcVar6 = s_ERROR___Invalid_trigger_entry____00872b28;
      goto LAB_0073e0d1;
    }
    if (param_2[0x103] == 0x360) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
  } while( true );
}


