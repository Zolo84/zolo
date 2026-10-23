// FUN_00697ca0 @ 697ca0 size=130

undefined4 __thiscall FUN_00697ca0(int *param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x17d) != '\0') {
    return 0;
  }
  cVar1 = FUN_006a8720();
  if (cVar1 == '\0') {
    FUN_0050bca0(param_2);
  }
  FUN_006aa000(param_2);
  if (*(char *)(param_2 + 0x17d) != '\0') {
    (**(code **)(*param_1 + 0x1ac))(param_2);
    return 0;
  }
  if (0 < *(int *)(param_2 + 0x298)) {
    (**(code **)(**(int **)((int)param_1 + 0x7e) + 0x1a8))(param_2);
  }
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    FUN_00691d40(5);
  }
  return 1;
}


