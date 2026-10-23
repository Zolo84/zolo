// FUN_0058ca70 @ 58ca70 size=206

void __fastcall FUN_0058ca70(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00405ad0(s_______________00857f8c);
  FUN_00405ad0(&DAT_00857f84);
  FUN_00405ad0(s_______________00857f8c);
  FUN_00405ad0(s_Side_A___00857f78);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x22) + 0x22) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    uVar3 = (**(code **)(*(int *)((&DAT_0089cad8)[*piVar2] + 0xe) + 0xc))();
    FUN_00405ad0(&DAT_0083f5a0,uVar3);
    piVar2 = piVar1;
  }
  FUN_00405ad0(s_______________00857f8c);
  FUN_00405ad0(s_Side_B___00857f6c);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x26) + 0x22) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    uVar3 = (**(code **)(*(int *)((&DAT_0089cad8)[*piVar2] + 0xe) + 0xc))();
    FUN_00405ad0(&DAT_0083f5a0,uVar3);
    piVar2 = piVar1;
  }
  FUN_00405ad0(s_______________00857f8c);
  return;
}


