// FUN_00648890 @ 648890 size=358

undefined4 __fastcall FUN_00648890(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  cVar4 = FUN_006523c0();
  if (cVar4 == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((*(char *)(*(int *)((&DAT_0089cad8)[*(int *)(*(int *)(param_1 + 0x16) + 6)] + 0x12da) +
                  0x3b38) != '\0') && (uVar7 = 0, 0 < DAT_00877690)) {
      iVar8 = 0;
      iVar6 = DAT_00ab27b4;
      do {
        iVar1 = *(int *)(iVar8 + 0x3d4 + iVar6);
        if ((((iVar1 == *(int *)(param_1 + 0x16)) ||
             (*(int *)(iVar8 + 0x3d8 + iVar6) == *(int *)(param_1 + 0x16))) &&
            (iVar1 != *(int *)(iVar8 + 0x3d8 + iVar6))) &&
           (*(char *)(iVar8 + 0x3b1 + iVar6) != '\0')) {
          puVar5 = (undefined4 *)FUN_004d7870(local_8,uVar7 & 0xffff);
          FUN_004d8800(&local_10,*puVar5,puVar5[1]);
          (**(code **)(**(int **)(param_1 + 0x1a) + 0x18))(local_10,local_c);
          (**(code **)(**(int **)(param_1 + 0x1a) + 0x10))(0);
          iVar6 = DAT_00ab27b4;
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x4b2;
      } while ((int)uVar7 < DAT_00877690);
      return 0;
    }
  }
  else {
    puVar3 = *(uint **)(*(int *)(param_1 + 0x22) + 4);
    while (puVar3 != (uint *)0x0) {
      puVar2 = (uint *)puVar3[2];
      uVar7 = *puVar3;
      puVar3 = puVar2;
      if (uVar7 != 0) {
        puVar5 = (undefined4 *)FUN_004d7870(local_8,uVar7 & 0xffff);
        FUN_004d8800(&local_10,*puVar5,puVar5[1]);
        (**(code **)(**(int **)(param_1 + 0x1a + ((int)uVar7 >> 0x10) * 4) + 0x18))
                  (local_10,local_c);
        (**(code **)(**(int **)(param_1 + 0x1a + ((int)uVar7 >> 0x10) * 4) + 0x10))(0);
      }
    }
  }
  return 0;
}


