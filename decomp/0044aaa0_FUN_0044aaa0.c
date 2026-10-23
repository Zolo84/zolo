// FUN_0044aaa0 @ 44aaa0 size=78

void __fastcall FUN_0044aaa0(int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float10 fVar4;
  
  piVar3 = &DAT_0089cad8;
  pfVar2 = (float *)(param_1 + 0xef8e);
  do {
    *pfVar2 = 9999.0;
    if (*piVar3 != 0) {
      iVar1 = *(int *)(*piVar3 + 0x117de);
      if ((*(int *)(param_1 + 0x117de) != 0) && (iVar1 != 0)) {
        fVar4 = (float10)FUN_0044a9c0(*(int *)(param_1 + 0x117de),iVar1);
        *pfVar2 = (float)fVar4;
      }
    }
    piVar3 = piVar3 + 1;
    pfVar2 = pfVar2 + 1;
  } while ((int)piVar3 < 0x89d038);
  return;
}


