// FUN_0057adc0 @ 57adc0 size=133

undefined4 FUN_0057adc0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c [7];
  undefined4 uStack_50;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*param_1 + 0x58))(param_1,local_6c);
  while( true ) {
    while( true ) {
      iVar1 = (**(code **)(*param_1 + 100))(param_1,0,&stack0xffffff8c,0x21,0);
      if (iVar1 != -0x7789fe3e) break;
      (**(code **)(*param_1 + 0x6c))(param_1);
    }
    if (((iVar1 == -0x7789ff7e) || (iVar1 == -0x7ff8ffa9)) || (iVar1 == -0x7ff8fff2)) break;
    if (iVar1 == 0) {
      return uStack_50;
    }
  }
  FUN_00405ad0(s_Surface_lock_failed__0082edd8);
  return 0;
}


