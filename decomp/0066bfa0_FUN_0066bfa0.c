// FUN_0066bfa0 @ 66bfa0 size=262

void FUN_0066bfa0(void)

{
  undefined4 *puVar1;
  int local_10;
  int *local_c;
  
  FUN_00674a70(&local_10);
  if (local_10 != DAT_00d11154) {
    do {
      FUN_00429a00(s_LineSample__d__d___0f_00867b14,*(undefined4 *)(local_10 + 0xc),
                   *(undefined4 *)(local_10 + 0x18),*(undefined4 *)(local_10 + 0x10),
                   *(undefined4 *)(local_10 + 0x14));
      FUN_00674a80();
    } while (local_10 != DAT_00d11154);
  }
  local_c = (int *)*DAT_00d11034;
  if (local_c != DAT_00d11034) {
    do {
      puVar1 = (undefined4 *)local_c[4];
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = &DAT_007f0c98;
      }
      FUN_00429a00(s_CountrySample__s__d___0f_00867af8,puVar1,local_c[9],local_c[7],local_c[8]);
      FUN_00674d10();
    } while (local_c != DAT_00d11034);
  }
  local_c = (int *)*DAT_00d11144;
  if (local_c != DAT_00d11144) {
    do {
      puVar1 = (undefined4 *)local_c[4];
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = &DAT_007f0c98;
      }
      FUN_00429a00(s_CountrySample__s__d___0f_00867af8,puVar1,local_c[9],local_c[7],local_c[8]);
      FUN_00674d10();
    } while (local_c != DAT_00d11144);
  }
  return;
}


