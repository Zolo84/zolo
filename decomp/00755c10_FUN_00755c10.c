// FUN_00755c10 @ 755c10 size=426

void __fastcall FUN_00755c10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar10 = *(int **)(iVar1 + 8);
  piVar9 = (int *)*piVar10;
  if (piVar9 != piVar10) {
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      FUN_00745a60(piVar9[0x21]);
      local_20 = &DAT_007f0c98;
      if ((undefined4 *)piVar9[10] != (undefined4 *)0x0) {
        local_20 = (undefined4 *)piVar9[10];
      }
      puVar8 = (undefined4 *)piVar9[6];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = &DAT_007f0c98;
      }
      puVar7 = (undefined4 *)piVar9[0x13];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = &DAT_007f0c98;
      }
      uVar3 = piVar9[0x1b];
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = local_1c;
      puVar6 = (undefined4 *)FUN_007545d0(piVar9[0x22]);
      uVar11 = *puVar6;
      puVar6 = (undefined4 *)FUN_007545d0(uVar3);
      FUN_00756ec0(uVar2,uVar4,uVar4,0xf,*puVar6,uVar11,puVar7,puVar8,local_20,uVar12);
      if (piVar9 == (undefined4 *)0xffffff90) {
        local_20 = (undefined4 *)0x0;
      }
      else {
        local_20 = piVar9 + 0x1d;
      }
      piVar10 = *(int **)local_20[1];
      if (piVar10 != (int *)local_20[1]) {
        do {
          iVar5 = piVar10[4];
          uVar2 = *(undefined4 *)(param_1 + 0x28);
          FUN_00745a60(*(undefined4 *)(iVar5 + 0x28));
          FUN_00745a60(*(undefined4 *)(iVar5 + 0x24));
          FUN_007570b0(uVar2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x20),0x11,
                       local_10,local_14);
          puVar8 = (undefined4 *)piVar10[2];
          if (puVar8 == DAT_00d4bdfc) {
            puVar8 = (undefined4 *)piVar10[1];
            if (piVar10 == (undefined4 *)puVar8[2]) {
              do {
                piVar10 = puVar8;
                puVar8 = (undefined4 *)piVar10[1];
              } while (piVar10 == (undefined4 *)puVar8[2]);
            }
            if ((undefined4 *)piVar10[2] != puVar8) {
              piVar10 = puVar8;
            }
          }
          else {
            for (puVar7 = (undefined4 *)*puVar8; piVar10 = puVar8, puVar7 != DAT_00d4bdfc;
                puVar7 = (undefined4 *)*puVar7) {
              puVar8 = puVar7;
            }
          }
        } while (piVar10 != (undefined4 *)local_20[1]);
      }
      puVar8 = (undefined4 *)piVar9[2];
      if (puVar8 == DAT_00d4be04) {
        puVar8 = (undefined4 *)piVar9[1];
        if (piVar9 == (undefined4 *)puVar8[2]) {
          do {
            piVar9 = puVar8;
            puVar8 = (undefined4 *)piVar9[1];
          } while (piVar9 == (undefined4 *)puVar8[2]);
        }
        if ((undefined4 *)piVar9[2] != puVar8) {
          piVar9 = puVar8;
        }
      }
      else {
        for (puVar7 = (undefined4 *)*puVar8; piVar9 = puVar8, puVar7 != DAT_00d4be04;
            puVar7 = (undefined4 *)*puVar7) {
          puVar8 = puVar7;
        }
      }
    } while (piVar9 != *(undefined4 **)(iVar1 + 8));
  }
  return;
}


