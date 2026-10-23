// FUN_0060ae70 @ 60ae70 size=496

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0060ae70(float *param_1,int *param_2,float *param_3,float *param_4,float *param_5,
                    float *param_6,float *param_7,float *param_8,float *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined1 local_4 [4];
  
  iVar1 = (&DAT_0089cad8)[(int)param_1];
  if (iVar1 != 0) {
    if (*param_2 < 10) {
      iVar3 = -*param_2;
      iVar7 = iVar3 + 10;
      iVar9 = 0;
      do {
        iVar2 = *(int *)(DAT_00d0ca90 + 0x3654);
        iVar10 = (int)*(char *)(DAT_00893530 + 0x16) + *(int *)(DAT_00d0ca90 + 6);
        while (iVar2 != 0) {
          puVar5 = (undefined4 *)FUN_0054efa0(local_4,0);
          if (*(int *)(*(int *)*puVar5 + 0x1c) != 0) {
            iVar10 = iVar10 + *(int *)(*(int *)(*(int *)*puVar5 + 0x1c) + 0xe);
          }
        }
        iVar2 = iVar3 + 0xb;
        if (_DAT_007e681c <=
            (float)((*(int *)(((iVar9 + 10) % 0x1a) * 4 + 0x85ead0) * iVar10 + DAT_0085eb38) % 100))
        {
          iVar10 = __ftol();
          pfVar6 = (float *)(iVar7 - iVar10 % iVar2);
          fVar4 = (float)(int)pfVar6 * _DAT_007e40b0 + _DAT_007e3374;
        }
        else {
          iVar10 = __ftol();
          pfVar6 = (float *)(iVar10 / iVar2);
          fVar4 = _DAT_007e3374 - (float)(iVar7 - iVar10 % iVar2) * _DAT_007e40b0;
        }
        switch(iVar9) {
        case 0:
          fVar4 = *(float *)(iVar1 + 0x39bc) * fVar4;
          pfVar8 = param_3;
          goto LAB_0060aff1;
        case 1:
          *param_4 = *(float *)(iVar1 + 0x39b8) * fVar4;
          break;
        case 2:
          *param_5 = *(float *)(iVar1 + 0x39c0) * fVar4;
          pfVar6 = param_5;
          break;
        case 3:
          fVar4 = *(float *)(iVar1 + 0x39b4) * fVar4;
          pfVar8 = param_6;
          goto LAB_0060aff1;
        case 4:
          *param_7 = *(float *)(iVar1 + 0x39c4) * fVar4;
          break;
        case 5:
          *param_8 = *(float *)(iVar1 + 0x39c8) * fVar4;
          pfVar6 = param_8;
          break;
        case 6:
          fVar4 = *(float *)(iVar1 + 0x39cc) * fVar4;
          pfVar8 = param_9;
LAB_0060aff1:
          *pfVar8 = fVar4;
        }
        iVar9 = iVar9 + 1;
        if (6 < iVar9) {
          return pfVar6;
        }
      } while( true );
    }
    *param_3 = *(float *)(iVar1 + 0x39bc);
    *param_4 = *(float *)(iVar1 + 0x39b8);
    *param_5 = *(float *)(iVar1 + 0x39c0);
    *param_6 = *(float *)(iVar1 + 0x39b4);
    *param_7 = *(float *)(iVar1 + 0x39c4);
    *param_8 = *(float *)(iVar1 + 0x39c8);
    *param_9 = *(float *)(iVar1 + 0x39cc);
    param_1 = param_7;
  }
  return param_1;
}


