// FUN_0078a150 @ 78a150 size=9953

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0078a150(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_71c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e146b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534930(s_db_misc_txt_0083b3d4,&DAT_008390e0);
  local_4 = 0;
LAB_0078a18b:
  while (iVar1 = FUN_00535490(), iVar1 != 1) {
    if ((iVar1 == 2) || (iVar1 == -1)) goto LAB_0078a295;
  }
  if (local_71c < 0x1fa) {
    if (local_71c == 0x1f9) {
      iVar1 = param_1 + 0x1bd78;
    }
    else {
      switch(local_71c) {
      case 0xec:
        iVar1 = param_1 + 0x1c054;
        break;
      default:
switchD_0078a1c2_caseD_ed:
        FUN_005349b0(s_Unknown_Type__misc_txt__0087b3e0);
        goto LAB_0078a18b;
      case 0x134:
        iVar1 = param_1 + 0x1b87c;
        break;
      case 0x147:
        iVar1 = param_1 + 0x1bd14;
        break;
      case 0x151:
        iVar1 = param_1 + 0x1bcd8;
        break;
      case 0x1e9:
        iVar1 = param_1 + 0x1b6e0;
      }
    }
  }
  else if (local_71c < 599) {
    if (local_71c == 0x256) {
      iVar1 = param_1 + 0x1be0c;
    }
    else if (local_71c == 0x249) {
      iVar1 = param_1 + 0x1c040;
    }
    else {
      if (local_71c != 0x24e) goto switchD_0078a1c2_caseD_ed;
      iVar1 = param_1 + 0x1b8bc;
    }
  }
  else if (local_71c == 0x295) {
    iVar1 = param_1 + 0x1bed8;
  }
  else {
    if (local_71c != 0x371) goto switchD_0078a1c2_caseD_ed;
    iVar1 = param_1 + 0x1b83c;
  }
  iVar1 = FUN_00535790(iVar1);
  if (iVar1 != 0) {
    FUN_005349b0(s_misc_txt_0087b3d4);
  }
  goto LAB_0078a18b;
LAB_0078a295:
  _DAT_00dc1548 = *(undefined4 *)(param_1 + 0x1b8bc);
  _DAT_00dc154c = *(undefined4 *)(param_1 + 0x1b8c0);
  _DAT_00dc1550 = *(undefined4 *)(param_1 + 0x1b8c4);
  _DAT_00dc1554 = *(undefined4 *)(param_1 + 0x1b8c8);
  _DAT_00dc1558 = *(undefined4 *)(param_1 + 0x1b8cc);
  _DAT_00dc155c = *(undefined4 *)(param_1 + 0x1b8d0);
  _DAT_00dc1560 = *(undefined4 *)(param_1 + 0x1b8d4);
  DAT_00877224 = *(undefined4 *)(param_1 + 0x1b8d8);
  DAT_00877228 = *(undefined4 *)(param_1 + 0x1b8dc);
  DAT_00dc1564 = *(undefined4 *)(param_1 + 0x1b8e0);
  _DAT_00dc1568 = *(undefined4 *)(param_1 + 0x1b8e4);
  DAT_00dc156c = *(undefined4 *)(param_1 + 0x1b8e8);
  _DAT_00dc1570 = *(undefined4 *)(param_1 + 0x1b8ec);
  DAT_00dc1574 = *(undefined4 *)(param_1 + 0x1b8f0);
  DAT_00dc1578 = *(undefined4 *)(param_1 + 0x1b8f4);
  DAT_00dc157c = *(undefined4 *)(param_1 + 0x1b8f8);
  DAT_00dc1580 = *(undefined4 *)(param_1 + 0x1b8fc);
  DAT_00dc1584 = *(undefined4 *)(param_1 + 0x1b900);
  DAT_00dc1588 = *(undefined4 *)(param_1 + 0x1b904);
  DAT_00dc158c = *(undefined4 *)(param_1 + 0x1b908);
  _DAT_00dc1590 = *(undefined4 *)(param_1 + 0x1b90c);
  DAT_00dc1594 = *(undefined4 *)(param_1 + 0x1b910);
  _DAT_00dc1598 = *(undefined4 *)(param_1 + 0x1b914);
  _DAT_00dc159c = *(undefined4 *)(param_1 + 0x1b918);
  _DAT_00dc15a0 = *(undefined4 *)(param_1 + 0x1b91c);
  _DAT_00dc15a4 = *(undefined4 *)(param_1 + 0x1b920);
  DAT_00dc15a8 = *(undefined4 *)(param_1 + 0x1b924);
  DAT_0087722c = *(undefined4 *)(param_1 + 0x1b928);
  DAT_00dc15ac = *(undefined4 *)(param_1 + 0x1b92c);
  DAT_00dc15b0 = *(undefined4 *)(param_1 + 0x1b930);
  DAT_00dc15b4 = *(undefined4 *)(param_1 + 0x1b934);
  DAT_00dc15b8 = *(undefined4 *)(param_1 + 0x1b938);
  _DAT_00dc15bc = *(undefined4 *)(param_1 + 0x1b93c);
  DAT_00dc15c0 = *(undefined4 *)(param_1 + 0x1b940);
  _DAT_00dc15c4 = *(undefined4 *)(param_1 + 0x1b944);
  _DAT_00dc15c8 = *(undefined4 *)(param_1 + 0x1b948);
  _DAT_00877230 = *(undefined4 *)(param_1 + 0x1b94c);
  _DAT_00877234 = *(undefined4 *)(param_1 + 0x1b950);
  DAT_00dc15cc = __ftol();
  DAT_00dc15d0 = __ftol();
  DAT_00dc15d4 = __ftol();
  DAT_00dc15d8 = __ftol();
  DAT_00dc15dc = __ftol();
  DAT_00dc15e0 = __ftol();
  DAT_00dc15e4 = __ftol();
  DAT_00dc15e8 = __ftol();
  DAT_00dc15ec = __ftol();
  DAT_00dc15f0 = __ftol();
  DAT_00dc15f4 = __ftol();
  DAT_00dc15f8 = __ftol();
  DAT_00dc15fc = __ftol();
  _DAT_00dc1600 = *(undefined4 *)(param_1 + 0x1b988);
  if (_DAT_007e3380 <= *(float *)(param_1 + 0x1b98c)) {
    _DAT_00dc1604 = 0;
  }
  else {
    _DAT_00dc1604 = __ftol();
  }
  if (_DAT_007e3380 <= *(float *)(param_1 + 0x1b990)) {
    _DAT_00877238 = 0;
  }
  else {
    _DAT_00877238 = __ftol();
  }
  if (_DAT_007e3380 <= *(float *)(param_1 + 0x1b998)) {
    _DAT_00dc1608 = 0;
  }
  else {
    _DAT_00dc1608 = __ftol();
  }
  DAT_00dc160c = __ftol();
  if (DAT_00dc160c < 0) {
    DAT_00dc160c = 0;
  }
  else if (100 < DAT_00dc160c) {
    DAT_00dc160c = 100;
  }
  DAT_00dc1610 = __ftol();
  DAT_00dc1614 = __ftol();
  _DAT_00dc1618 = *(undefined4 *)(param_1 + 0x1b9b4);
  _DAT_00dc161c = *(undefined4 *)(param_1 + 0x1b9b8);
  _DAT_00dc1620 = *(undefined4 *)(param_1 + 0x1b9bc);
  _DAT_00dc1624 = *(undefined4 *)(param_1 + 0x1b9c0);
  _DAT_00dc1628 = *(undefined4 *)(param_1 + 0x1b9c4);
  _DAT_00dc162c = *(undefined4 *)(param_1 + 0x1b9c8);
  _DAT_00dc1630 = *(undefined4 *)(param_1 + 0x1b9cc);
  _DAT_00dc1634 = *(undefined4 *)(param_1 + 0x1b9d0);
  _DAT_00dc1638 = *(undefined4 *)(param_1 + 0x1b9d4);
  _DAT_00dc163c = *(undefined4 *)(param_1 + 0x1b9d8);
  _DAT_00dc1640 = *(float *)(param_1 + 0x1b9dc) * _DAT_007e4088;
  _DAT_00dc1644 = *(float *)(param_1 + 0x1b9e0) * _DAT_007e4088;
  _DAT_00dc1648 = *(float *)(param_1 + 0x1b9e4) * _DAT_007e4088;
  DAT_0087723c = __ftol();
  _DAT_00dc164c = *(float *)(param_1 + 0x1b9ec) * _DAT_007e4088;
  _DAT_00dc1650 = *(float *)(param_1 + 0x1b9f0) * _DAT_007e4088;
  _DAT_00dc1654 = *(float *)(param_1 + 0x1b9f4) * _DAT_007e4088;
  DAT_00877240 = __ftol();
  _DAT_00dc1658 = __ftol();
  DAT_00dc165c = __ftol();
  _DAT_00dc1664 = *(undefined4 *)(param_1 + 0x1ba04);
  _DAT_00dc1668 = *(undefined4 *)(param_1 + 0x1ba08);
  _DAT_00dc166c = *(float *)(param_1 + 0x1ba0c) * _DAT_007e4088;
  _DAT_00877244 = *(undefined4 *)(param_1 + 0x1ba10);
  _DAT_00877248 = *(undefined4 *)(param_1 + 0x1ba14);
  _DAT_0087724c = *(undefined4 *)(param_1 + 0x1ba18);
  DAT_00dc1670 = *(undefined4 *)(param_1 + 0x1ba1c);
  _DAT_00877250 = *(undefined4 *)(param_1 + 0x1ba20);
  iVar1 = __ftol();
  DAT_00877254 = iVar1 + 1;
  iVar1 = __ftol();
  DAT_00877258 = iVar1 + 1;
  _DAT_0087725c = *(undefined4 *)(param_1 + 0x1ba2c);
  iVar1 = __ftol();
  DAT_00877260 = iVar1 + 1;
  iVar1 = __ftol();
  DAT_00877264 = iVar1 + 1;
  _DAT_00877268 = *(undefined4 *)(param_1 + 0x1ba38);
  iVar1 = __ftol();
  DAT_0087726c = iVar1 + 1;
  _DAT_00877270 = *(undefined4 *)(param_1 + 0x1ba40);
  iVar1 = __ftol();
  DAT_00877274 = iVar1 + 1;
  _DAT_00877278 = *(undefined4 *)(param_1 + 0x1ba48);
  _DAT_0087727c = *(undefined4 *)(param_1 + 0x1ba4c);
  iVar1 = __ftol();
  DAT_00877280 = iVar1 + 1;
  _DAT_00877284 = *(undefined4 *)(param_1 + 0x1ba54);
  iVar1 = __ftol();
  DAT_00877288 = iVar1 + 1;
  iVar1 = __ftol();
  _DAT_00dc1674 = (float)iVar1;
  iVar1 = __ftol();
  _DAT_00dc1678 = (float)iVar1;
  iVar1 = __ftol();
  _DAT_00dc167c = (float)iVar1;
  iVar1 = __ftol();
  _DAT_00dc1680 = (float)iVar1;
  _DAT_00dc1684 = *(undefined4 *)(param_1 + 0x1ba90);
  _DAT_00dc1688 = *(undefined4 *)(param_1 + 0x1ba94);
  _DAT_00dc168c = *(undefined4 *)(param_1 + 0x1ba98);
  _DAT_00dc1690 = *(undefined4 *)(param_1 + 0x1ba9c);
  _DAT_0087728c = *(undefined4 *)(param_1 + 0x1baa0);
  _DAT_00877290 = *(undefined4 *)(param_1 + 0x1baa4);
  _DAT_00877294 = *(undefined4 *)(param_1 + 0x1baa8);
  _DAT_00dc1694 = *(undefined4 *)(param_1 + 0x1baac);
  DAT_00dc1698 = *(undefined4 *)(param_1 + 0x1bab0);
  _DAT_00dc169c = *(undefined4 *)(param_1 + 0x1bab4);
  _DAT_00dc16a0 = *(undefined4 *)(param_1 + 0x1bab8);
  _DAT_00dc16a4 = *(undefined4 *)(param_1 + 0x1babc);
  _DAT_00dc16a8 = *(undefined4 *)(param_1 + 0x1bac0);
  _DAT_00dc16ac = *(undefined4 *)(param_1 + 0x1bac4);
  _DAT_00dc16b0 = *(undefined4 *)(param_1 + 0x1bac8);
  _DAT_00dc16b4 = *(undefined4 *)(param_1 + 0x1bacc);
  _DAT_00dc16b8 = *(undefined4 *)(param_1 + 0x1bad0);
  _DAT_00dc16bc = *(undefined4 *)(param_1 + 0x1bad4);
  _DAT_00dc16c0 = *(undefined4 *)(param_1 + 0x1bad8);
  _DAT_00dc16c4 = *(undefined4 *)(param_1 + 0x1badc);
  _DAT_00dc16c8 = *(undefined4 *)(param_1 + 0x1bae0);
  _DAT_00dc16cc = *(undefined4 *)(param_1 + 0x1bae4);
  _DAT_00dc16d0 = *(undefined4 *)(param_1 + 0x1bae8);
  _DAT_00dc16d4 = *(undefined4 *)(param_1 + 0x1baec);
  _DAT_00877298 = *(undefined4 *)(param_1 + 0x1baf0);
  DAT_0087729c = __ftol();
  _DAT_008772a0 = *(undefined4 *)(param_1 + 0x1baf8);
  DAT_008772a4 = __ftol();
  _DAT_008772a8 = *(undefined4 *)(param_1 + 0x1bb00);
  _DAT_00dc16d8 = *(undefined4 *)(param_1 + 0x1bb04);
  _DAT_00dc16dc = *(undefined4 *)(param_1 + 0x1bb08);
  DAT_00dc16e0 = *(int *)(param_1 + 0x1bb0c) == 0x3f800000;
  _DAT_008772ac = *(undefined4 *)(param_1 + 0x1bb10);
  DAT_00dc16e1 = *(int *)(param_1 + 0x1bb10) != 0x3f800000;
  _DAT_00dc16e4 = *(undefined4 *)(param_1 + 0x1bb14);
  DAT_00dc16e8 = *(float *)(param_1 + 0x1bb14) != _DAT_007e3380;
  _DAT_00877424 = *(undefined4 *)(param_1 + 0x1bb18);
  _DAT_00877428 = *(undefined4 *)(param_1 + 0x1bb1c);
  _DAT_0087742c = *(undefined4 *)(param_1 + 0x1bb20);
  _DAT_00877430 = *(undefined4 *)(param_1 + 0x1bb24);
  iVar1 = __ftol();
  DAT_00877434 = iVar1;
  iVar2 = __ftol();
  DAT_00dc1534 = iVar2 + iVar1;
  DAT_00877438 = __ftol();
  _DAT_00dc16ec = *(undefined4 *)(param_1 + 0x1bb34);
  _DAT_00dc16f0 = *(undefined4 *)(param_1 + 0x1bb38);
  _DAT_00dc16f4 = *(undefined4 *)(param_1 + 0x1bb3c);
  DAT_008772b0 = *(undefined4 *)(param_1 + 0x1bb40);
  DAT_008772b4 = __ftol();
  DAT_00dc16f8 = __ftol();
  DAT_00dc16fc = *(float *)(param_1 + 0x1bb54) == (float)_DAT_007e7828;
  _DAT_008772b8 = *(undefined4 *)(param_1 + 0x1bb58);
  _DAT_008772bc = *(undefined4 *)(param_1 + 0x1bb5c);
  _DAT_008772c0 = *(undefined4 *)(param_1 + 0x1bb60);
  _DAT_008772c4 = *(undefined4 *)(param_1 + 0x1bb64);
  _DAT_008772c8 = *(undefined4 *)(param_1 + 0x1bb68);
  _DAT_008772cc = *(undefined4 *)(param_1 + 0x1bb6c);
  _DAT_008772d0 = *(undefined4 *)(param_1 + 0x1bb70);
  _DAT_008772d4 = *(undefined4 *)(param_1 + 0x1bb74);
  _DAT_008772d8 = *(undefined4 *)(param_1 + 0x1bb78);
  _DAT_008772dc = *(undefined4 *)(param_1 + 0x1bb7c);
  _DAT_008772e0 = *(undefined4 *)(param_1 + 0x1bb80);
  _DAT_00dc1700 = *(undefined4 *)(param_1 + 0x1bb84);
  _DAT_008772e4 = *(undefined4 *)(param_1 + 0x1bb88);
  _DAT_008772e8 = *(undefined4 *)(param_1 + 0x1bb8c);
  _DAT_008772ec = *(undefined4 *)(param_1 + 0x1bb90);
  _DAT_008772f0 = *(undefined4 *)(param_1 + 0x1bb94);
  _DAT_008772f4 = *(undefined4 *)(param_1 + 0x1bb98);
  _DAT_00dc1704 = *(undefined4 *)(param_1 + 0x1bb9c);
  _DAT_008772f8 = *(undefined4 *)(param_1 + 0x1bba0);
  _DAT_00dc1708 = *(undefined4 *)(param_1 + 0x1bba4);
  _DAT_008772fc = *(undefined4 *)(param_1 + 0x1bba8);
  _DAT_00877300 = *(undefined4 *)(param_1 + 0x1bbac);
  _DAT_00877304 = *(undefined4 *)(param_1 + 0x1bbb0);
  _DAT_00877308 = *(undefined4 *)(param_1 + 0x1bbb4);
  _DAT_0087730c = *(undefined4 *)(param_1 + 0x1bbb8);
  _DAT_00dc170c = *(undefined4 *)(param_1 + 0x1bbbc);
  _DAT_00dc1710 = *(undefined4 *)(param_1 + 0x1bbc0);
  _DAT_00877310 = *(undefined4 *)(param_1 + 0x1bbc4);
  _DAT_00dc1714 = *(undefined4 *)(param_1 + 0x1bb4c);
  _DAT_00877314 = *(undefined4 *)(param_1 + 0x1bb50);
  DAT_00dc1718 = __ftol();
  DAT_00dc171c = __ftol();
  DAT_00dc1720 = *(int *)(param_1 + 0x1bbd0) == 0x3f800000;
  _DAT_00dc1724 = *(undefined4 *)(param_1 + 0x1bbd4);
  _DAT_00dc1728 = *(undefined4 *)(param_1 + 0x1bbd8);
  _DAT_00dc172c = *(undefined4 *)(param_1 + 0x1bbdc);
  DAT_00dc1730 = __ftol();
  DAT_00dc1734 = _DAT_007e3374 <= *(float *)(param_1 + 0x1bbe0);
  _DAT_00877318 = *(undefined4 *)(param_1 + 0x1bbe4);
  _DAT_0087731c = *(undefined4 *)(param_1 + 0x1bbe8);
  DAT_00dc1735 = *(int *)(param_1 + 0x1bbe8) != 0x3f800000;
  DAT_00dc1736 = *(int *)(param_1 + 0x1bbec) == 0x40000000;
  DAT_00dc1737 = _DAT_007e3380 < *(float *)(param_1 + 0x1bbec);
  DAT_00877320 = *(undefined4 *)(param_1 + 0x1bbf0);
  DAT_00877324 = *(undefined4 *)(param_1 + 0x1bbf4);
  if ((*(int *)(param_1 + 0x1bbf0) != 0x3f800000) ||
     (DAT_00dc1738 = 0, *(int *)(param_1 + 0x1bbf4) != 0x3f800000)) {
    DAT_00dc1738 = 1;
  }
  _DAT_00877328 = *(undefined4 *)(param_1 + 0x1bbf8);
  _DAT_0087732c = *(undefined4 *)(param_1 + 0x1bbfc);
  _DAT_00877330 = *(undefined4 *)(param_1 + 0x1bc00);
  DAT_00877334 = *(undefined4 *)(param_1 + 0x1bc04);
  _DAT_00dc173c = *(undefined4 *)(param_1 + 0x1bc08);
  DAT_00877338 = __ftol();
  DAT_00dc1740 = *(int *)(param_1 + 0x1bc0c) != -0x40800000;
  DAT_0087733c = *(undefined4 *)(param_1 + 0x1bc10);
  DAT_00dc1741 = _DAT_007e3380 < *(float *)(param_1 + 0x1bc14);
  DAT_00dc1742 = *(int *)(param_1 + 0x1bc14) == 0x40000000;
  _DAT_00877340 = *(undefined4 *)(param_1 + 0x1bc18);
  _DAT_00877344 = *(undefined4 *)(param_1 + 0x1bc1c);
  _DAT_00877348 = *(undefined4 *)(param_1 + 0x1bc20);
  DAT_00dc1743 = *(int *)(param_1 + 0x1bc20) != 0x3f800000;
  DAT_0087734c = __ftol();
  DAT_00877350 = __ftol();
  _DAT_00877354 = *(undefined4 *)(param_1 + 0x1bc2c);
  _DAT_00877358 = *(undefined4 *)(param_1 + 0x1bc30);
  _DAT_0087735c = *(undefined4 *)(param_1 + 0x1bc34);
  _DAT_00877360 = *(undefined4 *)(param_1 + 0x1bc38);
  _DAT_00877364 = *(float *)(param_1 + 0x1bc3c) * _DAT_007e543c;
  _DAT_00877368 = *(undefined4 *)(param_1 + 0x1bc40);
  DAT_00dc1744 = *(undefined4 *)(param_1 + 0x1bc44);
  _DAT_0087736c = *(undefined4 *)(param_1 + 0x1bc48);
  _DAT_00877370 = *(undefined4 *)(param_1 + 0x1bc4c);
  _DAT_00877374 = *(undefined4 *)(param_1 + 0x1bc50);
  _DAT_00877378 = *(undefined4 *)(param_1 + 0x1bc54);
  _DAT_0087737c = *(undefined4 *)(param_1 + 0x1bc58);
  DAT_00877380 = __ftol();
  DAT_00dc1748 = *(int *)(param_1 + 0x1bcd0) != 0x3f800000;
  DAT_00dc1749 = *(int *)(param_1 + 0x1bcd4) == 0x3f800000;
  _DAT_00877384 = *(undefined4 *)(param_1 + 0x1bc60);
  _DAT_00877388 = *(undefined4 *)(param_1 + 0x1bc64);
  _DAT_0087738c = *(undefined4 *)(param_1 + 0x1bc68);
  _DAT_00877390 = *(undefined4 *)(param_1 + 0x1bc6c);
  _DAT_00877394 = *(undefined4 *)(param_1 + 0x1bc70);
  _DAT_00877398 = *(undefined4 *)(param_1 + 0x1bc74);
  _DAT_0087739c = *(undefined4 *)(param_1 + 0x1bc78);
  _DAT_008773a0 = *(undefined4 *)(param_1 + 0x1bc7c);
  _DAT_008773a4 = *(undefined4 *)(param_1 + 0x1bc80);
  _DAT_008773a8 = *(undefined4 *)(param_1 + 0x1bc84);
  _DAT_008773ac = *(undefined4 *)(param_1 + 0x1bc88);
  _DAT_008773b0 = *(undefined4 *)(param_1 + 0x1bc8c);
  _DAT_008773b4 = *(undefined4 *)(param_1 + 0x1bc90);
  _DAT_008773b8 = *(undefined4 *)(param_1 + 0x1bc94);
  _DAT_008773bc = *(undefined4 *)(param_1 + 0x1bc98);
  _DAT_008773c0 = *(undefined4 *)(param_1 + 0x1bc9c);
  _DAT_008773c4 = *(undefined4 *)(param_1 + 0x1bca0);
  _DAT_008773c8 = *(undefined4 *)(param_1 + 0x1bca4);
  _DAT_008773cc = *(undefined4 *)(param_1 + 0x1bca8);
  _DAT_008773d0 = *(undefined4 *)(param_1 + 0x1bcac);
  _DAT_008773d4 = *(undefined4 *)(param_1 + 0x1bcb0);
  _DAT_008773d8 = *(undefined4 *)(param_1 + 0x1bcb4);
  _DAT_008773dc = *(undefined4 *)(param_1 + 0x1bcb8);
  _DAT_008773e0 = *(undefined4 *)(param_1 + 0x1bcbc);
  _DAT_008773e4 = *(undefined4 *)(param_1 + 0x1bcc0);
  _DAT_008773e8 = *(undefined4 *)(param_1 + 0x1bcc4);
  _DAT_008773ec = *(undefined4 *)(param_1 + 0x1bcc8);
  _DAT_008773f0 = *(undefined4 *)(param_1 + 0x1bccc);
  _DAT_008773f4 = *(undefined4 *)(param_1 + 0x1ba5c);
  _DAT_008773f8 = *(undefined4 *)(param_1 + 0x1ba60);
  _DAT_008773fc = *(undefined4 *)(param_1 + 0x1ba64);
  _DAT_00877400 = *(undefined4 *)(param_1 + 0x1ba68);
  _DAT_00877404 = *(undefined4 *)(param_1 + 0x1ba6c);
  _DAT_00877408 = *(undefined4 *)(param_1 + 0x1ba70);
  _DAT_00dc174c = *(undefined4 *)(param_1 + 0x1ba74);
  _DAT_0087740c = *(undefined4 *)(param_1 + 0x1ba78);
  _DAT_00877410 = *(undefined4 *)(param_1 + 0x1ba7c);
  iVar1 = __ftol();
  _DAT_00877414 = (float)iVar1;
  _DAT_00877418 = *(undefined4 *)(param_1 + 0x1ba84);
  iVar1 = __ftol();
  _DAT_0087741c = (float)iVar1;
  _DAT_00877420 = *(undefined4 *)(param_1 + 0x1ba8c);
  if (_DAT_007e3380 <= _DAT_00877414) {
    if (_DAT_007e4088 < _DAT_00877414) {
      _DAT_00877414 = 100.0;
    }
  }
  else {
    _DAT_00877414 = 0.0;
  }
  if (_DAT_007e3380 <= _DAT_0087741c) {
    if (_DAT_007e4088 < _DAT_0087741c) {
      _DAT_0087741c = 100.0;
    }
  }
  else {
    _DAT_0087741c = 0.0;
  }
  DAT_0087743c = *(int *)(param_1 + 0x1bed8) == 0x3f800000;
  DAT_00877440 = *(undefined4 *)(param_1 + 0x1bedc);
  _DAT_00877444 = *(undefined4 *)(param_1 + 0x1bee0);
  DAT_00877448 = *(int *)(param_1 + 0x1bee4) == 0x3f800000;
  DAT_0087744c = *(undefined4 *)(param_1 + 0x1bee8);
  _DAT_00877450 = *(undefined4 *)(param_1 + 0x1beec);
  DAT_00dc1750 = *(int *)(param_1 + 0x1bef0) == 0x3f800000;
  DAT_00877454 = *(undefined4 *)(param_1 + 0x1bef4);
  _DAT_00877458 = *(undefined4 *)(param_1 + 0x1bef8);
  _DAT_0087745c = *(undefined4 *)(param_1 + 0x1befc);
  DAT_00877460 = *(int *)(param_1 + 0x1bf00) == 0x3f800000;
  DAT_00877464 = *(undefined4 *)(param_1 + 0x1bf04);
  _DAT_00877468 = *(undefined4 *)(param_1 + 0x1bf08);
  DAT_0087746c = *(int *)(param_1 + 0x1bf0c) == 0x3f800000;
  DAT_00877470 = *(undefined4 *)(param_1 + 0x1bf10);
  _DAT_00877474 = *(undefined4 *)(param_1 + 0x1bf14);
  DAT_00877478 = *(int *)(param_1 + 0x1bf18) == 0x3f800000;
  DAT_0087747c = *(undefined4 *)(param_1 + 0x1bf1c);
  _DAT_00877480 = *(undefined4 *)(param_1 + 0x1bf20);
  DAT_00877484 = *(int *)(param_1 + 0x1bf24) == 0x3f800000;
  DAT_00877488 = *(undefined4 *)(param_1 + 0x1bf28);
  _DAT_0087748c = *(undefined4 *)(param_1 + 0x1bf2c);
  DAT_00877490 = *(int *)(param_1 + 0x1bf30) == 0x3f800000;
  DAT_00877494 = *(undefined4 *)(param_1 + 0x1bf34);
  DAT_00877498 = *(int *)(param_1 + 0x1bf38) == 0x3f800000;
  DAT_0087749c = *(undefined4 *)(param_1 + 0x1bf3c);
  _DAT_008774a0 = *(undefined4 *)(param_1 + 0x1bf40);
  _DAT_008774a4 = *(undefined4 *)(param_1 + 0x1bf44);
  DAT_00dc1751 = *(int *)(param_1 + 0x1bf48) == 0x3f800000;
  DAT_008774a8 = *(undefined4 *)(param_1 + 0x1bf4c);
  _DAT_00dc1754 = *(undefined4 *)(param_1 + 0x1bf50);
  _DAT_008774ac = *(undefined4 *)(param_1 + 0x1bf54);
  DAT_00dc1758 = *(int *)(param_1 + 0x1bf58) == 0x3f800000;
  DAT_008774b0 = *(undefined4 *)(param_1 + 0x1bf5c);
  _DAT_008774b4 = *(undefined4 *)(param_1 + 0x1bf60);
  _DAT_00dc175c = *(undefined4 *)(param_1 + 0x1bf64);
  DAT_00dc1760 = *(int *)(param_1 + 0x1bf68) == 0x3f800000;
  DAT_008774b8 = *(undefined4 *)(param_1 + 0x1bf6c);
  DAT_00dc1761 = *(int *)(param_1 + 0x1bf70) == 0x3f800000;
  DAT_008774bc = *(undefined4 *)(param_1 + 0x1bf74);
  DAT_00dc1762 = *(int *)(param_1 + 0x1bf78) == 0x3f800000;
  DAT_008774c0 = *(undefined4 *)(param_1 + 0x1bf7c);
  DAT_00dc1763 = *(int *)(param_1 + 0x1bf80) == 0x3f800000;
  DAT_008774c4 = *(undefined4 *)(param_1 + 0x1bf84);
  DAT_00dc1764 = *(int *)(param_1 + 0x1bf88) == 0x3f800000;
  DAT_008774c8 = *(undefined4 *)(param_1 + 0x1bf8c);
  DAT_00dc1765 = *(int *)(param_1 + 0x1bf90) == 0x3f800000;
  DAT_008774cc = *(undefined4 *)(param_1 + 0x1bf94);
  DAT_00dc1766 = *(int *)(param_1 + 0x1bf98) == 0x3f800000;
  DAT_008774d0 = *(undefined4 *)(param_1 + 0x1bf9c);
  DAT_00dc1767 = *(int *)(param_1 + 0x1bfa0) == 0x3f800000;
  DAT_008774d4 = *(undefined4 *)(param_1 + 0x1bfa4);
  DAT_00dc1768 = *(int *)(param_1 + 0x1bfa8) == 0x3f800000;
  DAT_008774d8 = *(undefined4 *)(param_1 + 0x1bfac);
  DAT_00dc1769 = *(int *)(param_1 + 0x1bfb0) == 0x3f800000;
  DAT_008774dc = *(undefined4 *)(param_1 + 0x1bfb4);
  DAT_008774e0 = *(int *)(param_1 + 0x1bfb8) == 0x3f800000;
  DAT_008774e4 = *(undefined4 *)(param_1 + 0x1bfbc);
  _DAT_008774e8 = *(undefined4 *)(param_1 + 0x1bfc0);
  _DAT_008774ec = *(undefined4 *)(param_1 + 0x1bfc4);
  DAT_00dc176a = *(int *)(param_1 + 0x1bfc8) == 0x3f800000;
  DAT_008774f0 = *(undefined4 *)(param_1 + 0x1bfcc);
  _DAT_008774f4 = *(undefined4 *)(param_1 + 0x1bfd0);
  _DAT_008774f8 = *(undefined4 *)(param_1 + 0x1bfd4);
  DAT_00dc176b = *(int *)(param_1 + 0x1bfd8) == 0x3f800000;
  DAT_008774fc = *(undefined4 *)(param_1 + 0x1bfdc);
  DAT_00877500 = *(int *)(param_1 + 0x1bfe0) == 0x3f800000;
  DAT_00877504 = *(undefined4 *)(param_1 + 0x1bfe4);
  DAT_00877508 = *(int *)(param_1 + 0x1bfe8) == 0x3f800000;
  DAT_0087750c = *(undefined4 *)(param_1 + 0x1bfec);
  _DAT_00877510 = *(undefined4 *)(param_1 + 0x1bff0);
  DAT_00dc176c = *(int *)(param_1 + 0x1bff4) == 0x3f800000;
  DAT_00877514 = *(undefined4 *)(param_1 + 0x1bff8);
  DAT_00877518 = *(int *)(param_1 + 0x1bffc) == 0x3f800000;
  DAT_0087751c = *(undefined4 *)(param_1 + 0x1c000);
  _DAT_00877520 = *(undefined4 *)(param_1 + 0x1c004);
  _DAT_00877524 = *(undefined4 *)(param_1 + 0x1c008);
  DAT_00877528 = *(int *)(param_1 + 0x1c00c) == 0x3f800000;
  DAT_0087752c = *(undefined4 *)(param_1 + 0x1c010);
  DAT_00dc176d = *(int *)(param_1 + 0x1c014) == 0x3f800000;
  DAT_00877530 = *(undefined4 *)(param_1 + 0x1c018);
  DAT_00dc176e = *(int *)(param_1 + 0x1c01c) == 0x3f800000;
  DAT_00877534 = *(undefined4 *)(param_1 + 0x1c020);
  DAT_00877538 = *(int *)(param_1 + 0x1c024) == 0x3f800000;
  DAT_0087753c = *(undefined4 *)(param_1 + 0x1c028);
  _DAT_00877540 = *(undefined4 *)(param_1 + 0x1c02c);
  _DAT_00877544 = *(undefined4 *)(param_1 + 0x1c030);
  DAT_00877548 = *(int *)(param_1 + 0x1c034) == 0x3f800000;
  DAT_0087754c = *(undefined4 *)(param_1 + 0x1c038);
  _DAT_00877550 = *(undefined4 *)(param_1 + 0x1c03c);
  _DAT_00dc1770 = *(undefined4 *)(param_1 + 0x1bcd8);
  _DAT_00dc1774 = *(undefined4 *)(param_1 + 0x1bcdc);
  _DAT_00dc1778 = *(undefined4 *)(param_1 + 0x1bce0);
  _DAT_00dc177c = *(undefined4 *)(param_1 + 0x1bce4);
  DAT_00dc1780 = *(int *)(param_1 + 0x1bcec) == 0x3f800000;
  DAT_00dc1781 = *(int *)(param_1 + 0x1bcf0) == 0x3f800000;
  iVar1 = __ftol();
  DAT_00877554 = iVar1;
  iVar2 = __ftol();
  DAT_00877558 = iVar2;
  DAT_0087755c = __ftol();
  if (iVar1 < 0x33) {
    if (iVar1 < 6) goto LAB_0078b8ac;
  }
  else {
    iVar1 = 0x32;
    DAT_00877554 = 0x32;
  }
  DAT_00dc1780 = 1;
LAB_0078b8ac:
  if (iVar1 < iVar2) {
    DAT_00877558 = iVar1;
  }
  DAT_00dc1784 = __ftol();
  DAT_00dc1788 = *(undefined4 *)(param_1 + 0x1b88c);
  DAT_00dc178c = *(undefined4 *)(param_1 + 0x1b890);
  DAT_00dc1790 = *(float *)(param_1 + 0x1b894) != _DAT_007e3380;
  DAT_00dc1791 = *(int *)(param_1 + 0x1b898) == 0x3f800000;
  DAT_00877560 = *(int *)(param_1 + 0x1b890) != -0x40800000;
  DAT_00dc1792 = *(int *)(param_1 + 0x1b89c) == 0x3f800000;
  _DAT_00dc1794 = *(undefined4 *)(param_1 + 0x1b8a0);
  _DAT_00dc1798 = *(undefined4 *)(param_1 + 0x1b8a4);
  DAT_00dc179c = __ftol();
  DAT_00dc17a0 = *(int *)(param_1 + 0x1b8b0) == 0x3f800000;
  DAT_00dc17a4 = __ftol();
  DAT_00dc17a8 = __ftol();
  DAT_00dc17ac = __ftol();
  DAT_00dc17b0 = __ftol();
  DAT_00dc17b4 = *(undefined4 *)(param_1 + 0x1b84c);
  _DAT_00dc17b8 = *(undefined4 *)(param_1 + 0x1b850);
  _DAT_00dc17bc = *(undefined4 *)(param_1 + 0x1b854);
  _DAT_00dc17c0 = *(undefined4 *)(param_1 + 0x1b858);
  _DAT_00dc17c4 = *(undefined4 *)(param_1 + 0x1b85c);
  _DAT_00dc17c8 = *(undefined4 *)(param_1 + 0x1b860);
  _DAT_00dc17cc = *(undefined4 *)(param_1 + 0x1b864);
  _DAT_00dc17d0 = *(undefined4 *)(param_1 + 0x1b868);
  _DAT_00dc17d4 = *(undefined4 *)(param_1 + 0x1b86c);
  DAT_00dc17d8 = *(undefined4 *)(param_1 + 0x1b870);
  DAT_00dc17dc = __ftol();
  _DAT_00877564 = *(undefined4 *)(param_1 + 0x1b878);
  _DAT_00dc17e0 = *(undefined4 *)(param_1 + 0x1b6fc);
  DAT_00dc17e4 = *(undefined4 *)(param_1 + 0x1b700);
  _DAT_00dc17e8 = *(undefined4 *)(param_1 + 0x1b704);
  _DAT_00dc17ec = *(undefined4 *)(param_1 + 0x1b708);
  _DAT_00877568 = *(undefined4 *)(param_1 + 0x1b70c);
  _DAT_0087756c = *(undefined4 *)(param_1 + 0x1b710);
  _DAT_00877570 = *(undefined4 *)(param_1 + 0x1b714);
  _DAT_00877574 = *(undefined4 *)(param_1 + 0x1b718);
  DAT_00877578 = *(int *)(param_1 + 0x1b718) != -0x40800000;
  _DAT_0087757c = *(undefined4 *)(param_1 + 0x1b71c);
  _DAT_00dc17f0 = *(undefined4 *)(param_1 + 0x1b720);
  _DAT_00dc17f4 = *(undefined4 *)(param_1 + 0x1b79c);
  _DAT_00dc17f8 = *(undefined4 *)(param_1 + 0x1b724);
  DAT_00dc17fc = *(undefined4 *)(param_1 + 0x1b728);
  DAT_00dc1800 = *(undefined4 *)(param_1 + 0x1b72c);
  DAT_00dc1804 = *(undefined4 *)(param_1 + 0x1b730);
  _DAT_00dc1808 = *(undefined4 *)(param_1 + 0x1b734);
  _DAT_00dc180c = *(undefined4 *)(param_1 + 0x1b738);
  _DAT_00dc1810 = *(undefined4 *)(param_1 + 0x1b73c);
  _DAT_00dc1814 = *(undefined4 *)(param_1 + 0x1b740);
  _DAT_00dc1818 = *(undefined4 *)(param_1 + 0x1b744);
  _DAT_00dc181c = *(undefined4 *)(param_1 + 0x1b748);
  DAT_00dc1820 = *(undefined4 *)(param_1 + 0x1b74c);
  _DAT_00877588 = *(undefined4 *)(param_1 + 0x1b750);
  DAT_00dc1828 = *(undefined4 *)(param_1 + 0x1b754);
  _DAT_00877580 = *(undefined4 *)(param_1 + 0x1b758);
  _DAT_00877584 = *(undefined4 *)(param_1 + 0x1b75c);
  _DAT_00dc1824 = *(undefined4 *)(param_1 + 0x1b760);
  _DAT_00dc182c = *(undefined4 *)(param_1 + 0x1b764);
  _DAT_00dc1830 = *(undefined4 *)(param_1 + 0x1b768);
  _DAT_00dc1834 = *(undefined4 *)(param_1 + 0x1b76c);
  _DAT_00dc1838 = *(undefined4 *)(param_1 + 0x1b770);
  _DAT_00dc183c = *(undefined4 *)(param_1 + 0x1b774);
  _DAT_00dc1840 = *(undefined4 *)(param_1 + 0x1b778);
  _DAT_00dc1844 = *(float *)(param_1 + 0x1b77c) * _DAT_007e46cc;
  if (*(float *)(param_1 + 0x1b780) <= _DAT_007e3380) {
    _DAT_00dc1848 = 0;
  }
  else {
    _DAT_00dc1848 = *(undefined4 *)(param_1 + 0x1b780);
  }
  _DAT_00dc184c = *(undefined4 *)(param_1 + 0x1b784);
  _DAT_00dc1850 = *(undefined4 *)(param_1 + 0x1b788);
  DAT_0087758c = *(undefined4 *)(param_1 + 0x1b78c);
  _DAT_00877590 = *(undefined4 *)(param_1 + 0x1b790);
  _DAT_00dc1854 = *(undefined4 *)(param_1 + 0x1b794);
  _DAT_00dc1858 = *(undefined4 *)(param_1 + 0x1b7b0);
  _DAT_00dc185c = *(undefined4 *)(param_1 + 0x1b7b4);
  _DAT_00877594 = *(undefined4 *)(param_1 + 0x1b7b8);
  DAT_00dc1860 = *(int *)(param_1 + 0x1b7b8) != -0x40800000;
  _DAT_00dc1864 = *(undefined4 *)(param_1 + 0x1b7c0);
  DAT_00dc1868 = *(float *)(param_1 + 0x1b7c0) != _DAT_007e3380;
  DAT_00877598 = *(undefined4 *)(param_1 + 0x1b7c4);
  DAT_0087759c = *(undefined4 *)(param_1 + 0x1b7c8);
  _DAT_008775a0 = *(undefined4 *)(param_1 + 0x1b7cc);
  DAT_008775a4 = *(undefined4 *)(param_1 + 0x1b7d0);
  _DAT_008775a8 = *(undefined4 *)(param_1 + 0x1b7d4);
  _DAT_008775ac = *(undefined4 *)(param_1 + 0x1b7d8);
  _DAT_008775b0 = *(undefined4 *)(param_1 + 0x1b7dc);
  _DAT_008775b4 = *(undefined4 *)(param_1 + 0x1b7e0);
  _DAT_008775b8 = *(undefined4 *)(param_1 + 0x1b7e4);
  _DAT_008775bc = *(undefined4 *)(param_1 + 0x1b7e8);
  _DAT_008775c0 = *(undefined4 *)(param_1 + 0x1b7ec);
  _DAT_008775c4 = *(undefined4 *)(param_1 + 0x1b7f0);
  _DAT_008775c8 = *(undefined4 *)(param_1 + 0x1b7f4);
  _DAT_008775cc = *(undefined4 *)(param_1 + 0x1b7f8);
  _DAT_008775d0 = *(undefined4 *)(param_1 + 0x1b7fc);
  _DAT_008775d4 = *(undefined4 *)(param_1 + 0x1b800);
  _DAT_008775d8 = *(undefined4 *)(param_1 + 0x1b804);
  _DAT_00dc186c = *(undefined4 *)(param_1 + 0x1b6f0);
  DAT_00dc1870 = __ftol();
  DAT_00dc1874 = __ftol();
  DAT_00dc1878 = __ftol();
  DAT_00dc187c = __ftol();
  DAT_00dc1880 = __ftol();
  DAT_00dc1884 = *(float *)(param_1 + 0x1b818) != _DAT_007e3380;
  _DAT_008775dc = *(undefined4 *)(param_1 + 0x1b81c);
  _DAT_008775e0 = *(undefined4 *)(param_1 + 0x1b820);
  _DAT_008775e4 = *(undefined4 *)(param_1 + 0x1b7bc);
  DAT_00dc1885 = *(int *)(param_1 + 0x1b7bc) != -0x40800000;
  _DAT_008775e8 = *(undefined4 *)(param_1 + 0x1b828);
  DAT_00dc1886 = _DAT_007e3374 <= *(float *)(param_1 + 0x1b830);
  DAT_00dc1887 = *(int *)(param_1 + 0x1b830) == 0x40000000;
  DAT_00dc1888 = _DAT_007e3380 <= *(float *)(param_1 + 0x1b834);
  _DAT_00dc188c = *(float *)(param_1 + 0x1b834) + _DAT_007e3374;
  _DAT_008775ec = *(undefined4 *)(param_1 + 0x1b838);
  _DAT_00dc1890 = *(undefined4 *)(param_1 + 0x1bd30);
  _DAT_00dc1894 = *(undefined4 *)(param_1 + 0x1bd34);
  _DAT_00dc1898 = *(undefined4 *)(param_1 + 0x1bd44);
  _DAT_00dc189c = *(undefined4 *)(param_1 + 0x1bd48);
  _DAT_00dc18a4 = *(undefined4 *)(param_1 + 0x1bd4c);
  DAT_00dc18a0 = *(undefined4 *)(param_1 + 0x1bd50);
  _DAT_00dc18a8 = *(undefined4 *)(param_1 + 0x1bd20);
  _DAT_00dc18ac = *(undefined4 *)(param_1 + 0x1bd28);
  DAT_00dc18b0 = __ftol();
  _DAT_008775f0 = *(undefined4 *)(param_1 + 0x1bd54);
  DAT_00dc18b4 = *(int *)(param_1 + 0x1bd58) == 0x3f800000;
  DAT_00dc18b5 = *(int *)(param_1 + 0x1bd5c) == -0x40800000;
  DAT_00dc18b8 = __ftol();
  DAT_00dc18bc = __ftol();
  _DAT_00dc18c4 = *(undefined4 *)(param_1 + 0x1bd24);
  _DAT_00dc18c8 = *(undefined4 *)(param_1 + 0x1bd2c);
  DAT_008775fc = *(float *)(param_1 + 0x1bd68);
  if (DAT_008775fc < _DAT_007e3380) {
    DAT_008775fc = DAT_008775fc * _DAT_007e3d28;
    DAT_00dc18cc = 1;
  }
  if ((_DAT_007e3380 < *(float *)(param_1 + 0x1bd60)) &&
     (DAT_00dc18c0 = 1, _DAT_007e3374 < *(float *)(param_1 + 0x1bd60))) {
    _DAT_008775f4 = *(undefined4 *)(param_1 + 0x1bd60);
    DAT_00dc18c1 = 1;
  }
  _DAT_008775f8 = *(undefined4 *)(param_1 + 0x1bd64);
  _DAT_00877600 = *(float *)(param_1 + 0x1bd6c) * _DAT_007e543c;
  _DAT_00877604 = *(float *)(param_1 + 0x1bd70) * _DAT_007e543c;
  DAT_00877608 = *(undefined4 *)(param_1 + 0x1bd38);
  _DAT_0087760c = *(undefined4 *)(param_1 + 0x1bd3c);
  _DAT_00877610 = *(undefined4 *)(param_1 + 0x1bd40);
  _DAT_00877614 = *(float *)(param_1 + 0x1bd74) * _DAT_007e543c;
  DAT_00dc18cd = _DAT_007e3380 < *(float *)(param_1 + 0x1bd74);
  _DAT_00dc18d0 = *(undefined4 *)(param_1 + 0x1bd78);
  _DAT_00dc18d4 = *(undefined4 *)(param_1 + 0x1bd7c);
  _DAT_0087761c = *(undefined4 *)(param_1 + 0x1bd80);
  _DAT_00877620 = *(float *)(param_1 + 0x1bd94);
  if ((_DAT_007e3374 < _DAT_00877620) || (_DAT_00877620 < _DAT_007e3380)) {
    _DAT_00877620 = 1.0;
  }
  _DAT_00877624 = *(undefined4 *)(param_1 + 0x1bda4);
  _DAT_00877628 = *(undefined4 *)(param_1 + 0x1bda8);
  _DAT_0087762c = *(undefined4 *)(param_1 + 0x1bdac);
  _DAT_00877630 = *(float *)(param_1 + 0x1bdb0) * _DAT_007e4088;
  _DAT_00877634 = *(undefined4 *)(param_1 + 0x1bd98);
  _DAT_00877638 = *(undefined4 *)(param_1 + 0x1bd9c);
  DAT_0087763c = *(undefined4 *)(param_1 + 0x1bda0);
  DAT_00dc18d8 = __ftol();
  _DAT_00dc18dc = *(undefined4 *)(param_1 + 0x1bdb8);
  _DAT_00dc18e0 = *(undefined4 *)(param_1 + 0x1bdbc);
  _DAT_00dc18e4 = *(undefined4 *)(param_1 + 0x1bdc0);
  DAT_00dc18e8 = _DAT_007e3374 <= *(float *)(param_1 + 0x1bdc4);
  DAT_00dc18e9 = *(int *)(param_1 + 0x1bdc4) == 0x40000000;
  _DAT_00dc18ec = *(undefined4 *)(param_1 + 0x1bdc8);
  DAT_00877640 = *(int *)(param_1 + 0x1bdcc) == 0x3f800000;
  DAT_00dc18f0 = *(int *)(param_1 + 0x1bdd0) == 0x3f800000;
  DAT_00877644 = __ftol();
  DAT_00877648 = (undefined *)__ftol();
  if (DAT_00877648 == (undefined *)0xffffffff) {
    DAT_00877648 = &DAT_00989680;
  }
  DAT_00dc18f4 = __ftol();
  DAT_00dc18f8 = *(int *)(param_1 + 0x1bde0) == 0x3f800000;
  DAT_00dc18f9 = *(int *)(param_1 + 0x1bde4) == 0x3f800000;
  DAT_0087764c = *(int *)(param_1 + 0x1bde8) == 0x3f800000;
  DAT_00877650 = __ftol();
  DAT_00877654 = __ftol();
  DAT_00877658 = __ftol();
  _DAT_00dc18fc = *(undefined4 *)(param_1 + 0x1bd8c);
  _DAT_0087765c = *(undefined4 *)(param_1 + 0x1bd90);
  DAT_00877660 = __ftol();
  DAT_00877664 = __ftol();
  _DAT_00877668 = *(undefined4 *)(param_1 + 0x1bdf8);
  DAT_00dc1900 = *(int *)(param_1 + 0x1bdfc) == 0x3f800000;
  DAT_00dc1901 = *(int *)(param_1 + 0x1be00) == 0x3f800000;
  _DAT_0087766c = *(undefined4 *)(param_1 + 0x1be04);
  _DAT_00dc1904 = *(float *)(param_1 + 0x1be08) * _DAT_007e46cc;
  DAT_00dc1908 = *(int *)(param_1 + 0x1be0c) == 0x3f800000;
  if (*(float *)(param_1 + 0x1be10) != _DAT_007e3380) {
    DAT_00dc1909 = 1;
    DAT_00dc190c = __ftol();
  }
  iVar1 = __ftol();
  DAT_00dc1910 = 0 < iVar1;
  uVar3 = __ftol();
  DAT_00877670 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if (DAT_00877670 == 0) {
    DAT_00877670 = 1;
  }
  DAT_00dc1911 = *(int *)(param_1 + 0x1be18) == 0x3f800000;
  DAT_00dc1912 = *(int *)(param_1 + 0x1be1c) == 0x3f800000;
  DAT_00dc1914 = __ftol();
  if (0 < DAT_00dc1914) {
    DAT_00dc1913 = 1;
  }
  DAT_00dc1918 = *(int *)(param_1 + 0x1be14) == 0x3f800000;
  DAT_00dc1919 = _DAT_007e3374 <= *(float *)(param_1 + 0x1be28);
  DAT_00dc191a = _DAT_007e5e34 <= *(float *)(param_1 + 0x1be28);
  DAT_00dc191b = _DAT_007e384c <= *(float *)(param_1 + 0x1be28);
  DAT_00dc191c = *(int *)(param_1 + 0x1be28) == 0x40800000;
  DAT_00dc191d = *(int *)(param_1 + 0x1be2c) == 0x3f800000;
  DAT_00dc191e = *(int *)(param_1 + 0x1be40) == 0x3f800000;
  DAT_00dc1920 = __ftol();
  DAT_00dc1924 = _DAT_007e3380 < *(float *)(param_1 + 0x1be44);
  DAT_00dc1925 = *(int *)(param_1 + 0x1be48) == 0x3f800000;
  DAT_00dc1928 = __ftol();
  DAT_00877674 = __ftol();
  DAT_00877678 = *(undefined4 *)(param_1 + 0x1be54);
  DAT_0087767c = *(undefined4 *)(param_1 + 0x1be58);
  _DAT_00877680 = *(undefined4 *)(param_1 + 0x1be5c);
  _DAT_00dc192c = __ftol();
  _DAT_00dc1930 = __ftol();
  DAT_00dc1934 = __ftol();
  DAT_00dc1938 = __ftol();
  DAT_00dc193c = __ftol();
  DAT_00dc1940 = __ftol();
  DAT_00dc1944 = __ftol();
  DAT_00dc1948 = __ftol();
  DAT_00dc194c = __ftol();
  DAT_00dc1950 = __ftol();
  _DAT_00dc1954 = __ftol();
  DAT_00877684 = __ftol();
  DAT_00dc1958 = *(int *)(param_1 + 0x1be9c) == 0x3f800000;
  DAT_00dc1959 = *(int *)(param_1 + 0x1bea0) == 0x3f800000;
  DAT_00dc195a = *(int *)(param_1 + 0x1bea4) == 0x3f800000;
  DAT_00dc195b = *(int *)(param_1 + 0x1bea8) == 0x3f800000;
  DAT_00dc195e = *(int *)(param_1 + 0x1beac) == 0x3f800000;
  DAT_0087768c = *(float *)(param_1 + 0x1beb0) == _DAT_007e3380;
  DAT_00dc1960 = *(int *)(param_1 + 0x1beb8) == 0x3f800000;
  DAT_00dc1961 = *(int *)(param_1 + 0x1bebc) == 0x3f800000;
  DAT_00dc195f = (bool)DAT_00dc1960 || *(int *)(param_1 + 0x1beb4) == 0x3f800000;
  DAT_00877688 = __ftol();
  DAT_00dc195c = *(int *)(param_1 + 0x1be94) == 0x3f800000;
  DAT_00dc195d = *(int *)(param_1 + 0x1be98) == 0x3f800000;
  DAT_00dc1962 = *(int *)(param_1 + 0x1bec8) == 0x3f800000;
  DAT_00dc1963 = *(int *)(param_1 + 0x1becc) == 0x3f800000;
  DAT_00dc1964 = *(int *)(param_1 + 0x1bed0) == 0x3f800000;
  _DAT_00dc1968 = *(float *)(param_1 + 0x1bed4) * _DAT_007e543c;
  iVar1 = __ftol();
  DAT_00877690 = 10000;
  if (iVar1 < 0x2711) {
    DAT_00877690 = iVar1;
  }
  DAT_00dc196c = __ftol();
  _DAT_00877694 = __ftol();
  _DAT_00877698 = __ftol();
  local_4 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_c;
  return;
}


