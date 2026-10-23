// FUN_0057c680 @ 57c680 size=51

bool __fastcall FUN_0057c680(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xbc4);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  *(undefined4 *)(param_1 + 0x388) = 0;
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,&DAT_00857220,&LAB_0057ca70,param_1,1);
  return iVar2 == 0;
}


