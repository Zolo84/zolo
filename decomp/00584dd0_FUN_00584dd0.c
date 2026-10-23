// FUN_00584dd0 @ 584dd0 size=69

undefined1 __fastcall FUN_00584dd0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)((int)param_1 + 0x16) == '\0') && (param_1[6] == 0)) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x22) + 4))();
    if (iVar2 < 2) {
      cVar1 = (**(code **)(*param_1 + 0x14))();
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x18))();
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*param_1 + 0x1c))();
          if (cVar1 == '\0') {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


