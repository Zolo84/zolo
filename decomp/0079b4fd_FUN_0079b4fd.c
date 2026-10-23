// FUN_0079b4fd @ 79b4fd size=70

int __thiscall FUN_0079b4fd(int param_1,size_t param_2,char param_3)

{
  char cVar1;
  
  if (param_2 == DAT_007f33d8) {
    FUN_00798b7d();
  }
  cVar1 = FUN_00674e40(param_2,1);
  if (cVar1 != '\0') {
    _memset(*(void **)(param_1 + 4),(int)param_3,param_2);
    *(size_t *)(param_1 + 8) = param_2;
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2) = 0;
  }
  return param_1;
}


