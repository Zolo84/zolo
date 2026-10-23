// FUN_00664c10 @ 664c10 size=280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00664c10(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float fStack_10;
  
  iVar4 = param_2;
  fVar9 = (float10)FUN_00664d30(param_2);
  fVar1 = (float)fVar9;
  if ((float10)_DAT_007e3380 < fVar9) {
    param_2 = **(int **)((int)&DAT_008ea36c + iVar4 * 0x12);
    puVar3 = *(undefined4 **)(param_1 + 0x1a);
    do {
      do {
        do {
          if (puVar3 == (undefined4 *)0x0) {
            piVar8 = (int *)(**(code **)(*(int *)(param_1 + 0xf0) + 0x28))(&param_2,iVar4,fVar1);
            if (*piVar8 != 0) {
              return;
            }
            iVar7 = *(int *)(param_1 + 0xf4);
            while( true ) {
              if (iVar7 == 0) {
                FUN_00667690(iVar4,fVar1);
                return;
              }
              if (*(float *)(iVar7 + 4) < fStack_10) break;
              iVar7 = *(int *)(iVar7 + 0xc);
            }
            FUN_006676f0(iVar4,fVar1,iVar7);
            return;
          }
          puVar2 = (undefined4 *)puVar3[2];
          piVar8 = (int *)*puVar3;
          cVar5 = (**(code **)(*piVar8 + 0xe8))();
          puVar3 = puVar2;
        } while (cVar5 == '\0');
        piVar6 = (int *)(**(code **)(*piVar8 + 0xec))();
        iVar7 = (**(code **)(*piVar6 + 0x1e8))();
      } while (iVar7 != 0xf);
      piVar8 = (int *)(**(code **)(*piVar8 + 0xec))();
      iVar7 = (**(code **)(*piVar8 + 0x1f0))();
    } while (*(int *)(*(int *)(iVar7 + 0x8c) + 0x288) != *(int *)(param_2 + 0x288));
  }
  return;
}


