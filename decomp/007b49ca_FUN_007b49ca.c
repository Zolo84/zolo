// FUN_007b49ca @ 7b49ca size=381

undefined4 FUN_007b49ca(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_00dc53d8 == (code *)0x0) {
    iVar1 = FUN_007b50fb();
    if (iVar1 == 0) {
      DAT_00dc53d8 = FUN_007b5131;
    }
    else {
      DAT_00dc53d8 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_00dc53c8 = param_1;
    if (*param_1 != '\0') {
      FUN_007b4b47(&PTR_s_american_0087fe50,0x40,&DAT_00dc53c8);
    }
    DAT_00dc53cc = param_1 + 0x40;
    if ((DAT_00dc53cc != (char *)0x0) && (*DAT_00dc53cc != '\0')) {
      FUN_007b4b47(&PTR_s_america_0087fd98,0x16,&DAT_00dc53cc);
    }
    DAT_00dc53d0 = 0;
    if ((DAT_00dc53c8 != (char *)0x0) && (*DAT_00dc53c8 != '\0')) {
      if ((DAT_00dc53cc == (char *)0x0) || (*DAT_00dc53cc == '\0')) {
        FUN_007b4e2a();
      }
      else {
        FUN_007b4b9f();
      }
      goto LAB_007b4a87;
    }
    if ((DAT_00dc53cc != (char *)0x0) && (*DAT_00dc53cc != '\0')) {
      FUN_007b4f3d();
      goto LAB_007b4a87;
    }
  }
  FUN_007b4ffa();
LAB_007b4a87:
  if ((((DAT_00dc53d0 == 0) || (uVar2 = FUN_007b5014(param_1 + 0x80), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_00dc53b8,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_00dc53b8;
    param_2[1] = (undefined2)DAT_00dc53d4;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_00dc53d8)(DAT_00dc53b8,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_00dc53d8)(DAT_00dc53d4,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_007a8d98(uVar2,param_3 + 0x80,10);
  }
  return 1;
}


