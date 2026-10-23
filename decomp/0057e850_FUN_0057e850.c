// FUN_0057e850 @ 57e850 size=208

void __thiscall FUN_0057e850(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x10 + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x210 + param_2 * 4) != 0) {
      iVar4 = 0x40;
      pcVar3 = (char *)(param_1 + 0x8018 + param_2 * 6);
      do {
        if (*(int *)(pcVar3 + -4) == 2) {
          piVar1 = *(int **)(param_1 + 0x10 + param_2 * 4);
          if (*pcVar3 == '\0') {
            iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,0);
          }
          else {
            iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,1);
          }
          if (iVar2 != 0) {
            FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_008572bc,0xd8,iVar2);
          }
        }
        pcVar3 = pcVar3 + 0x300;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    if ((*(char *)(param_1 + 0x8018 + param_2 * 6) == '\0') ||
       (*(int *)(param_1 + param_2 * 6 + 0x8014) != 2)) {
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,0);
    }
    else {
      iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,1);
    }
    if (iVar4 != 0) {
      FUN_0057f100(s_C__Dev_HoI2_Projects_Darkest_Hou_008572bc,0xe3,iVar4);
    }
  }
  return;
}


