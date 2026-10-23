// FUN_006ac830 @ 6ac830 size=70

undefined4 __thiscall FUN_006ac830(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_0044b300(*(undefined4 *)(param_2 + 4));
  if (cVar1 != '\0') {
    FUN_006ac630(param_2);
    return param_1;
  }
  cVar1 = FUN_0044b280(*(undefined4 *)(param_2 + 4));
  if (cVar1 != '\0') {
    FUN_006ac630(param_2);
  }
  return param_1;
}


