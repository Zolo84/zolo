// FUN_004148b0 @ 4148b0 size=98

undefined4 FUN_004148b0(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_007a76c0((int)*(char *)(iVar1 + 4));
    iVar2 = FUN_007a76c0((int)*param_2);
    if (iVar2 == iVar1) {
      if (param_2[1] == '\0') {
        return *(undefined4 *)*param_1;
      }
      param_2 = param_2 + 1;
      param_1 = (int *)(*param_1 + 0xe);
    }
    else if (iVar2 == iVar1 || iVar2 - iVar1 < 0) {
      param_1 = (int *)(*param_1 + 6);
    }
    else {
      param_1 = (int *)(*param_1 + 10);
    }
    iVar1 = *param_1;
  } while( true );
}


