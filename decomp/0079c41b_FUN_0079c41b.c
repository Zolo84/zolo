// FUN_0079c41b @ 79c41b size=1362

void FUN_0079c41b(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  undefined8 uVar6;
  
  FUN_007a9c5c();
  FUN_00798acc();
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x14) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_008002d4;
        puVar3 = (undefined4 *)FUN_007a592b(unaff_EBP + -0x2c);
        puVar2[2] = *puVar3;
        puVar2[3] = puVar3[1];
        puVar2[4] = puVar3[2];
        puVar2[5] = puVar3[3];
        uVar5 = *(undefined4 *)(unaff_EBP + -0x10);
      }
      uVar4 = FUN_0074c210();
      FUN_0079a297(uVar5,uVar4);
    }
    else {
      uVar5 = FUN_0074c210();
      uVar4 = FUN_007a0e75(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
      FUN_0079a297(uVar4,uVar5);
    }
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 8;
  *(uint *)(unaff_EBP + -0x10) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_008002a8;
      }
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a0f39(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00800288;
      }
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a1015(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar2 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2[1] = 0;
          uVar5 = *(undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          *puVar2 = &PTR_FUN_0080026c;
          FUN_0079f4ef(uVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uVar5 = FUN_0074c210();
      }
      else {
        uVar5 = FUN_0074c210();
        puVar2 = (undefined4 *)FUN_007a10f1(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
      }
      FUN_0079a297(puVar2,uVar5);
    }
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00800258;
        uVar6 = FUN_007a5c92();
        *(undefined8 *)(puVar2 + 2) = uVar6;
      }
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a11b5(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        uVar5 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        *puVar2 = &PTR_FUN_00800244;
        FUN_0079f54c(uVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a1279(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00800234;
      }
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a133d(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00800224;
      }
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a1419(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_007a0487(*(undefined4 *)(unaff_EBP + 8),0,0);
        *puVar2 = &PTR_FUN_008001f8;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a14f5(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar2 = operator_new(0x2c);
        *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          FUN_007a0487(*(undefined4 *)(unaff_EBP + 8),0,1);
          *puVar2 = &PTR_FUN_008001cc;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uVar5 = FUN_0074c210();
      }
      else {
        uVar5 = FUN_0074c210();
        puVar2 = (undefined4 *)FUN_007a15c4(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
      }
      FUN_0079a297(puVar2,uVar5);
    }
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        uVar5 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        *puVar2 = &PTR_FUN_008001ac;
        FUN_007a04ce(uVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a1693(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar5 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *puVar2 = &PTR_FUN_008001a0;
        FUN_0079e6c9(uVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a1757(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x10);
      puVar2 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_00800180;
        uVar6 = FUN_007a55bb();
        *(undefined8 *)(puVar3 + 2) = uVar6;
        puVar2 = puVar3;
      }
      uVar5 = FUN_0074c210();
    }
    else {
      uVar5 = FUN_0074c210();
      puVar2 = (undefined4 *)FUN_007a181b(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar5);
    }
    FUN_0079a297(puVar2,uVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


