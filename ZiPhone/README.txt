     :::::::::   ::::::::::: :::::::::  :::    :::  ::::::::  ::::    ::: :::::::::: 
           :+:      :+:     :+:    :+: :+:    :+: :+:    :+: :+:+:   :+: :+:         
         +:+       +:+     +:+    +:+ +:+    +:+ +:+    +:+ :+:+:+  +:+ +:+          
       +#+        +#+     +#++:++#+  +#++:++#++ +#+    +:+ +#+ +:+ +#+ +#++:++#      
     +#+         +#+     +#+        +#+    +#+ +#+    +#+ +#+  +#+#+# +#+            
   #+#          #+#     #+#        #+#    #+# #+#    #+# #+#   #+#+# #+#             
 ######### ########### ###        ###    ###  ########  ###    #### ##########       

Ziphone version 2.4 (17th Feb 2008) 23:28 CET
===================================================================================

Starting with version 2.4, Ziphone provides a simple all-in-one interface or a separate
advanced interface for experts or for people who needs more control over the jailbreak
process.  Users with AT&T or other "legitimate" iPhone carrier SIMs may wish to use the
advanced interface in order to retain their own real activation tokens.

The two all-in one modes are:
  ziphone -Z Y
    Jailbreak, activate, and unlock any version
    
  ziphone -Z N
    Jailbreak and activate, but don't unlock
    
To see the advanced commands (same as in older versions), run:
  ziphone -Z A
  
For customers of official iPhone cell carriers, it may be preferable to run:
  ziphone -j
    Just jailbreak, don't touch activation tokens or unlock.  You still still need
    to connect the phone to iTunes to activate.
    
  ziphone -j -u
    Jailbreak and also unlock any version.
    
Note that after running a jailbreak on a "fresh" phone, you will need to manually install
the "BSD Subsystem" package from Installer before many other programs will work.  This package
is NOT included in Ziphone due to size restrictions of the jailbreaking ramdisk.

===================================================================================

Restoring or recovering from problems:

After some errors, it may be necessary to restore your phone to a factory fresh firmware and
start over.  See the included TROUBLESHOOTING.txt for more information on diagnosing problems.

Ziphone can place your device into recovery or DFU mode to help in downgrading or restoring
firmware through iTunes.  To enter DFU mode, run:
  ziphone -D

Then use iTunes to restore to the stock 1.1.2 or 1.1.3 firmware image.  At the end of restore 
you can run Ziphone again on the clean phone using any of the commands listed above.

If you find any missing icons or the iPhone is "strange" may be due to old settings files being
restored to the phone after iTunes finishes installing firmware.  Be sure you choose the option
to NOT save settings and to treat the iPhone as a NEW PHONE.  This is especially important if 
any other jailbreak solution was used on your 1.1.3 phone before Ziphone. 

===================================================================================

Full usage summary:

ziphone -j = Jailbreak
ziphone -a = Activate
ziphone -u = Unlock (Works on both BL3.9 and BL4.6)
ziphone -e = Erase Baseband (BL 3.9 only)
ziphone -b = Downgrade Bootloader from 4.6 to 3.9, update baseband to 4.03.13 and patch the unlock.

ziphone  -D: Enter DFU Mode.
ziphone  -R: Enter Recovery Mode.
ziphone  -N: Exit Recovery Mode (normal boot).
ziphone  -C: Make coffee (checks MD5 sums on included DAT files)

It is also possible to combine most functions e.g. ziphone -a -j -u

*** ONLY USE -b IF YOUR IPHONE IS 1.1.2/1.1.3 OOB ***
If your phone came with 1.1.1 or earlier when it was purchased, you should NOT attempt to
downgrade your baseband bootloader with -b.

===================================================================================

For Windows users not accustomed to using the command line, several double-clickable batch files
are included:

ClickHereX3.9.bat Will call Ziphone -u -j -a (use with iphones that were < 1.1.1 OOB)

ClickHereX4.6.bat will call Ziphone -b -j -a (Downgrades bootloader be warned, use for iphone > 1.1.2)

Jailbreak works on any iPhone version.

Activation works on any iPhone version, except for YouTube on 1.0.X (I am lazy i know)

===================================================================================

No 'dev-team' was directly involved with this work.  
This program is based on the work of everyone who
believed in free software. (Thanks for the toolchain!)

Thanks to geohot for his latest work.
Thanks to Tissy for moral support.
Thanks to iphone-elite.org for support.
Thanks to Viper and Tifel and ortner for being so nice always.
Thanks to pendor for the OS X GUI
Thanks to mzaouara for the ascii art (he didn't use some generator he's an ascii artist !)
Thanks to PsxGunDown to review this readme.

Namaste,
Zibri.

Legal notice:
ZiPhone does NOT change the iPhone internal IMEI.
It changes the baseband to THINK the imei is another one.
No changes are made inside the SECZONE.

To restore the original IMEI, just issue:

ziphone -u (to keep it unlocked)

or the full restore procedure below.

And ANY phone can be restored to a BRAND NEW state, by using this procedure:

ziphone -e

then

ziphone -D

then restore to ANY (1.1.2 or 1.1.3 suggested) version.
