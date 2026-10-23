// FUN_00662870 @ 662870 size=689

void __fastcall FUN_00662870(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar7;
  char *in_stack_ffffffd8;
  undefined4 uVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *piStack_c;
  int *apiStack_8 [2];
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x8e) + 4))();
  if ((iVar3 < *(int *)(param_1 + 0xd6)) && (0 < *(int *)(param_1 + 0xce))) {
    puVar1 = *(undefined4 **)(param_1 + 0xe2);
    while (puVar1 != (undefined4 *)0x0) {
      uVar8 = 0x6628c0;
      FUN_00428eb0(apiStack_8);
      puVar10 = &DAT_0088ebf8;
      uVar7 = 0x6628d7;
      FUN_00446d10(&DAT_0088f28c);
      uVar4 = FUN_00526b00();
      FUN_00449290(apiStack_8);
      FUN_00667670();
      FUN_00462100(in_stack_ffffffcc,uVar7,uVar4,in_stack_ffffffd8,uVar8,puVar10);
      piVar5 = (int *)FUN_004e9370(*puVar1);
      iVar3 = *(int *)(param_1 + 10);
      uVar4 = (**(code **)(*piVar5 + 0xc))();
      uVar4 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar4);
      in_stack_ffffffd8 = s_NAVAL___s___Constructing_a_new_A_00867408;
      FUN_00458570(s_NAVAL___s___Constructing_a_new_A_00867408,uVar4);
      puVar1 = (undefined4 *)puVar1[2];
      iVar3 = FUN_00428ee0(apiStack_8);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -0x14;
      }
      FUN_006aa000(iVar3);
      iVar3 = FUN_00428ee0(apiStack_8);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -0x14;
      }
      FUN_00528270(iVar3);
    }
  }
  apiStack_8[0] = *(int **)(param_1 + 0x92);
  do {
    while( true ) {
      do {
        if (apiStack_8[0] == (int *)0x0) {
          return;
        }
        piVar5 = (int *)*apiStack_8[0];
        apiStack_8[0] = (int *)apiStack_8[0][2];
        uVar4 = FUN_00664880(piVar5,0);
        piVar6 = (int *)FUN_00663d30(uVar4);
      } while (piVar6 == (int *)0x0);
      if (piVar6[3] == piVar5[3]) break;
      iVar3 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
      if (((iVar3 < 2) || (iVar3 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))(), 4 < iVar3)) &&
         ((cVar2 = (**(code **)(*(int *)((int)piVar5 + 0x22e) + 8))(), cVar2 != '\0' &&
          (iVar3 = (**(code **)(piVar5[0x47] + 4))(), iVar3 == 0)))) {
        uVar4 = FUN_004e9370(piVar6[3],0);
        FUN_006aaee0(piVar5,uVar4,iVar3);
      }
    }
    while( true ) {
      iVar3 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
      if (((1 < iVar3) && (iVar3 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))(), iVar3 < 5)) ||
         (iVar3 = (**(code **)(*(int *)((int)piVar6 + 0x22) + 4))(), iVar3 < 1)) break;
      iVar3 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
      if (iVar3 < 4) {
        piStack_c = (int *)FUN_00666510(piVar6,0,1,1);
        if (piStack_c == (int *)0x0) break;
        iVar3 = *(int *)(param_1 + 10);
        uVar4 = (**(code **)(*piVar5 + 0xc))();
        uVar4 = (**(code **)(*piVar6 + 0xc))(uVar4);
        uVar4 = (**(code **)(*piStack_c + 0xc))(uVar4);
        uVar4 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar4);
        FUN_00458570(s_NAVAL___s_transfers__s_from_base_0086738c,uVar4);
        piVar9 = piVar5;
      }
      else {
        piStack_c = (int *)FUN_00666510(piVar5,1,0,0);
        if (piStack_c == (int *)0x0) break;
        iVar3 = *(int *)(param_1 + 10);
        uVar4 = (**(code **)(*piVar6 + 0xc))();
        uVar4 = (**(code **)(*piVar5 + 0xc))(uVar4);
        uVar4 = (**(code **)(*piStack_c + 0xc))(uVar4);
        uVar4 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar4);
        FUN_00458570(s_NAVAL___s_transfers__s_from_defe_008673c8,uVar4);
        piVar9 = piVar6;
      }
      FUN_0045e6c0(piVar9,piStack_c);
    }
  } while( true );
}


