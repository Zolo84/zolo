// FUN_007563c0 @ 7563c0 size=329

void __thiscall
FUN_007563c0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00750450();
  uVar4 = param_2;
  piVar5 = *(int **)(*(int *)(param_1 + 0x24) + 4);
  piVar9 = (int *)*piVar5;
  puVar8 = DAT_00d4c334;
  if (piVar9 != piVar5) {
    do {
      iVar1 = piVar9[4];
      iVar2 = *(int *)(iVar1 + 0x168);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x2c), iVar2 != 0)) {
        param_2 = *(uint *)(iVar2 + 0x28);
        iVar2 = *(int *)(uVar4 + 4);
        local_10 = FUN_0074a090(&param_2);
        iVar3 = *(int *)(uVar4 + 4);
        if ((local_10 == iVar3) || (param_2 < *(uint *)(local_10 + 0xc))) {
          local_c = iVar3;
          piVar5 = &local_c;
        }
        else {
          piVar5 = &local_10;
        }
        puVar8 = DAT_00d4c334;
        if (*piVar5 != iVar2) {
          FUN_00745a60(param_5);
          FUN_00745a60(param_4);
          FUN_007570b0(iVar1 + 0x52,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x20),
                       param_3,local_4,local_8);
          puVar8 = DAT_00d4c334;
        }
      }
      puVar6 = (undefined4 *)piVar9[2];
      if (puVar6 == puVar8) {
        puVar6 = (undefined4 *)piVar9[1];
        if (piVar9 == (undefined4 *)puVar6[2]) {
          do {
            piVar9 = puVar6;
            puVar6 = (undefined4 *)piVar9[1];
          } while (piVar9 == (undefined4 *)puVar6[2]);
        }
        if ((undefined4 *)piVar9[2] != puVar6) {
          piVar9 = puVar6;
        }
      }
      else {
        piVar9 = puVar6;
        for (puVar6 = (undefined4 *)*puVar6; puVar6 != puVar8; puVar6 = (undefined4 *)*puVar6) {
          piVar9 = puVar6;
        }
      }
    } while (piVar9 != *(undefined4 **)(*(int *)(param_1 + 0x24) + 4));
  }
  BVar7 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x24) + 0x24));
  if (BVar7 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return;
}


