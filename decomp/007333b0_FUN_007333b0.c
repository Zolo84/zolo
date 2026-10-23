// FUN_007333b0 @ 7333b0 size=302

undefined4 __thiscall FUN_007333b0(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  *(undefined2 *)(param_1 + 0x112) = 1;
  *(undefined4 *)(param_1 + 0x114) = 1;
  if (param_2[0x103] == 3) {
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar2 = FUN_00535490(), iVar2 != 1) {
              if (iVar2 == 2) {
                return 0;
              }
              piVar4 = (int *)FUN_00534391();
              if (*piVar4 == 4) {
                FUN_005343dc();
                return 0;
              }
            }
            iVar2 = param_2[1];
            if (iVar2 != 0x14e) break;
            uVar1 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined2 *)(param_1 + 0x112) = uVar1;
          }
          if (iVar2 != 0x345) break;
          uVar3 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x114) = uVar3;
        }
        if (iVar2 == 0x3e4) break;
        FUN_00429a00(s_ERROR___Invalid_trigger_entry____00872b28,param_2 + 2,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      uVar5 = 0xffffffff;
      piVar4 = param_2 + 0x104;
      do {
        piVar8 = piVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        piVar8 = (int *)((int)piVar4 + 1);
        iVar2 = *piVar4;
        piVar4 = piVar8;
      } while ((char)iVar2 != '\0');
      uVar5 = ~uVar5;
      puVar7 = (undefined4 *)((int)piVar8 - uVar5);
      puVar9 = (undefined4 *)(param_1 + 0x12);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    } while( true );
  }
  uVar5 = 0xffffffff;
  piVar4 = param_2 + 0x104;
  do {
    piVar8 = piVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    piVar8 = (int *)((int)piVar4 + 1);
    iVar2 = *piVar4;
    piVar4 = piVar8;
  } while ((char)iVar2 != '\0');
  uVar5 = ~uVar5;
  puVar7 = (undefined4 *)((int)piVar8 - uVar5);
  puVar9 = (undefined4 *)(param_1 + 0x12);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  return 0;
}


