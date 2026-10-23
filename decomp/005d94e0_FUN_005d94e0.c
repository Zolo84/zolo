// FUN_005d94e0 @ 5d94e0 size=626

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d94e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStack_2c;
  undefined **ppuStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd9c0;
  local_c = ExceptionList;
  if ((*(char *)(*(int *)(param_1 + 0x90) + 0x4514) == '\0') &&
     (ExceptionList = &local_c,
     iVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4))(), iVar7 != 0)) {
    iVar7 = *(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x90) + 0x21e5a) + 4) + 0xc);
    *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x4514) = 1;
    piVar1 = *(int **)(*(int *)(param_1 + 0x90) + 0x4508);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      if (((piVar2[3] == iVar7) && (iVar8 = (**(code **)(*piVar2 + 0xac))(), iVar8 < 1)) &&
         (*(char *)((int)piVar2 + 0x17d) == '\0')) {
        iStack_2c = 0;
        iVar8 = (**(code **)(*piVar2 + 0x84))();
        piVar6 = (int *)0x0;
        puVar5 = *(undefined4 **)(iVar8 + 4);
        while (puVar5 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar5[2];
          piVar9 = (int *)*puVar5;
          puVar5 = puVar3;
          if ((piVar9 != piVar2) && (iVar8 = (**(code **)(*piVar9 + 0xac))(), iStack_2c < iVar8)) {
            iStack_2c = (**(code **)(*piVar9 + 0xac))();
            piVar6 = piVar9;
          }
        }
        FUN_00405ad0(s_Interface__Unit___d_is_killed_ca_0085b75c,*(undefined4 *)((int)piVar2 + 0x1a)
                    );
        if (piVar6 == (int *)0x0) {
          FUN_00460000(piVar2);
        }
        else {
          piStack_1c = (int *)0x0;
          piStack_18 = (int *)0x0;
          iStack_14 = 0;
          uStack_10 = 0;
          ppuStack_20 = &PTR_FUN_007ecebc;
          uStack_4 = 0;
          piVar9 = operator_new(0xe);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            *piVar9 = (int)piVar6;
            piVar9[1] = 0;
            piVar9[2] = 0;
            *(undefined1 *)(piVar9 + 3) = 0;
          }
          piVar6 = piVar9;
          if (iStack_14 != 0) {
            _DAT_00000008 = piVar9;
            piVar6 = piStack_1c;
          }
          piStack_1c = piVar6;
          piStack_18 = piVar9;
          iStack_14 = iStack_14 + 1;
          piStack_18 = operator_new(0xe);
          if (piStack_18 == (int *)0x0) {
            piStack_18 = (int *)0x0;
          }
          else {
            *piStack_18 = (int)piVar2;
            piStack_18[1] = (int)piVar9;
            piStack_18[2] = 0;
            *(undefined1 *)(piStack_18 + 3) = 0;
          }
          piVar2 = piStack_18;
          if (iStack_14 != 0) {
            piVar9[2] = (int)piStack_18;
            piVar2 = piStack_1c;
          }
          piStack_1c = piVar2;
          iStack_14 = iStack_14 + 1;
          FUN_00461cd0(&ppuStack_20);
          (*(code *)ppuStack_20[4])();
          ppuStack_20 = &PTR_FUN_007ecebc;
          uStack_4 = 1;
          FUN_0052ac00();
          uStack_4 = 0xffffffff;
          FUN_00527230();
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x90);
    *(undefined1 *)(iVar7 + 0x4514) = 0;
    iVar8 = *(int *)(iVar7 + 0x4508);
    while (iVar8 != 0) {
      if (*(char *)(iVar8 + 0xc) == '\0') {
        iVar8 = *(int *)(iVar8 + 8);
      }
      else {
        iVar4 = *(int *)(iVar8 + 8);
        (**(code **)(*(int *)(iVar7 + 0x4504) + 0x1c))(iVar8);
        iVar8 = iVar4;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


