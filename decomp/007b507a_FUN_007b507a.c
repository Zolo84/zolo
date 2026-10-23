// FUN_007b507a @ 7b507a size=31

undefined4 FUN_007b507a(short param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_0087fd84;
  do {
    if (param_1 == *(short *)ppuVar1) {
      return 0;
    }
    ppuVar1 = (undefined **)((int)ppuVar1 + 2);
  } while (ppuVar1 < &PTR_s_america_0087fd98);
  return 1;
}


