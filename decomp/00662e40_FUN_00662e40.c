// FUN_00662e40 @ 662e40 size=567

void __fastcall FUN_00662e40(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_stack_ffffffc4;
  undefined4 uVar9;
  char *in_stack_ffffffd0;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 local_8 [8];
  
  piVar1 = *(int **)((int)param_1 + 0xba);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    iVar8 = 0;
    piVar5 = *(int **)((int)piVar2 + 0x26);
    if (*(int **)((int)piVar2 + 0x26) != (int *)0x0) {
      do {
        piVar7 = piVar5 + 2;
        if ((*(int *)(*piVar5 + 0x134) < 0x1c) || (0x1d < *(int *)(*piVar5 + 0x134))) {
          iVar8 = iVar8 + 1;
        }
        piVar5 = (int *)*piVar7;
      } while ((int *)*piVar7 != (int *)0x0);
      if (0 < iVar8) {
        piVar5 = (int *)FUN_00663d30(piVar2[3]);
        if (piVar5 == (int *)0x0) {
          uVar10 = 0x662eba;
          FUN_00428eb0(local_8);
          puVar11 = &DAT_0088ebf8;
          uVar9 = 0x662ed1;
          FUN_00446d10(&DAT_0088f28c);
          uVar6 = FUN_00516300();
          FUN_00449290(local_8);
          FUN_00667670();
          FUN_00462100(in_stack_ffffffc4,uVar9,uVar6,in_stack_ffffffd0,uVar10,puVar11);
          iVar8 = FUN_00428ee0(local_8);
          if (iVar8 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)(iVar8 + -0x14);
          }
          piVar7 = (int *)FUN_0051b230();
          iVar8 = *(int *)((int)param_1 + 10);
          uVar6 = (**(code **)(*piVar7 + 0xc))();
          uVar6 = (**(code **)(*(int *)(iVar8 + 0xe) + 0xc))(uVar6);
          in_stack_ffffffd0 = s_NAVAL___s___Constructing_a_new_e_008674c0;
          FUN_00458570(s_NAVAL___s___Constructing_a_new_e_008674c0,uVar6);
          (**(code **)(*param_1 + 0x1c8))(piVar5);
          if (piVar5 == (int *)0x0) goto LAB_00662fca;
        }
        if (piVar5 != piVar2) {
          piVar7 = *(int **)((int)piVar2 + 0x26);
          while (piVar7 != (int *)0x0) {
            piVar3 = (int *)*piVar7;
            piVar7 = (int *)piVar7[2];
            if ((piVar3[0x4d] < 0x1c) || (0x1d < piVar3[0x4d])) {
              iVar8 = *(int *)((int)param_1 + 10);
              uVar6 = (**(code **)(*piVar5 + 0xc))();
              uVar6 = (**(code **)(*piVar2 + 0xc))(uVar6);
              uVar6 = (**(code **)(*piVar3 + 0xc))(uVar6);
              uVar6 = (**(code **)(*(int *)(iVar8 + 0xe) + 0xc))(uVar6);
              in_stack_ffffffc4 = 0x662fad;
              FUN_00458570(s_NAVAL___s_transfers__s_from_wolf_0086754c,uVar6);
              in_stack_ffffffd0 = (char *)0x662fbe;
              FUN_0045e6c0(piVar5,piVar3);
            }
          }
        }
      }
    }
LAB_00662fca:
    piVar5 = (int *)FUN_00663d30(piVar2[3]);
    if (piVar5 != (int *)0x0) {
      piVar7 = *(int **)((int)piVar5 + 0x26);
      while ((piVar7 != (int *)0x0 &&
             (iVar8 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))(), iVar8 < 10))) {
        piVar3 = (int *)piVar7[2];
        piVar4 = (int *)*piVar7;
        piVar7 = piVar3;
        if ((0x1b < piVar4[0x4d]) && (piVar4[0x4d] < 0x1e)) {
          iVar8 = *(int *)((int)param_1 + 10);
          uVar6 = (**(code **)(*piVar2 + 0xc))();
          uVar6 = (**(code **)(*piVar5 + 0xc))(uVar6);
          uVar6 = (**(code **)(*piVar4 + 0xc))(uVar6);
          uVar6 = (**(code **)(*(int *)(iVar8 + 0xe) + 0xc))(uVar6);
          in_stack_ffffffc4 = 0x663046;
          FUN_00458570(s_NAVAL___s_transfers__s_from_othe_0086750c,uVar6);
          in_stack_ffffffd0 = (char *)0x663057;
          FUN_0045e6c0(piVar2,piVar4);
        }
      }
    }
  } while( true );
}


