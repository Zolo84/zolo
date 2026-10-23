// FUN_007a68db @ 7a68db size=139

void FUN_007a68db(char *param_1)

{
  char *_Str;
  size_t sVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007aeb09(2);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar1 = _strlen(param_1);
    FUN_007aebef(2,param_1,sVar1);
    FUN_007aebef(2,&DAT_00800594,2);
  }
  piVar2 = (int *)FUN_007aadca();
  iVar3 = DAT_0087d5f4;
  if ((-1 < *piVar2) &&
     (piVar2 = (int *)FUN_007aadca(), iVar3 = DAT_0087d5f4, *piVar2 < DAT_0087d5f4)) {
    piVar2 = (int *)FUN_007aadca();
    iVar3 = *piVar2;
  }
  _Str = (&PTR_s_No_error_0087d544)[iVar3];
  sVar1 = _strlen(_Str);
  FUN_007aebef(2,_Str,sVar1);
  FUN_007aebef(2,&DAT_00839650,1);
  FUN_007aeb68(2);
  return;
}


