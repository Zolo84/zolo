// FUN_00662b30 @ 662b30 size=736

void __fastcall FUN_00662b30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_stack_ffffffbc;
  undefined4 uVar10;
  char *in_stack_ffffffc8;
  int *piVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  int local_1c;
  undefined1 local_8 [8];
  
  piVar4 = *(int **)((int)param_1 + 0xa6);
  do {
    do {
      do {
        if (piVar4 == (int *)0x0) {
          return;
        }
        piVar6 = (int *)piVar4[2];
        piVar11 = (int *)*piVar4;
        cVar5 = FUN_005177f0();
        piVar4 = piVar6;
      } while ((cVar5 != '\0') || (cVar5 = FUN_005173f0(), cVar5 != '\0'));
      local_1c = 0;
      iVar8 = 0;
      iVar9 = 0;
      piVar6 = *(int **)((int)piVar11 + 0x26);
    } while (*(int **)((int)piVar11 + 0x26) == (int *)0x0);
    do {
      piVar2 = piVar6 + 2;
      iVar1 = *(int *)(*piVar6 + 0x134);
      if ((iVar1 == 0x16) || (iVar1 == 0x19)) {
        iVar8 = iVar8 + 1;
      }
      else if (iVar1 == 0x1e) {
        local_1c = local_1c + 1;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      piVar6 = (int *)*piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
    if ((0 < iVar9) || (iVar9 = local_1c - iVar8, local_1c < iVar8)) {
      piVar6 = (int *)FUN_00663d30(piVar11[3]);
      if (piVar6 == (int *)0x0) {
        uVar12 = 0x662beb;
        FUN_00428eb0(local_8);
        puVar13 = &DAT_0088ebf8;
        uVar10 = 0x662c02;
        FUN_00446d10(&DAT_0088f28c);
        uVar7 = FUN_00516300();
        FUN_00449290(local_8);
        FUN_00667670();
        FUN_00462100(in_stack_ffffffbc,uVar10,uVar7,in_stack_ffffffc8,uVar12,puVar13);
        piVar6 = (int *)FUN_0051b230();
        iVar9 = *(int *)((int)param_1 + 10);
        uVar7 = (**(code **)(*piVar6 + 0xc))();
        uVar7 = (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))(uVar7);
        in_stack_ffffffc8 = s_NAVAL___s___Constructing_a_new_e_008674c0;
        FUN_00458570(s_NAVAL___s___Constructing_a_new_e_008674c0,uVar7);
        iVar9 = FUN_00428ee0(local_8);
        if (iVar9 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)(iVar9 + -0x14);
        }
        (**(code **)(*param_1 + 0x1c8))(piVar6);
        if (piVar6 != (int *)0x0) goto LAB_00662c7e;
      }
      else {
LAB_00662c7e:
        if (piVar6 != piVar11) {
          piVar2 = *(int **)((int)piVar11 + 0x26);
          while (piVar2 != (int *)0x0) {
            piVar3 = (int *)*piVar2;
            piVar2 = (int *)piVar2[2];
            switch(piVar3[0x4d]) {
            case 0x15:
            case 0x17:
            case 0x18:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
switchD_00662cae_caseD_15:
              iVar9 = *(int *)((int)param_1 + 10);
              uVar7 = (**(code **)(*piVar6 + 0xc))();
              uVar7 = (**(code **)(*piVar11 + 0xc))(uVar7);
              uVar7 = (**(code **)(*piVar3 + 0xc))(uVar7);
              uVar7 = (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))(uVar7);
              in_stack_ffffffbc = 0x662cf1;
              FUN_00458570(s_NAVAL___s_transfers__s_from_tran_0086747c,uVar7);
              in_stack_ffffffc8 = (char *)0x662d02;
              FUN_0045e6c0(piVar6,piVar3);
              break;
            case 0x16:
            case 0x19:
              local_1c = local_1c + -1;
              if (local_1c < 0) goto switchD_00662cae_caseD_15;
            }
          }
        }
      }
      iVar9 = local_1c - iVar8;
    }
    if (local_1c != iVar8 && SBORROW4(local_1c,iVar8) == iVar9 < 0) {
      piVar6 = (int *)FUN_00663d30(piVar11[3]);
      if (piVar6 == (int *)0x0) {
        cVar5 = (**(code **)(*(int *)((int)piVar11 + 0x22e) + 8))();
        if (cVar5 != '\0') {
          uVar7 = FUN_00664320(piVar11[3]);
          uVar7 = FUN_004e9370(uVar7,piVar6);
          FUN_006aaff0(piVar11,uVar7,piVar6);
          in_stack_ffffffc8 = (char *)piVar11;
        }
      }
      else if (piVar6 != piVar11) {
        piVar2 = *(int **)((int)piVar6 + 0x26);
        while ((piVar2 != (int *)0x0 && (iVar8 < local_1c))) {
          piVar3 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          if ((piVar3[0x4d] == 0x16) || (piVar3[0x4d] == 0x19)) {
            iVar9 = *(int *)((int)param_1 + 10);
            iVar8 = iVar8 + 1;
            uVar7 = (**(code **)(*piVar11 + 0xc))();
            uVar7 = (**(code **)(*piVar6 + 0xc))(uVar7);
            uVar7 = (**(code **)(*piVar3 + 0xc))(uVar7);
            uVar7 = (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))(uVar7);
            in_stack_ffffffbc = 0x662ddf;
            FUN_00458570(s_NAVAL___s_transfers__s_from_othe_00867438,uVar7);
            in_stack_ffffffc8 = (char *)0x662df0;
            FUN_0045e6c0(piVar11,piVar3);
          }
        }
      }
    }
  } while( true );
}


