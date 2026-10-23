// FUN_00663ba0 @ 663ba0 size=394

void __fastcall FUN_00663ba0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  piVar1 = *(int **)((int)param_1 + 0xe2);
  do {
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)((int)param_1 + 0x7e);
      while (piVar1 != (int *)0x0) {
        piVar3 = (int *)piVar1[2];
        iVar5 = *piVar1;
        iVar6 = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
        piVar1 = piVar3;
        if (*(int *)((int)param_1 + 0xca) < iVar6) {
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x22) + 4))();
          *(int *)((int)param_1 + 0xce) =
               *(int *)((int)param_1 + 0xce) + (iVar5 - *(int *)((int)param_1 + 0xca));
        }
      }
      piVar1 = *(int **)((int)param_1 + 0x6a);
      while (piVar1 != (int *)0x0) {
        piVar3 = (int *)piVar1[2];
        iVar5 = (**(code **)(*(int *)(*piVar1 + 0x22) + 4))();
        *(int *)((int)param_1 + 0xce) = *(int *)((int)param_1 + 0xce) + iVar5;
        piVar1 = piVar3;
      }
      FUN_00662b30();
      FUN_00662870();
      FUN_00662e40();
      return;
    }
    iVar5 = *piVar1;
    iVar6 = *(int *)((int)param_1 + 0x6a);
    do {
      if (iVar6 == 0) {
        FUN_00428eb0(local_8);
        FUN_00446d10(&DAT_0088f28c);
        FUN_00526b00();
        FUN_00449290(local_8);
        FUN_00667670();
        FUN_00462100();
        piVar3 = (int *)FUN_004e9370(*piVar1);
        iVar5 = *(int *)((int)param_1 + 10);
        uVar4 = (**(code **)(*piVar3 + 0xc))();
        uVar4 = (**(code **)(*(int *)(iVar5 + 0xe) + 0xc))(uVar4);
        FUN_00458570(s_NAVAL___s___Constructing_a_new_B_008676ac,uVar4);
        iVar5 = FUN_00428ee0(local_8);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -0x14;
        }
        (**(code **)(*param_1 + 0x1c8))(iVar5);
        break;
      }
      puVar2 = (undefined4 *)FUN_00498700(local_c,0);
    } while (*(int *)(*(int *)*puVar2 + 0xc) != iVar5);
    piVar1 = (int *)piVar1[2];
  } while( true );
}


