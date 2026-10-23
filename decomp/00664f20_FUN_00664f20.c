// FUN_00664f20 @ 664f20 size=559

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00664f20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined **ppuStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d39c8;
  ppvVar5 = &local_c;
  piVar4 = *(int **)(param_1 + 0x92);
  local_c = ExceptionList;
joined_r0x00664f43:
  do {
    ExceptionList = ppvVar5;
    if (piVar4 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar9 = (int *)piVar4[2];
    piVar2 = (int *)*piVar4;
    piVar4 = piVar9;
    if (*(int **)(param_1 + 0xe2) != (int *)0x0) {
      piVar9 = *(int **)(param_1 + 0xe2);
      do {
        piVar1 = piVar9 + 2;
        if (piVar2[3] == *piVar9) {
          cVar6 = FUN_0050bde0();
          if ((cVar6 != '\0') || (piVar2[0x99] == 0)) {
            iVar7 = (**(code **)(*(int *)(param_1 + 0x8e) + 4))();
            ppvVar5 = ExceptionList;
            if (iVar7 != 1) {
              uVar8 = FUN_00664880(piVar2,0);
              iVar7 = FUN_00663d30(uVar8);
              ppvVar5 = ExceptionList;
              if (iVar7 != 0) {
                FUN_00528280(piVar2);
                FUN_00528280(piVar2);
                FUN_00524610(0);
                piStack_1c = (int *)0x0;
                piStack_18 = (int *)0x0;
                iStack_14 = 0;
                uStack_10 = 0;
                ppuStack_20 = &PTR_FUN_007e4c84;
                uStack_4 = 0;
                piStack_18 = operator_new(0xe);
                if (piStack_18 == (int *)0x0) {
                  piStack_18 = (int *)0x0;
                }
                else {
                  *piStack_18 = (int)piVar2;
                  piStack_18[1] = 0;
                  piStack_18[2] = 0;
                  *(undefined1 *)(piStack_18 + 3) = 0;
                }
                piVar9 = piStack_18;
                if (iStack_14 != 0) {
                  _DAT_00000008 = piStack_18;
                  piVar9 = piStack_1c;
                }
                piStack_1c = piVar9;
                iStack_14 = iStack_14 + 1;
                piVar9 = (int *)FUN_0051b230();
                iVar3 = *(int *)(param_1 + 10);
                uVar8 = (**(code **)(*piVar9 + 0xc))();
                uVar8 = (**(code **)(*piVar2 + 0xc))(uVar8);
                uVar8 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar8);
                FUN_00458570(s_NAVAL___s_merges__s_in__s_with_t_00867804,uVar8);
                FUN_006aa780(iVar7,&ppuStack_20);
                (*(code *)ppuStack_20[4])();
                uStack_4 = 0xffffffff;
                FUN_00527230();
                ppvVar5 = ExceptionList;
              }
            }
            goto joined_r0x00664f43;
          }
          break;
        }
        piVar9 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
    }
    cVar6 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))();
    if ((cVar6 == '\0') || (iVar7 = (**(code **)(piVar2[0x47] + 4))(), iVar7 != 0)) {
      iVar7 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
      ppvVar5 = ExceptionList;
      if (iVar7 < 1) {
        FUN_00460000(piVar2);
        ppvVar5 = ExceptionList;
      }
    }
    else {
      uVar8 = FUN_00664880(piVar2,0);
      piVar9 = (int *)FUN_004e9370(uVar8);
      iVar7 = *(int *)(param_1 + 10);
      uVar8 = (**(code **)(*piVar9 + 0xc))();
      uVar8 = (**(code **)(*piVar2 + 0xc))(uVar8);
      uVar8 = (**(code **)(*(int *)(iVar7 + 0xe) + 0xc))(uVar8);
      FUN_00458570(s_NAVAL___s_sends__s_to_base_in__s_00867834,uVar8);
      FUN_006aaff0(piVar2,piVar9,0);
      ppvVar5 = ExceptionList;
    }
  } while( true );
}


