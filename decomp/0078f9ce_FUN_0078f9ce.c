// FUN_0078f9ce @ 78f9ce size=1991

void FUN_0078f9ce(void)

{
  int *piVar1;
  int iVar2;
  int *local_b4;
  uint local_b0;
  
  FUN_0042cab0();
  FUN_006cd800();
  iVar2 = DAT_00d12b40;
  if (DAT_00d12b40 != 0) {
    FUN_006cd4e0();
    FUN_00796cd8(iVar2);
  }
  DAT_00d12b40 = 0;
  if (DAT_00893750 != (int *)0x0) {
    (**(code **)(*DAT_00893750 + 8))(1);
  }
  DAT_00893750 = (int *)0x0;
  if (DAT_008e4320 != (undefined4 *)0x0) {
    (**(code **)*DAT_008e4320)(1);
  }
  DAT_008e4320 = (undefined4 *)0x0;
  if (DAT_00bd0120 != (undefined4 *)0x0) {
    (**(code **)*DAT_00bd0120)(1);
  }
  DAT_00bd0120 = (undefined4 *)0x0;
  FUN_00582ef0();
  FUN_0065ed30();
  iVar2 = DAT_00bd0e14;
  if (DAT_00bd0e14 != 0) {
    FUN_00580040();
    FUN_00796cd8(iVar2);
  }
  iVar2 = DAT_0088eb2c;
  DAT_00bd0e14 = 0;
  if (DAT_0088eb2c != 0) {
    thunk_FUN_0040e460();
    FUN_00796cd8(iVar2);
  }
  DAT_0088eb2c = 0;
  if (DAT_00d37ed0 != (undefined4 *)0x0) {
    (**(code **)*DAT_00d37ed0)(1);
  }
  DAT_00d37ed0 = (undefined4 *)0x0;
  FUN_006ff7b0();
  FUN_00519730();
  FUN_0043adc0();
  FUN_005b5e70();
  if (DAT_00bd0e18 != (undefined4 *)0x0) {
    if (DAT_00bd0e18 != (undefined4 *)0x0) {
      (**(code **)*DAT_00bd0e18)(1);
    }
    DAT_00bd0e18 = (undefined4 *)0x0;
  }
  if (DAT_00d13348 != (undefined4 *)0x0) {
    if (DAT_00d13348 != (undefined4 *)0x0) {
      (**(code **)*DAT_00d13348)(1);
    }
    DAT_00d13348 = (undefined4 *)0x0;
  }
  if (DAT_00a983fc != (undefined4 *)0x0) {
    FUN_004d7800();
    if (DAT_00a983fc != (undefined4 *)0x0) {
      (**(code **)*DAT_00a983fc)(1);
    }
    DAT_00a983fc = (undefined4 *)0x0;
  }
  if (DAT_00d13360 != (undefined4 *)0x0) {
    if (DAT_00d13360 != (undefined4 *)0x0) {
      (**(code **)*DAT_00d13360)(1);
    }
    DAT_00d13360 = (undefined4 *)0x0;
  }
  iVar2 = DAT_0089c0b4;
  if (DAT_0089c0b4 != 0) {
    if (DAT_0089c0b4 != 0) {
      FUN_004417b0();
      FUN_00796cd8(iVar2);
    }
    DAT_0089c0b4 = 0;
  }
  iVar2 = DAT_0089c0b8;
  if (DAT_0089c0b8 != 0) {
    if (DAT_0089c0b8 != 0) {
      FUN_004417b0();
      FUN_00796cd8(iVar2);
    }
    DAT_0089c0b8 = 0;
  }
  iVar2 = DAT_0089c0bc;
  if (DAT_0089c0bc != 0) {
    if (DAT_0089c0bc != 0) {
      FUN_004417b0();
      FUN_00796cd8(iVar2);
    }
    DAT_0089c0bc = 0;
  }
  FUN_006ee680();
  FUN_004419d0();
  if (DAT_0088eba8 != (undefined4 *)0x0) {
    if (DAT_0088eba8 != (undefined4 *)0x0) {
      (**(code **)*DAT_0088eba8)(1);
    }
    DAT_0088eba8 = (undefined4 *)0x0;
  }
  FUN_00780ad0();
  if (DAT_0088ebb4 != (undefined4 *)0x0) {
    if (DAT_0088ebb4 != (undefined4 *)0x0) {
      (**(code **)*DAT_0088ebb4)(1);
    }
    DAT_0088ebb4 = (undefined4 *)0x0;
  }
  FUN_00411cfe();
  FUN_00411cfe();
  FUN_00411cfe();
  FUN_00411cfe();
  if (DAT_00dc4b74 != (undefined4 *)0x0) {
    (**(code **)*DAT_00dc4b74)(1);
  }
  for (local_b0 = 0; local_b0 < DAT_0088ebe4; local_b0 = local_b0 + 1) {
    local_b4 = *(int **)(DAT_0088ebe8 + local_b0 * 4);
    while (local_b4 != (int *)0x0) {
      piVar1 = (int *)local_b4[1];
      if ((undefined4 *)*local_b4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*local_b4)(1);
      }
      FUN_00796cd8(local_b4);
      local_b4 = piVar1;
    }
    *(undefined4 *)(DAT_0088ebe8 + local_b0 * 4) = 0;
  }
  DAT_0088ebe0 = 0;
  if ((DAT_00bd1ba8 != (undefined4 *)0x0) && (FUN_00583800(), DAT_00bd1ba8 != (undefined4 *)0x0)) {
    (**(code **)*DAT_00bd1ba8)(1);
  }
  if ((DAT_00bd13e8 != (undefined4 *)0x0) && (FUN_00581330(), DAT_00bd13e8 != (undefined4 *)0x0)) {
    (**(code **)*DAT_00bd13e8)(1);
  }
  if (DAT_00bd14fc != (undefined4 *)0x0) {
    FUN_00582090();
    if (DAT_00bd14fc != (undefined4 *)0x0) {
      (**(code **)*DAT_00bd14fc)(1);
    }
    DAT_00bd14fc = (undefined4 *)0x0;
  }
  CloseHandle(DAT_00dc4b68);
  if (DAT_0088faf8 != (undefined4 *)0x0) {
    (**(code **)*DAT_0088faf8)(1);
  }
  CoUninitialize();
  return;
}


