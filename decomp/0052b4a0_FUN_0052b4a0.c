// FUN_0052b4a0 @ 52b4a0 size=108

undefined4 __fastcall FUN_0052b4a0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = (**(code **)(*param_1 + 4))();
  if (iVar3 != 0) {
    piVar5 = (int *)param_1[1];
    piVar1 = piVar5;
    do {
      if (piVar1 == (int *)0x0) {
        if (piVar5 == (int *)0x0) {
          return 1;
        }
        while( true ) {
          piVar1 = (int *)piVar5[2];
          iVar3 = *piVar5;
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x11c) + 4))();
          if (iVar4 != 0) {
            return 0;
          }
          cVar2 = (**(code **)(*(int *)(iVar3 + 0x22e) + 8))();
          if (cVar2 == '\0') break;
          piVar5 = piVar1;
          if (piVar1 == (int *)0x0) {
            return 1;
          }
        }
        return 0;
      }
      iVar3 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(*piVar5 + 0xc) == *(int *)(iVar3 + 0xc));
  }
  return 0;
}


