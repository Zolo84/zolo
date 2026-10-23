// FUN_005917f0 @ 5917f0 size=185

void __fastcall FUN_005917f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  FUN_00591990(param_1[0x4a]);
  cVar3 = (**(code **)(*param_1 + 0x48))();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x4c))();
  }
  piVar1 = param_1 + 0x15a;
  if (((char)param_1[0x15a] == '\0') ||
     (piVar5 = *(int **)(*(int *)((int)param_1 + 0x15a) + 4), piVar5 == (int *)0x0)) {
LAB_00591897:
    param_1[0x19a] = 0;
    *(undefined1 *)piVar1 = 0;
    return;
  }
  do {
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x32) != 0) {
      if (*(int *)(iVar2 + 0x36) < 1) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
      }
      iVar4 = FUN_007a8730(piVar1,**(int **)(iVar2 + 0x2e) + 4);
      if ((iVar4 == 0) && (param_1[0x19a] == *(int *)(iVar2 + 0x4c))) {
        FUN_005918b0(piVar5);
        goto LAB_00591897;
      }
    }
    piVar5 = (int *)piVar5[2];
    if (piVar5 == (int *)0x0) {
      *(undefined1 *)piVar1 = 0;
      param_1[0x19a] = 0;
      return;
    }
  } while( true );
}


