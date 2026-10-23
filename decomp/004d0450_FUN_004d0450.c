// FUN_004d0450 @ 4d0450 size=194

void FUN_004d0450(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  do {
    while( true ) {
      iVar2 = FUN_00535490();
      if (iVar2 != 1) {
        piVar3 = (int *)FUN_00534391();
        if (*piVar3 == 4) {
          FUN_005343dc();
        }
        return;
      }
      iVar2 = *(int *)(param_2 + 4);
      if (0x1b3 < iVar2) break;
      if (iVar2 == 0x1b3) {
        fVar4 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(&DAT_008eff38 + param_1 * 4) = (float)fVar4;
      }
      else if (iVar2 == 0xbf) {
        uVar1 = FUN_007a7b3c(param_2 + 0x410);
        *(undefined2 *)(&DAT_008effb0 + param_1 * 2) = uVar1;
      }
      else if (iVar2 == 0xc0) {
        fVar4 = (float10)FUN_00429d80(param_2 + 0x410);
        *(float *)(&DAT_008eff0c + param_1 * 4) = (float)fVar4;
      }
      else {
LAB_004d04d0:
        FUN_005349b0(s_Unknown_Type_in_building_costs_t_00847490);
      }
    }
    if (iVar2 != 0x23c) goto LAB_004d04d0;
    fVar4 = (float10)FUN_00429d80(param_2 + 0x410);
    *(float *)(&DAT_008eff64 + param_1 * 4) = (float)fVar4;
  } while( true );
}


