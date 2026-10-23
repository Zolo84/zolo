// FUN_00745aa0 @ 745aa0 size=486

undefined1 * __thiscall FUN_00745aa0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df431;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = *(undefined1 *)(param_1 + 0x21e);
  if (*(int *)(param_1 + 0x222) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x226) - *(int *)(param_1 + 0x222) >> 4;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  puVar5 = operator_new(iVar4 << 4);
  *(undefined4 **)(param_2 + 4) = puVar5;
  puVar2 = *(undefined4 **)(param_1 + 0x226);
  if (*(undefined4 **)(param_1 + 0x222) != puVar2) {
    puVar10 = *(undefined4 **)(param_1 + 0x222) + 1;
    do {
      local_4 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = *(undefined1 *)(puVar10 + -1);
        puVar5[1] = 0;
        *(undefined1 *)puVar5 = uVar1;
        puVar5[2] = 0;
        puVar5[3] = 0;
        uVar9 = DAT_007f33d8;
        uVar6 = puVar10[1];
        uVar8 = uVar6;
        if (DAT_007f33d8 < uVar6) {
          uVar8 = DAT_007f33d8;
        }
        if (puVar5 == puVar10 + -1) {
          if (uVar8 != 0) {
            FUN_00798da9();
          }
          FUN_00675ee0();
          uVar6 = puVar5[2] - uVar8;
          if (uVar6 < uVar9) {
            uVar9 = uVar6;
          }
          if (uVar9 != 0) {
            FUN_007a9270(puVar5[1] + uVar8,puVar5[1] + uVar8 + uVar9,uVar6 - uVar9);
            iVar4 = puVar5[2];
            cVar3 = FUN_00674e40(iVar4 - uVar9,0);
            if (cVar3 != '\0') {
              FUN_00674e20(iVar4 - uVar9);
            }
          }
          FUN_00742780(0,0);
        }
        else {
          if ((uVar8 != 0) && (uVar8 == uVar6)) {
            puVar7 = (undefined4 *)*puVar10;
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = &DAT_007f0c98;
            }
            if (*(byte *)((int)puVar7 + -1) < 0xfe) {
              FUN_00674910(1);
              puVar7 = (undefined4 *)*puVar10;
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = &DAT_007f0c98;
              }
              puVar5[1] = puVar7;
              puVar5[2] = puVar10[1];
              puVar5[3] = puVar10[2];
              *(char *)((int)puVar7 + -1) = *(char *)((int)puVar7 + -1) + '\x01';
              goto LAB_00745c40;
            }
          }
          cVar3 = FUN_00674e40(uVar8,1);
          if (cVar3 != '\0') {
            puVar7 = &DAT_007f0c98;
            if ((undefined4 *)*puVar10 != (undefined4 *)0x0) {
              puVar7 = (undefined4 *)*puVar10;
            }
            puVar11 = (undefined4 *)puVar5[1];
            for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar11 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            FUN_00674e20(uVar8);
          }
        }
      }
LAB_00745c40:
      puVar5 = puVar5 + 4;
      puVar7 = puVar10 + 3;
      puVar10 = puVar10 + 4;
    } while (puVar7 != puVar2);
  }
  *(undefined4 **)(param_2 + 8) = puVar5;
  *(undefined4 **)(param_2 + 0xc) = puVar5;
  ExceptionList = local_c;
  return param_2;
}


