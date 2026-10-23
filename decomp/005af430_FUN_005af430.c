// FUN_005af430 @ 5af430 size=242

int FUN_005af430(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (param_2[0x99] != 2) {
    (**(code **)(*param_2 + 0x30))();
    iVar1 = *(int *)(param_1 + 0x1aa);
    if (iVar1 != 0) {
      piVar5 = *(int **)(iVar1 + 8);
joined_r0x005af465:
      do {
        do {
          if (piVar5 == (int *)0x0) {
            piVar5 = *(int **)(iVar1 + 8);
            if (*(int **)(iVar1 + 8) == (int *)0x0) {
              return 0;
            }
            while( true ) {
              piVar2 = (int *)piVar5[1];
              piVar5 = (int *)*piVar5;
              iVar1 = piVar5[0x1d];
              if ((((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) &&
                 (cVar4 = (**(code **)(*piVar5 + 0x48))(param_2), cVar4 != '\0')) break;
              piVar5 = piVar2;
              if (piVar2 == (int *)0x0) {
                return 0;
              }
            }
            return piVar5[0x1d];
          }
          piVar2 = (int *)piVar5[1];
          piVar3 = (int *)*piVar5;
          iVar7 = piVar3[0x1d];
          piVar5 = piVar2;
        } while (((iVar7 == 4) || (iVar7 == 5)) || (iVar7 == 6));
        iVar7 = param_2[0x92];
        iVar6 = iVar7;
        (**(code **)(*(int *)piVar3[0x20] + 0xc))(iVar7);
        cVar4 = FUN_00527dc0(iVar6);
        if (cVar4 == '\0') {
          (**(code **)(*(int *)piVar3[0x21] + 0xc))(iVar7);
          cVar4 = FUN_00527dc0(iVar7);
          if (cVar4 == '\0') goto joined_r0x005af465;
        }
        cVar4 = (**(code **)(*piVar3 + 0x48))(param_2);
        if (cVar4 != '\0') {
          return piVar3[0x1d];
        }
      } while( true );
    }
  }
  return 0;
}


