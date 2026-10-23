// FUN_007a2620 @ 7a2620 size=856

void FUN_007a2620(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_007a9c5c();
  FUN_00798acc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(0x10);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        *puVar1 = &PTR_FUN_00800558;
        uVar4 = FUN_007a5c92();
        *(undefined8 *)(puVar1 + 2) = uVar4;
      }
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a479f(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        uVar2 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar1 = &PTR_FUN_00800544;
        FUN_007a356f(uVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4863(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(8);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        *puVar1 = &PTR_FUN_00800534;
      }
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4927(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(8);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        *puVar1 = &PTR_FUN_00800524;
      }
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4a03(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_007a43b7(*(undefined4 *)(unaff_EBP + 8),0,0);
        *puVar1 = &PTR_FUN_008004f8;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4adf(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_007a43b7(*(undefined4 *)(unaff_EBP + 8),0,1);
        *puVar1 = &PTR_FUN_008004cc;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4bae(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        uVar2 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *puVar1 = &PTR_FUN_008004ac;
        FUN_007a43f7(uVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4c7d(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar1 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0x14) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        puVar1[2] = 0;
        uVar2 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *puVar1 = &PTR_FUN_008004a0;
        FUN_007a4561(uVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar2 = FUN_0074c210();
    }
    else {
      uVar2 = FUN_0074c210();
      puVar1 = (undefined4 *)FUN_007a4d41(*(undefined4 *)(unaff_EBP + 0x14),0,1,uVar2);
    }
    FUN_0079a297(puVar1,uVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


