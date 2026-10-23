// FUN_006a9ef0 @ 6a9ef0 size=144

void FUN_006a9ef0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  
  bVar3 = true;
  piVar4 = *(int **)(param_2 + 4);
  do {
    while( true ) {
      do {
        if (piVar4 == (int *)0x0) {
          return;
        }
        piVar1 = (int *)piVar4[2];
        piVar2 = (int *)*piVar4;
        piVar4 = piVar1;
      } while (*(char *)((int)piVar2 + 0x17d) != '\0');
      if ((bVar3) && (*(char *)((int)param_1 + 0xe) != '\0')) break;
LAB_006a9f74:
      bVar3 = false;
    }
    cVar5 = (**(code **)(*piVar2 + 0x28))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*piVar2 + 0x30))();
      if (cVar5 == '\0') {
        uVar6 = (**(code **)(*piVar2 + 0x14))();
        cVar5 = (**(code **)(*param_1 + 0x1c8))(uVar6);
      }
      else {
        uVar6 = (**(code **)(*piVar2 + 0x18))();
        cVar5 = (**(code **)(*param_1 + 0x1b8))(uVar6);
      }
    }
    else {
      uVar6 = (**(code **)(*piVar2 + 0x10))();
      cVar5 = (**(code **)(*param_1 + 0x1a8))(uVar6);
    }
    if (cVar5 == '\0') goto LAB_006a9f74;
    bVar3 = true;
  } while( true );
}


