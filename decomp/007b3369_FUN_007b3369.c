// FUN_007b3369 @ 7b3369 size=153

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b3369(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_00dc6c88 == 0) {
    FUN_007b83d5();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00dc5270,0x104);
  _DAT_00dc5160 = &DAT_00dc5270;
  pcVar2 = &DAT_00dc5270;
  if (*DAT_00dc5c74 != '\0') {
    pcVar2 = DAT_00dc5c74;
  }
  FUN_007b3402(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_007b3402(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_00dc5148 = pvVar1;
  _DAT_00dc5144 = local_8 + -1;
  return;
}


