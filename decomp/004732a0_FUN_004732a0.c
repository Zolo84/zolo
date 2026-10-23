// FUN_004732a0 @ 4732a0 size=537

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004732a0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_18;
  int local_14;
  
  local_18 = 0;
  iVar6 = *(int *)(param_1 + 6);
  iVar1 = *(int *)(param_1 + 0x120);
  fVar2 = *(float *)(param_1 + 0x39c8);
  iVar3 = (&DAT_00dc0fd4)[iVar6];
  for (piVar4 = *(int **)(iVar1 + 0xafc); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    iVar7 = *(int *)(*piVar4 + 4);
    if ((((iVar7 != iVar6) && (iVar7 != 0)) && (_DAT_007e3380 < *(float *)(*piVar4 + 8))) &&
       ((&DAT_0089cad8)[iVar7] != 0)) {
      local_18 = __ftol();
    }
  }
  iVar6 = _rand();
  iVar7 = __ftol();
  if (((iVar6 % 100 < iVar7) && ((float)_DAT_007e3348 < fVar2)) &&
     ((0 < local_18 && (iVar6 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1), iVar6 != 0)))) {
    uVar9 = *(undefined4 *)(param_1 + 6);
    iVar6 = FUN_00451250(uVar9);
    iVar7 = FUN_006c8e70(uVar9,1);
    if (*(float *)(iVar7 + 0x10) <= (float)iVar6) {
      local_14 = 5;
      do {
        if (local_14 == 0) {
          return;
        }
        local_14 = local_14 + -1;
        iVar6 = _rand();
        for (piVar4 = *(int **)(iVar1 + 0xafc); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
          iVar7 = *piVar4;
          iVar8 = *(int *)(iVar7 + 4);
          if (((iVar8 != 0) && (iVar8 != *(int *)(param_1 + 6))) &&
             ((_DAT_007e3380 < *(float *)(iVar7 + 8) &&
              (((&DAT_0089cad8)[iVar8] != 0 && (iVar8 = __ftol(), iVar6 % local_18 < iVar8)))))) {
            if ((iVar7 != 0) &&
               ((((&DAT_0089cad8)[*(int *)(iVar7 + 4)] != 0 &&
                 (cVar5 = FUN_0042ddd0(DAT_00893530 + 0x14), cVar5 == '\0')) &&
                ((cVar5 = FUN_0044a690(*(undefined4 *)(iVar7 + 4)), cVar5 == '\0' || (iVar3 != 0))))
               )) {
              uVar9 = FUN_00472f00(iVar7);
              FUN_004721d0(uVar9,*(undefined4 *)(iVar7 + 4));
              return;
            }
            break;
          }
        }
      } while( true );
    }
  }
  return;
}


