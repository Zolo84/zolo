// FUN_004d6fe0 @ 4d6fe0 size=950

undefined4 FUN_004d6fe0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_41c;
  undefined4 local_418;
  undefined4 local_414;
  int *local_410;
  undefined1 local_40c [512];
  undefined1 local_20c [512];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfa7c;
  pvStack_c = ExceptionList;
  iVar4 = 0;
  iVar2 = 0;
  local_41c = 0x1267;
  ExceptionList = &pvStack_c;
  if (0 < DAT_00877690) {
    iVar3 = 0;
    ExceptionList = &pvStack_c;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar3 + 0x3a8 + DAT_00ab27b4) = 0;
      iVar3 = iVar3 + 0x4b2;
    } while (iVar2 < DAT_00877690);
  }
  puVar5 = &DAT_00a391d4;
  for (iVar2 = DAT_00877690; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_410 = operator_new(8);
  local_4 = 0;
  if (local_410 == (int *)0x0) {
    DAT_00a44c28 = (undefined4 *)0x0;
  }
  else {
    DAT_00a44c28 = (undefined4 *)FUN_00426120(s_map_SpriteDB_csv_008477b4);
  }
  local_4 = 0xffffffff;
  FUN_00426330(1);
  cVar1 = FUN_004265c0(local_40c);
  while ((((cVar1 != '\0' && (cVar1 = FUN_00426380(&local_418), cVar1 != '\0')) &&
          (cVar1 = FUN_00426380(&local_414), cVar1 != '\0')) &&
         ((cVar1 = FUN_00426380(&local_41c), cVar1 != '\0' &&
          (cVar1 = FUN_004265c0(local_20c), cVar1 != '\0'))))) {
    if (local_41c < DAT_00877690) {
      *(int *)(DAT_00ab27b4 + local_41c * 0x4b2 + 0x3a8) =
           *(int *)(DAT_00ab27b4 + 0x3a8 + local_41c * 0x4b2) + 1;
    }
    DAT_00a98400 = DAT_00a98400 + 1;
    cVar1 = FUN_004265c0(local_40c);
  }
  if (0 < DAT_00877690) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(DAT_00ab27b4 + 0x3a8 + iVar2);
      if (iVar3 != 0) {
        local_410 = operator_new(iVar3 * 0x98 + 4);
        local_4 = 1;
        if (local_410 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = local_410 + 1;
          *local_410 = iVar3;
          FUN_007a8800(piVar6,0x98,iVar3,FUN_00417620,FUN_00417670);
        }
        local_4 = 0xffffffff;
        *(int **)(DAT_00ab27b4 + 0x2c + iVar2) = piVar6;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x4b2;
    } while (iVar4 < DAT_00877690);
  }
  FUN_004266f0();
  FUN_00426330(1);
  iVar4 = 0;
  iVar2 = local_41c;
  if (0 < DAT_00a98400) {
    do {
      if (iVar2 < DAT_00877690) {
        FUN_004265c0(local_40c);
        FUN_00426380(&local_418);
        FUN_00426380(&local_414);
        FUN_00426380(&local_41c);
        FUN_004265c0(local_20c);
        iVar3 = DAT_00ab27b4 + local_41c * 0x4b2;
        iVar2 = local_41c;
        if (*(int *)(iVar3 + 0x3a8) != 0) {
          FUN_00417740(*(undefined4 *)(iVar3 + 0x254),0);
          (**(code **)(*(int *)(*(int *)(DAT_00ab27b4 + 0x2c + local_41c * 0x4b2) +
                               (&DAT_00a391d4)[local_41c] * 0x98) + 0x18))(local_418,local_414);
          FUN_00415d30(DAT_00bd1bac);
          FUN_00415ed0(0,0,*(undefined4 *)(DAT_00bd1bac + 4),*(undefined4 *)(DAT_00bd1bac + 8));
          (&DAT_00a391d4)[local_41c] = (&DAT_00a391d4)[local_41c] + 1;
          iVar2 = local_41c;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00a98400);
  }
  if (DAT_00a44c28 != (undefined4 *)0x0) {
    (**(code **)*DAT_00a44c28)(1);
  }
  ExceptionList = pvStack_c;
  return 1;
}


