// FUN_004a7ce0 @ 4a7ce0 size=513

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a7ce0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_8 [8];
  
  cVar4 = FUN_0042e9a0();
  if (((cVar4 == '\0') && (cVar4 = FUN_004a0780(*(undefined4 *)(param_1 + 6)), cVar4 != '\0')) &&
     (iVar5 = (**(code **)(*(int *)(param_1 + 0xe8a0) + 4))(), 1 < iVar5)) {
    puVar3 = *(undefined4 **)(param_1 + 0xe8a4);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      uVar2 = *puVar3;
      iVar5 = FUN_004e9370(uVar2);
      iVar6 = FUN_0042e060(auStack_8,iVar5 + 0x3ce);
      puVar3 = puVar1;
      if ((0xe < (int)*(char *)(iVar6 + 1) +
                 ((int)*(char *)(iVar6 + 2) + *(short *)(iVar6 + 4) * 0xc) * 0x1e) &&
         (iVar6 = *(int *)(iVar5 + 0x222) + param_2, 0 < iVar6)) {
        iVar9 = 0;
        if (0 < *(int *)(iVar5 + 0x290)) {
          iVar8 = 0;
          do {
            iVar7 = FUN_004e9370(*(undefined4 *)(iVar8 + *(int *)(iVar5 + 0x298)));
            if ((*(int *)(iVar7 + 0x3d4) != 0) && (*(int *)(*(int *)(iVar7 + 0x3d4) + 6) == 0x157))
            {
              iVar6 = iVar6 + _DAT_00dc192c;
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar9 < *(int *)(iVar5 + 0x290));
        }
        if ((((*(int *)(iVar5 + 0x3d4) != 0) && (*(int *)(iVar5 + 0x3d4) != param_1)) &&
            (cVar4 = FUN_004e8ab0(param_1), cVar4 == '\0')) &&
           (cVar4 = FUN_0044b280(*(undefined4 *)(param_1 + 6)), cVar4 != '\0')) {
          iVar6 = iVar6 + _DAT_00dc1930;
        }
        switch(*(undefined4 *)(iVar5 + 0x254)) {
        case 0:
          iVar5 = DAT_00dc194c;
          break;
        case 1:
          iVar5 = DAT_00dc193c;
          break;
        case 2:
          iVar5 = DAT_00dc1934;
          break;
        case 3:
          iVar5 = DAT_00dc1948;
          break;
        case 4:
          iVar5 = DAT_00dc1944;
          break;
        case 5:
          iVar5 = DAT_00dc1938;
          break;
        case 6:
          iVar5 = DAT_00dc1940;
          break;
        case 7:
          iVar5 = DAT_00dc1950;
          break;
        default:
          goto switchD_004a7e2f_default;
        }
        iVar6 = iVar6 + iVar5;
switchD_004a7e2f_default:
        iVar5 = FUN_004ece80();
        if ((iVar5 != 0) || (iVar5 = FUN_004ece90(), iVar5 != 0)) {
          iVar6 = iVar6 + _DAT_00dc1954;
        }
        iVar5 = _rand();
        if (((iVar5 % 200 < iVar6) && (iVar5 = _rand(), iVar5 % 200 < iVar6)) &&
           (iVar5 = _rand(), iVar5 % 200 < iVar6)) {
          FUN_004a89c0(uVar2);
        }
      }
    }
  }
  return;
}


