// FUN_004687f0 @ 4687f0 size=359

float10 __thiscall FUN_004687f0(int param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float local_4;
  
  fVar8 = (float10)*(float *)(param_1 + 0x1183e) + (float10)*(float *)(param_1 + 0x1183a) +
          (float10)*(float *)(param_1 + 0x11836);
  local_4 = (float)fVar8;
  if ((*(int *)(param_1 + 0x3350) != 0) &&
     (piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x3350) + 0x22) + 4), piVar7 != (int *)0x0)) {
    do {
      piVar5 = piVar7 + 2;
      iVar6 = (&DAT_0089cad8)[*piVar7];
      if ((iVar6 != 0) && (iVar6 != param_1)) {
        fVar8 = (float10)*(float *)(iVar6 + 0x1183e) + (float10)*(float *)(iVar6 + 0x1183a) +
                (float10)*(float *)(iVar6 + 0x11836) + fVar8;
      }
      piVar7 = (int *)*piVar5;
    } while ((int *)*piVar5 != (int *)0x0);
    local_4 = (float)fVar8;
  }
  iVar6 = 0;
  piVar7 = &DAT_0089cad8;
  do {
    iVar2 = *piVar7;
    if (((iVar2 != 0) && (iVar6 != *(int *)(param_1 + 6))) && (param_3 != iVar2)) {
      cVar4 = FUN_0044b300(*(int *)(param_1 + 6));
      if (cVar4 == '\0') {
        if (param_2 == '\0') {
          cVar4 = FUN_005861c0(*(undefined4 *)(param_1 + 6));
          if (cVar4 != '\0') {
            fVar8 = (float10)*(float *)(iVar2 + 0x1183e) + (float10)*(float *)(iVar2 + 0x1183a) +
                    (float10)*(float *)(iVar2 + 0x11836) + (float10)local_4;
            local_4 = (float)fVar8;
            if ((*(int *)(iVar2 + 0x3350) != 0) &&
               (piVar5 = *(int **)(*(int *)(*(int *)(iVar2 + 0x3350) + 0x22) + 4),
               piVar5 != (int *)0x0)) {
              do {
                piVar1 = piVar5 + 2;
                iVar3 = (&DAT_0089cad8)[*piVar5];
                if ((iVar3 != 0) && (iVar3 != iVar2)) {
                  fVar8 = (float10)*(float *)(iVar3 + 0x1183e) +
                          (float10)*(float *)(iVar3 + 0x1183a) +
                          (float10)*(float *)(iVar3 + 0x11836) + fVar8;
                }
                piVar5 = (int *)*piVar1;
              } while ((int *)*piVar1 != (int *)0x0);
              local_4 = (float)fVar8;
            }
            goto LAB_0046893f;
          }
        }
        if (param_3 != 0) {
          cVar4 = FUN_0044b280(*(undefined4 *)(param_3 + 6));
          if (cVar4 != '\0') {
            fVar8 = (float10)*(float *)(iVar2 + 0x1183e) + (float10)*(float *)(iVar2 + 0x1183a) +
                    (float10)*(float *)(iVar2 + 0x11836) + (float10)local_4;
            local_4 = (float)fVar8;
            goto LAB_0046893f;
          }
        }
      }
      fVar8 = (float10)local_4;
    }
LAB_0046893f:
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + 1;
    if (0x89d033 < (int)piVar7) {
      return fVar8;
    }
  } while( true );
}


