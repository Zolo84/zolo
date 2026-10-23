// FUN_006aff20 @ 6aff20 size=284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006aff20(int param_1,float param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  char cVar7;
  float10 fVar8;
  
  piVar2 = *(int **)((int)param_2 + 4);
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)piVar2[2];
    piVar6 = *(int **)(*piVar2 + 0x2c);
    while (piVar2 = piVar1, piVar6 != (int *)0x0) {
      piVar2 = (int *)piVar6[2];
      iVar3 = *piVar6;
      fVar8 = (float10)FUN_0044a9c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar3 + 0x12));
      piVar6 = piVar2;
      if (fVar8 <= (float10)_DAT_007e3844) {
        param_2 = (float)(fVar8 * (float10)_DAT_007e4090);
        if ((*(int *)(iVar3 + 0x12) == *(int *)(param_1 + 4)) || (param_2 < _DAT_007e3374)) {
          param_2 = 1.0;
        }
        piVar2 = *(int **)(*(int *)(param_3 + 0x120) + 0xb1a);
        do {
          fVar5 = _DAT_007e3380;
          if (piVar2 == (int *)0x0) goto LAB_006affcd;
          piVar4 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
        } while (*piVar4 != *(int *)(iVar3 + 0x12));
        fVar5 = (float)piVar4[1];
LAB_006affcd:
        fVar5 = (float)*(int *)(iVar3 + 0x19e) * _DAT_007e4090 + fVar5;
        cVar7 = FUN_004e8a90();
        if ((cVar7 == '\0') || (*(int *)(iVar3 + 0x3d4) != *(int *)(iVar3 + 0x3d8))) {
          *(float *)(param_1 + 0x38) = fVar5 / param_2 + *(float *)(param_1 + 0x38);
        }
        else {
          *(float *)(param_1 + 0x38) =
               (fVar5 + _DAT_007e4088) / param_2 + *(float *)(param_1 + 0x38);
        }
      }
    }
  } while( true );
}


