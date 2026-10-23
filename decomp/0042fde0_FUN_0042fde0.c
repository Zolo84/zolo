// FUN_0042fde0 @ 42fde0 size=680

void FUN_0042fde0(void)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(DAT_00d685a6 + 0x277d) == '\0') {
    bVar2 = false;
    FUN_00405ad0(&DAT_0083b84c);
    FUN_00429a00(s_Scenario_Validation__provinces___0083b824);
    iVar6 = 0;
    if (0 < DAT_00877690) {
      do {
        piVar3 = DAT_00ab27b4;
        iVar5 = iVar6 * 0x4b2;
        piVar1 = (int *)((int)DAT_00ab27b4 + iVar5);
        if (*(char *)((int)DAT_00ab27b4 + iVar5 + 0x180) == '\0') {
          if ((piVar1[0x95] == 8) || (piVar1[0x95] == 9)) {
            if (piVar1[0xf6] != 0) {
              uVar4 = (**(code **)(*(int *)(piVar1[0xf6] + 0xe) + 0xc))();
              uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
              FUN_00429a00(s_ERROR___Invalid__not_land__provi_0083b720,iVar6,uVar4);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
              bVar2 = true;
            }
            piVar1 = (int *)((int)DAT_00ab27b4 + iVar5);
            iVar5 = *(int *)((int)DAT_00ab27b4 + iVar5 + 0x3d4);
            if (iVar5 == 0) goto LAB_00430047;
            uVar4 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
            uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
            FUN_00429a00(s_ERROR___Invalid__not_land__provi_0083b6d4,iVar6,uVar4);
          }
          else if (iVar6 == 0) {
            if (DAT_00ab27b4[0xf6] != 0) {
              uVar4 = (**(code **)(*(int *)(DAT_00ab27b4[0xf6] + 0xe) + 0xc))();
              uVar4 = (**(code **)(*piVar3 + 0xc))(uVar4);
              FUN_00429a00(s_ERROR___Invalid__reserved__provi_0083b684,0,uVar4);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
              bVar2 = true;
            }
            piVar1 = DAT_00ab27b4;
            if (DAT_00ab27b4[0xf5] == 0) goto LAB_00430047;
            uVar4 = (**(code **)(*(int *)(DAT_00ab27b4[0xf5] + 0xe) + 0xc))();
            uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
            FUN_00429a00(s_ERROR___Invalid__reserved__provi_0083b638,0,uVar4);
          }
          else {
            iVar5 = piVar1[0xf5];
            if (iVar5 != 0) {
              if (piVar1[0xf6] == 0) {
                uVar4 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
                uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
                FUN_00429a00(s_ERROR___Province__d___s__is_spec_0083b5d8,iVar6,uVar4);
                goto LAB_0043003a;
              }
              if (iVar5 != 0) goto LAB_00430047;
            }
            if (piVar1[0xf6] == 0) {
              if ((iVar5 != 0) || (piVar1[0xf6] != 0)) goto LAB_00430047;
              uVar4 = (**(code **)(*piVar1 + 0xc))();
              FUN_00429a00(s_ERROR___Province__d___s__is_a_la_0083b52c,iVar6,uVar4);
            }
            else {
              uVar4 = (**(code **)(*(int *)(piVar1[0xf6] + 0xe) + 0xc))();
              uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
              FUN_00429a00(s_ERROR___Province__d___s__is_spec_0083b578,iVar6,uVar4);
            }
          }
LAB_0043003a:
          bVar2 = true;
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        else {
          if (piVar1[0xf6] != 0) {
            uVar4 = (**(code **)(*(int *)(piVar1[0xf6] + 0xe) + 0xc))();
            uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
            FUN_00429a00(s_ERROR___Invalid__ignored_for_sce_0083b7c8,iVar6,uVar4);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            bVar2 = true;
          }
          piVar1 = (int *)((int)DAT_00ab27b4 + iVar5);
          iVar5 = *(int *)((int)DAT_00ab27b4 + iVar5 + 0x3d4);
          if (iVar5 != 0) {
            uVar4 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))();
            uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
            FUN_00429a00(s_ERROR___Invalid__ignored_for_sce_0083b770,iVar6,uVar4);
            goto LAB_0043003a;
          }
        }
LAB_00430047:
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_00877690);
      if (bVar2) {
        FUN_00429a50(s_Scenario_files_had_errors__Check_0083b4cc);
        FUN_00429a00(s_Scenario_Validation_End_0083b4b0);
        return;
      }
    }
    FUN_00429a00(s_Done__No_errors_found__0083b494);
  }
  return;
}


