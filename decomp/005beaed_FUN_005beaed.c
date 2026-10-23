// FUN_005beaed @ 5beaed size=1925

uint FUN_005beaed(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar4 = *(undefined4 **)(param_1 + 0x4508);
  DAT_00cb9db8 = puVar4;
  if (param_3 == -3) {
    while (DAT_00cb9db8 != (undefined4 *)0x0) {
      DAT_00cb9dc0 = (int *)*DAT_00cb9db8;
      DAT_00cb9db8 = (undefined4 *)DAT_00cb9db8[2];
      cVar3 = (**(code **)(*DAT_00cb9dc0 + 0x30))();
      puVar4 = (undefined4 *)0x0;
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*DAT_00cb9dc0 + 0xc))();
        puVar4 = (undefined4 *)FUN_007a8730(param_2,uVar5);
        if (puVar4 == (undefined4 *)0x0) {
          return 1;
        }
      }
    }
    goto LAB_005bf26a;
  }
  if (param_3 == -2) {
    while (DAT_00cb9db8 != (undefined4 *)0x0) {
      DAT_00cb9dc0 = (int *)*DAT_00cb9db8;
      DAT_00cb9db8 = (undefined4 *)DAT_00cb9db8[2];
      cVar3 = (**(code **)(*DAT_00cb9dc0 + 0x2c))();
      puVar4 = (undefined4 *)0x0;
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*DAT_00cb9dc0 + 0xc))();
        puVar4 = (undefined4 *)FUN_007a8730(param_2,uVar5);
        if (puVar4 == (undefined4 *)0x0) {
          return 1;
        }
      }
    }
    goto LAB_005bf26a;
  }
  if (param_3 == -1) {
    while (DAT_00cb9db8 != (undefined4 *)0x0) {
      DAT_00cb9dc0 = (int *)*DAT_00cb9db8;
      DAT_00cb9db8 = (undefined4 *)DAT_00cb9db8[2];
      cVar3 = (**(code **)(*DAT_00cb9dc0 + 0x28))();
      puVar4 = (undefined4 *)0x0;
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*DAT_00cb9dc0 + 0xc))();
        puVar4 = (undefined4 *)FUN_007a8730(param_2,uVar5);
        if (puVar4 == (undefined4 *)0x0) {
          return 1;
        }
      }
    }
    goto LAB_005bf26a;
  }
  DAT_008591bc = param_3;
  if ((int)(&DAT_00dbd1a2)[param_3] < 0xc) {
    while (DAT_00cb9db8 != (undefined4 *)0x0) {
      DAT_00cb9dc0 = (int *)*DAT_00cb9db8;
      DAT_00cb9db8 = (undefined4 *)DAT_00cb9db8[2];
      cVar3 = (**(code **)(*DAT_00cb9dc0 + 0x28))();
      if (cVar3 != '\0') {
        DAT_00be320c = *(undefined4 **)((int)DAT_00cb9dc0 + 0x26);
        while (DAT_00be320c != (undefined4 *)0x0) {
          piVar1 = (int *)*DAT_00be320c;
          DAT_00be320c = (undefined4 *)DAT_00be320c[2];
          uVar5 = (**(code **)(*piVar1 + 0xc))();
          iVar6 = FUN_007a8730(param_2,uVar5);
          if (iVar6 == 0) {
            return 1;
          }
        }
      }
    }
  }
  else {
    if ((int)(&DAT_00dbd1a2)[param_3] < 0xc) {
LAB_005bee9d:
      bVar2 = false;
    }
    else {
      if (((int)(&DAT_00dbd1a2)[param_3] < 0x15) || ((&DAT_00dbd1a2)[param_3] == 0x8c)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_005bee9d;
      bVar2 = true;
    }
    if (bVar2) {
      while (DAT_00cb9db8 != (undefined4 *)0x0) {
        DAT_00cb9dc0 = (int *)*DAT_00cb9db8;
        DAT_00cb9db8 = (undefined4 *)DAT_00cb9db8[2];
        cVar3 = (**(code **)(*DAT_00cb9dc0 + 0x30))();
        if (cVar3 != '\0') {
          DAT_00be320c = *(undefined4 **)((int)DAT_00cb9dc0 + 0x26);
          while (DAT_00be320c != (undefined4 *)0x0) {
            piVar1 = (int *)*DAT_00be320c;
            DAT_00be320c = (undefined4 *)DAT_00be320c[2];
            uVar5 = (**(code **)(*piVar1 + 0xc))();
            iVar6 = FUN_007a8730(param_2,uVar5);
            if (iVar6 == 0) {
              return 1;
            }
          }
        }
      }
    }
    else {
      if (((int)(&DAT_00dbd1a2)[param_3] < 0x15) || ((&DAT_00dbd1a2)[param_3] == 0x8c)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        while (DAT_00cb9db8 != (undefined4 *)0x0) {
          DAT_00cb9dc0 = (int *)*DAT_00cb9db8;
          DAT_00cb9db8 = (undefined4 *)DAT_00cb9db8[2];
          cVar3 = (**(code **)(*DAT_00cb9dc0 + 0x2c))();
          if (cVar3 != '\0') {
            DAT_00be320c = *(undefined4 **)((int)DAT_00cb9dc0 + 0x26);
            while (DAT_00be320c != (undefined4 *)0x0) {
              piVar1 = (int *)*DAT_00be320c;
              DAT_00be320c = (undefined4 *)DAT_00be320c[2];
              uVar5 = (**(code **)(*piVar1 + 0xc))();
              iVar6 = FUN_007a8730(param_2,uVar5);
              if (iVar6 == 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  DAT_00be320c = *(undefined4 **)(param_1 + 0x451c);
  while (DAT_00be320c != (undefined4 *)0x0) {
    DAT_00cb9dc4 = (int *)*DAT_00be320c;
    DAT_00be320c = (undefined4 *)DAT_00be320c[2];
    uVar5 = (**(code **)(*DAT_00cb9dc4 + 0xc))();
    iVar6 = FUN_007a8730(param_2,uVar5);
    if (iVar6 == 0) {
      return 1;
    }
  }
  DAT_00cb9dbc = *(undefined4 **)(param_1 + 0x3b7e);
  while (puVar4 = (undefined4 *)0x0, DAT_00cb9dbc != (undefined4 *)0x0) {
    DAT_00be4b40 = (int *)*DAT_00cb9dbc;
    DAT_00cb9dbc = (undefined4 *)DAT_00cb9dbc[2];
    cVar3 = (**(code **)(*DAT_00be4b40 + 0x14))();
    if (cVar3 != '\0') {
      uVar5 = (**(code **)(*DAT_00be4b40 + 0xc))();
      iVar6 = FUN_007a8730(param_2,uVar5);
      if (iVar6 == 0) {
        return 1;
      }
    }
  }
LAB_005bf26a:
  return (uint)puVar4 & 0xffffff00;
}


