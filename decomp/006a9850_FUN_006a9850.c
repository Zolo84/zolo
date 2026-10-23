// FUN_006a9850 @ 6a9850 size=55

void __fastcall FUN_006a9850(int *param_1)

{
  int *piVar1;
  
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  piVar1 = *(int **)((int)param_1 + 0x1a);
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    if (*(char *)((int)piVar1 + 0xe) == '\0') {
      (**(code **)(*param_1 + 0x114))(piVar1);
    }
    else {
      (**(code **)(*piVar1 + 0xcc))();
    }
    piVar1 = *(int **)((int)param_1 + 0x1a);
  }
  return;
}


