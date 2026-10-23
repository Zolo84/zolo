// FUN_004ef200 @ 4ef200 size=419

void __thiscall
FUN_004ef200(int param_1,int param_2,int param_3,int *param_4,int param_5,int *param_6,int param_7,
            int param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  iVar6 = (int)param_4;
  puVar8 = &DAT_00ac8d90;
  for (uVar2 = DAT_00877690 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar3 = (int)param_4 / 2 + -1;
  puVar8 = &DAT_00abf148;
  for (uVar2 = DAT_00877690 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = 0x40404040;
    puVar8 = puVar8 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar8 = 0x40;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar4 = 0;
  param_4 = (int *)0x0;
  if (0 < iVar6) {
    do {
      FUN_004eef70(param_2 - iVar3,((int)param_4 - iVar3) + param_3,
                   iVar4 + *(int *)(param_1 + 0xb408),iVar6);
      iVar5 = iVar4;
      iVar7 = iVar6;
      do {
        (&DAT_00ac8d90)[*(int *)(iVar5 + *(int *)(param_1 + 0xb408))] =
             (&DAT_00ac8d90)[*(int *)(iVar5 + *(int *)(param_1 + 0xb408))] + 1;
        iVar7 = iVar7 + -1;
        iVar5 = iVar5 + 4;
      } while (iVar7 != 0);
      iVar4 = iVar4 + iVar6 * 4;
      param_4 = (int *)((int)param_4 + 1);
    } while ((int)param_4 < iVar6);
  }
  iVar3 = 1;
  if (0 < (int)DAT_00877690) {
    param_4 = (int *)(param_8 + 0x706);
    iVar4 = 0;
    do {
      if ((*(int *)(&DAT_00ac8d94 + iVar4) != 0) && (*param_4 != 9)) {
        uVar1 = FUN_004ef110(param_2,param_3,iVar3,iVar6,*(undefined4 *)(param_1 + 0xb408));
        *(undefined4 *)(&DAT_00abf14c + iVar4) = uVar1;
      }
      iVar3 = iVar3 + 1;
      param_4 = (int *)((int)param_4 + 0x4b2);
      iVar4 = iVar4 + 4;
    } while (iVar3 <= (int)DAT_00877690);
  }
  if (0 < param_7) {
    param_5 = param_5 - (int)param_6;
    param_3 = param_7;
    do {
      iVar4 = 1;
      iVar3 = 0;
      iVar6 = 1000000;
      if (0 < (int)DAT_00877690) {
        piVar9 = (int *)&DAT_00abf14c;
        do {
          if (*piVar9 < iVar6) {
            iVar6 = *piVar9;
            iVar3 = iVar4;
          }
          iVar4 = iVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar4 <= (int)DAT_00877690);
      }
      *(int *)(param_5 + (int)param_6) = iVar3;
      *param_6 = iVar6;
      param_6 = param_6 + 1;
      param_3 = param_3 + -1;
      (&DAT_00abf148)[iVar3] = 1000000;
    } while (param_3 != 0);
  }
  return;
}


