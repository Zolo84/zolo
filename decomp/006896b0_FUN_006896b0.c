// FUN_006896b0 @ 6896b0 size=124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006896b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = FUN_00527b40();
  piVar4 = *(int **)(*(int *)(param_1 + 0x1c) + 0x451c);
joined_r0x006896ce:
  do {
    do {
      if (piVar4 == (int *)0x0) {
        if ((float10)iVar5 != (float10)_DAT_007e3380) {
          return (float10)*(int *)(param_1 + 0xfc) / (float10)iVar5;
        }
        return (float10)_DAT_007e67e4;
      }
      piVar1 = (int *)piVar4[2];
      iVar2 = *piVar4;
      piVar4 = piVar1;
    } while (*(int *)(iVar2 + 0x14c) < 1);
    piVar1 = *(int **)(param_1 + 4);
    do {
      if (piVar1 == (int *)0x0) goto joined_r0x006896ce;
      iVar3 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(iVar3 + 4) != *(int *)(iVar2 + 0x14c));
    iVar5 = iVar5 + 1;
  } while( true );
}


