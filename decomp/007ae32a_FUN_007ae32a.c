// FUN_007ae32a @ 7ae32a size=289

LPVOID FUN_007ae32a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008009b0;
  puStack_10 = &LAB_007b0b7c;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_00dc5b4c == 3) {
        if (uVar2 <= DAT_00dc5b44) {
          FUN_007aae71(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_007af77a(uVar2);
          local_8 = 0xffffffff;
          FUN_007ae3c3();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_007ae417;
LAB_007ae406:
          _memset(local_24,0,_Size);
        }
LAB_007ae412:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_00dc5b4c != 2) || (DAT_0087f624 < uVar3)) goto LAB_007ae412;
        FUN_007aae71(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_007b063f(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_007ae44c();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_007ae406;
      }
LAB_007ae417:
      local_24 = HeapAlloc(DAT_00dc5b48,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_00dc5248 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_007b176f(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}


