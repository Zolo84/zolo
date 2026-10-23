// FUN_007b5014 @ 7b5014 size=102

void FUN_007b5014(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_c [8];
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 != 0) goto LAB_007b5070;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_00dc53d8)(DAT_00dc53d4,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
LAB_007b5070:
  FUN_007a7ab1(param_1);
  return;
}


