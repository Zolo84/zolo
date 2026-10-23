// FUN_00652bb0 @ 652bb0 size=915

char __thiscall FUN_00652bb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x13d1a) = 0;
  FUN_004d89d0(&local_8,param_2,param_3);
  iVar3 = FUN_004d8580(local_8,local_4);
  *(int *)(param_1 + 0x21e6e) = iVar3;
  if ((DAT_00877690 + -1 <= iVar3) || (iVar3 < 1)) {
    return '\0';
  }
  iVar7 = DAT_00ab27b4 + iVar3 * 0x4b2;
  iVar3 = *(int *)(DAT_00ab27b4 + 0x254 + iVar3 * 0x4b2);
  iVar5 = DAT_00ab27b4;
  if (((iVar3 == 8) || (iVar3 == 9)) && (local_c = 0, 0 < *(int *)(iVar7 + 0x290))) {
    iVar3 = 0;
    do {
      iVar6 = *(int *)(*(int *)(iVar7 + 0x298) + iVar3);
      iVar8 = iVar6 * 0x4b2;
      iVar4 = *(int *)(iVar8 + 0x46a + iVar5);
      if (((iVar4 != 0) && (*(char *)(iVar8 + 0x46e + iVar5) != '\0')) &&
         ((iVar4 = (**(code **)(*(int *)(iVar4 + 0x30) + 4))(), iVar5 = DAT_00ab27b4, 0 < iVar4 &&
          (cVar2 = FUN_00419170(param_2,param_3), iVar5 = DAT_00ab27b4, cVar2 == '\x01')))) {
        *(int *)(param_1 + 0x21e6e) = iVar6;
        return '\t';
      }
      local_c = local_c + 1;
      iVar3 = iVar3 + 0xc;
    } while (local_c < *(int *)(iVar7 + 0x290));
  }
  if ((*(int *)(iVar7 + 0x3d8) != 0) &&
     ((((cVar2 = FUN_0044a690(*(undefined4 *)(param_1 + 6)), cVar2 != '\0' ||
        (*(char *)(*(int *)(iVar7 + 0x3d8) + 0x34ac + *(int *)(param_1 + 6)) != '\0')) ||
       (cVar2 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar7 + 0x3d8) + 6)), iVar5 = DAT_00ab27b4,
       cVar2 != '\0')) &&
      ((iVar3 = FUN_004ece80(), iVar5 = DAT_00ab27b4, iVar3 != 0 &&
       (cVar2 = (**(code **)(**(int **)(iVar7 + 0x43a) + 0x20))(param_2,param_3),
       iVar5 = DAT_00ab27b4, cVar2 != '\0')))))) {
    return '\n';
  }
  if (((byte)DAT_00a98444 & 0x10) != 0) {
    puVar1 = *(undefined4 **)(iVar7 + 0x34);
    while ((puVar1 != (undefined4 *)0x0 && (*(char *)(iVar7 + 0x46e) != '\0'))) {
      cVar2 = FUN_004d1db0(param_2,param_3);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x13d1a) = *puVar1;
        return '\f';
      }
      puVar1 = (undefined4 *)puVar1[2];
      iVar5 = DAT_00ab27b4;
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar7 + 0x290)) {
      iVar6 = 0;
      do {
        puVar1 = *(undefined4 **)(iVar5 + 0x34 + *(int *)(iVar6 + *(int *)(iVar7 + 0x298)) * 0x4b2);
        while ((puVar1 != (undefined4 *)0x0 &&
               (*(char *)(iVar5 + 0x46e + *(int *)(iVar6 + *(int *)(iVar7 + 0x298)) * 0x4b2) != '\0'
               ))) {
          cVar2 = FUN_004d1db0(param_2,param_3);
          if (cVar2 != '\0') {
            *(undefined4 *)(param_1 + 0x13d1a) = *puVar1;
            return '\f';
          }
          puVar1 = (undefined4 *)puVar1[2];
          iVar5 = DAT_00ab27b4;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar3 < *(int *)(iVar7 + 0x290));
    }
  }
  iVar3 = iVar5 + *(int *)(param_1 + 0x21e6e) * 0x4b2;
  if (7 < *(int *)(iVar5 + 0x254 + *(int *)(param_1 + 0x21e6e) * 0x4b2)) {
    iVar7 = 0;
    if (0 < *(int *)(iVar3 + 0x290)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x298) + iVar6);
        if ((*(int *)(iVar5 + 0x46a + iVar3 * 0x4b2) != 0) &&
           (cVar2 = FUN_00419170(param_2,param_3), iVar5 = DAT_00ab27b4, cVar2 == '\x01')) {
          *(int *)(param_1 + 0x21e6e) = iVar3;
          return '\t';
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0xc;
        iVar3 = iVar5 + *(int *)(param_1 + 0x21e6e) * 0x4b2;
      } while (iVar7 < *(int *)(iVar5 + 0x290 + *(int *)(param_1 + 0x21e6e) * 0x4b2));
    }
    return '\v';
  }
  if (*(int *)(iVar3 + 0x3d4) == 0) {
    return '\a';
  }
  return (-(param_1 != *(int *)(iVar3 + 0x3d4)) & 2U) + 6;
}


