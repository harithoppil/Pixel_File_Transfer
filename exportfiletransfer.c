#include "exportfiletransfer.h"



void entry(void)

{
  int iVar1;
  long *plVar2;
  int unaff_retaddr;
  
  for (plVar2 = (long *)(&stack0x00000008 + (uint)((unaff_retaddr + 1) * 8)); *plVar2 != 0;
      plVar2 = plVar2 + 1) {
  }
  iVar1 = _main();
  __stubs::_exit(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _main(void)

{
  __stubs::_NSApplicationMain();
  return;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::registerDistributedNotificationCenter(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)
            (uVar1,"addObserver:selector:name:object:",param_1,"createNewWindowFromAgent:",
             &cf_com_google_android_mtpviewer_createNewWindow,0);
  (*(code *)0x10002f0f0)
            (uVar1,"addObserver:selector:name:object:",param_1,"closeOldWindowFromAgent:",
             &cf_com_google_android_mtpviewer_closeOldWindow,0);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::awakeFromNib(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  (*(code *)0x10002f0f0)(param_1,"registerDefaults");
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(uVar2,"valueForKey:",&cf_LogLevel);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar3 = _GetLogFileName(&cf_MTPViewer,&cf_MTPViewer_log);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = __stubs::_objc_retainAutorelease(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"fileSystemRepresentation");
  uVar5 = __stubs::_objc_retainAutorelease(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(uVar5,"UTF8String");
  _InitLog(uVar4,uVar1,0x500000);
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar4 = (*(code *)0x10002f0f0)(uVar1,"infoDictionary");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(uVar4,"valueForKey:",*(undefined8 *)__got::_kCFBundleVersionKey);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = __stubs::_objc_retainAutorelease(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"UTF8String");
  _trace(1);
  (*(code *)0x10002f0f8)(uVar1);
  MTPFactory::Init();
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableDictionary,"alloc");
  uVar6 = (*(code *)0x10002f0f0)(uVar1,"init");
  uVar1 = *(undefined8 *)(param_1 + openWindows_);
  *(undefined8 *)(param_1 + openWindows_) = uVar6;
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f0)(param_1,"registerDistributedNotificationCenter");
  (*(code *)0x10002f0f0)(param_1,"tweakMenus");
  (*(code *)0x10002f0f0)(param_1,"registerWithKeystone");
  (*(code *)0x10002f0f0)(&objc::class_t::AgentRunner,"startAgent");
  (*(code *)0x10002f0f0)(param_1,"startBreakpad");
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar5);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::dealloc(ID param_1,SEL param_2)

{
  ID local_28;
  class_t *local_20;
  
  if (*(long *)(param_1 + noDevicesPanel_) != 0) {
    __stubs::_NSReleaseAlertPanel();
  }
  local_20 = &objc::class_t::MTPViewerAppDelegate;
  local_28 = param_1;
  __stubs::_objc_msgSendSuper2(&local_28,"dealloc");
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::createWindows(ID param_1,SEL param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_48 = ZEXT816(0);
  local_38 = 0;
  cVar2 = MTPFactory::GetConnectedDeviceIDs((vector *)local_48);
  if (cVar2 == '\0') {
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar5 = (*(code *)0x10002f0f0)
                      (uVar3,"localizedStringForKey:value:table:",&cf_noDevicesTitle,&cf___,0);
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)0x10002f0f8)(uVar3);
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar3,"localizedStringForKey:value:table:",&cf_noDevicesInformative,&cf___,0)
    ;
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)0x10002f0f8)(uVar3);
    uVar3 = __stubs::_NSGetAlertPanel(uVar5,&cf___,0,0,0,uVar6);
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    lVar1 = noDevicesPanel_;
    uVar3 = *(undefined8 *)(param_1 + noDevicesPanel_);
    *(undefined8 *)(param_1 + noDevicesPanel_) = uVar4;
    (*(code *)0x10002f0f8)(uVar3);
    (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"makeKeyAndOrderFront:",0);
    (*(code *)0x10002f0f8)(uVar6);
    (*(code *)0x10002f0f8)(uVar5);
  }
  else if (local_48._0_8_ != local_48._8_8_) {
    do {
      uVar3 = (*(code *)0x10002f0f0)(&objc::class_t::MTPDeviceID,"alloc");
      uVar3 = (*(code *)0x10002f0f0)
                        (uVar3,"initWithVendorID:productID:locationID:",*local_48._0_8_,
                         local_48._0_8_[1],local_48._0_8_[2]);
      (*(code *)0x10002f0f0)(param_1,"createNewWindow:",uVar3);
      (*(code *)0x10002f0f8)(uVar3);
      local_48._0_8_ = local_48._0_8_ + 3;
    } while (local_48._0_8_ != local_48._8_8_);
  }
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)0x10002f0f0)(uVar3,"valueForKey:",&cf_FirstRunShown);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  cVar2 = (*(code *)0x10002f0f0)(uVar5,"boolValue");
  (*(code *)0x10002f0f8)(uVar5);
  if (cVar2 == '\0') {
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)0x10002f0f0)(uVar3,"setValue:forKey:",uVar5,&cf_FirstRunShown);
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)(&objc::class_t::FirstRunWindowController,"alloc");
    uVar6 = (*(code *)0x10002f0f0)(uVar5,"initWithDelegate:",param_1);
    lVar1 = firstRunWindowController_;
    uVar5 = *(undefined8 *)(param_1 + firstRunWindowController_);
    *(undefined8 *)(param_1 + firstRunWindowController_) = uVar6;
    (*(code *)0x10002f0f8)(uVar5);
    (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"showWindow:",0);
  }
  (*(code *)0x10002f0f8)(uVar3);
  if (local_48._0_8_ != (undefined4 *)0x0) {
    __stubs::__ZdlPv();
  }
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::firstRunWindowControllerWindowWillClose_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + firstRunWindowController_);
  *(undefined8 *)(param_1 + firstRunWindowController_) = 0;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::applicationDidFinishLaunching_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)0x10002f0f0)(param_1,"createWindows");
  return;
}



// Function Stack Size: 0x18 bytes

char MTPViewerAppDelegate::applicationShouldTerminateAfterLastWindowClosed_
               (ID param_1,SEL param_2,ID param_3)

{
  return '\x01';
}



// Function Stack Size: 0x18 bytes

unsigned_long_long
MTPViewerAppDelegate::applicationShouldTerminate_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_BreakpadRelease(*(undefined8 *)(param_1 + breakpad_));
  return 1;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::registerWithKeystone(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"bundleIdentifier");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar1,"infoDictionary");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"objectForKey:",*(undefined8 *)__got::_kCFBundleVersionKey);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___KSRegistration,"registrationWithProductID:",uVar2);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)0x10002f0f0)(uVar1,"bundlePath");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f0)
            (uVar3,
             "registerWithVersion:existenceCheckerType:existenceCheckerString:serverURLString:",
             uVar4,0,uVar5,&cf_https___tools_google_com_service_update2);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f0)(uVar3,"setActive");
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::startBreakpad(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"infoDictionary");
  lVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  if (lVar3 != 0) {
    uVar1 = (*(code *)0x10002f0f0)(lVar3,"objectForKey:",*(undefined8 *)__got::_kCFBundleNameKey);
    lVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    (*(code *)0x10002f0f8)(lVar4);
    if (lVar4 == 0) {
      uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
      uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
      uVar2 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                         "-[MTPViewerAppDelegate startBreakpad]");
      uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
      uVar5 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                         "/Volumes/Android/buildbot/src/googleplex-android/aft/vendor/aft/source/MTPViewer/MTPViewerAppDelegate.mm"
                        );
      uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)0x10002f0f0)
                (uVar1,"handleFailureInFunction:file:lineNumber:description:",uVar2,uVar5,0x90,
                 &cf_plistismissingrequiredbundlename_,0,0,0,0,0);
      (*(code *)0x10002f0f8)(uVar5);
      (*(code *)0x10002f0f8)(uVar2);
      (*(code *)0x10002f0f8)(uVar1);
    }
    uVar1 = (*(code *)0x10002f0f0)(lVar3,"objectForKey:",*(undefined8 *)__got::_kCFBundleVersionKey)
    ;
    lVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    (*(code *)0x10002f0f8)(lVar4);
    if (lVar4 == 0) {
      uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
      uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
      uVar2 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                         "-[MTPViewerAppDelegate startBreakpad]");
      uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
      uVar5 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                         "/Volumes/Android/buildbot/src/googleplex-android/aft/vendor/aft/source/MTPViewer/MTPViewerAppDelegate.mm"
                        );
      uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)0x10002f0f0)
                (uVar1,"handleFailureInFunction:file:lineNumber:description:",uVar2,uVar5,0x92,
                 &cf_plistismissingrequiredbundleversion_,0,0,0,0,0);
      (*(code *)0x10002f0f8)(uVar5);
      (*(code *)0x10002f0f8)(uVar2);
      (*(code *)0x10002f0f8)(uVar1);
    }
    uVar1 = __stubs::_BreakpadCreate(lVar3);
    *(undefined8 *)(param_1 + breakpad_) = uVar1;
    uVar2 = _GetLogFileName(&cf_MTPViewer,&cf_MTPViewer_log);
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    __stubs::_BreakpadAddLogFile(uVar1,uVar2);
    (*(code *)0x10002f0f8)(uVar2);
    uVar1 = *(undefined8 *)(param_1 + breakpad_);
    uVar2 = _GetLogFileName(&cf_MTPViewer,&cf_MTPAgent_log);
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    __stubs::_BreakpadAddLogFile(uVar1,uVar2);
    (*(code *)0x10002f0f8)(uVar2);
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(lVar3);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::createNewWindowFromAgent_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"object");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  __stubs::_NSLog(&cf_createmtpDeviceID___,uVar2);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&objc::class_t::MTPDeviceID,"alloc");
  uVar3 = (*(code *)0x10002f0f0)(uVar1,"userInfo");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar2 = (*(code *)0x10002f0f0)(uVar2,"initWithDictionary:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f0)(param_1,"createNewWindow:",uVar2);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::closeOldWindowFromAgent_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"object");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  __stubs::_NSLog(&cf_closemtpDeviceID___,uVar2);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&objc::class_t::MTPDeviceID,"alloc");
  uVar3 = (*(code *)0x10002f0f0)(uVar1,"userInfo");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar2 = (*(code *)0x10002f0f0)(uVar2,"initWithDictionary:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f0)(param_1,"closeOldWindow:",uVar2);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::createNewWindow_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  lVar1 = openWindows_;
  uVar5 = *(undefined8 *)(param_1 + openWindows_);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"description");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar5,"objectForKey:",uVar4);
  lVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  if (lVar6 == 0) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_40 = (*(code *)0x10002f0f0)(uVar3,"vendorID");
    local_3c = (*(code *)0x10002f0f0)(uVar3,"productID");
    local_38 = (*(code *)0x10002f0f0)(uVar3,"locationID");
    puVar7 = (undefined8 *)MTPFactory::CreateRepository((DeviceID *)&local_40);
    if (puVar7 != (undefined8 *)0x0) {
      iVar2 = (**(code **)*puVar7)(puVar7);
      if (iVar2 == 0) {
        uVar5 = (*(code *)0x10002f0f0)(&objc::class_t::MTPOutlineController,"alloc");
        lVar6 = (*(code *)0x10002f0f0)(uVar5,"initWithRepository:",puVar7);
        (*(code *)0x10002f0f0)(lVar6,"showWindow:",0);
        (*(code *)0x10002f0f0)(lVar6,"setDelegate:",param_1);
        uVar5 = *(undefined8 *)(param_1 + lVar1);
        uVar4 = (*(code *)0x10002f0f0)(uVar3,"description");
        uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)0x10002f0f0)(uVar5,"setObject:forKey:",lVar6,uVar4);
        (*(code *)0x10002f0f8)(uVar4);
        lVar1 = noDevicesPanel_;
        if (*(long *)(param_1 + noDevicesPanel_) != 0) {
          __stubs::_NSReleaseAlertPanel();
          uVar5 = *(undefined8 *)(param_1 + lVar1);
          *(undefined8 *)(param_1 + lVar1) = 0;
          (*(code *)0x10002f0f8)(uVar5);
        }
        goto LAB_100002c78;
      }
    }
    _trace(3);
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    uVar4 = (*(code *)0x10002f0f0)
                      (uVar5,"localizedStringForKey:value:table:",&cf_errorGenericDescription,&cf___
                       ,0);
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    uVar8 = (*(code *)0x10002f0f0)
                      (uVar5,"localizedStringForKey:value:table:",&cf_errorConnectToDeviceTitle,
                       &cf___,0);
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSAlert,
                       "alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:"
                       ,uVar8,0,0,0,&cf___,uVar4);
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)0x10002f0f0)(uVar5,"setAlertStyle:",0);
    (*(code *)0x10002f0f0)(uVar5,"runModal");
    (*(code *)0x10002f0f0)(*(undefined8 *)__got::_NSApp,"terminate:",param_1);
    (*(code *)0x10002f0f8)(uVar5);
    (*(code *)0x10002f0f8)(uVar8);
    (*(code *)0x10002f0f8)(uVar4);
  }
LAB_100002c78:
  (*(code *)0x10002f0f8)(lVar6);
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::closeAllWindows(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  lVar2 = openWindows_;
  local_38 = *(long *)__got::___stack_chk_guard;
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar3 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + openWindows_));
  uVar4 = (*(code *)0x10002f0f0)
                    (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar4 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar6 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar3);
        }
        uVar5 = (*(code *)0x10002f0f0)
                          (*(undefined8 *)(param_1 + lVar2),"objectForKey:",
                           *(undefined8 *)(local_f8._8_8_ + uVar6 * 8));
        uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)0x10002f0f0)(uVar5,"close");
        (*(code *)0x10002f0f8)(uVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      uVar4 = (*(code *)0x10002f0f0)
                        (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar4 != 0);
  }
  (*(code *)0x10002f0f8)(uVar3);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::closeOldWindow_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)0x10002f0f0)(param_3,"description");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  lVar1 = openWindows_;
  uVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + openWindows_),"objectForKey:",uVar2);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar3,"close");
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"removeObjectForKey:",uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::tweakMenus(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + fileMenu_);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar2,"localizedStringForKey:value:table:",&cf_menuFile,&cf___,0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar1,"setTitle:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar1 = *(undefined8 *)(param_1 + goMenu_);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar2,"localizedStringForKey:value:table:",&cf_menuGo,&cf___,0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar1,"setTitle:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar1 = *(undefined8 *)(param_1 + windowMenu_);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar2,"localizedStringForKey:value:table:",&cf_menuWindow,&cf___,0)
  ;
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar1,"setTitle:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar1 = *(undefined8 *)(param_1 + helpMenu_);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar2,"localizedStringForKey:value:table:",&cf_menuHelp,&cf___,0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar1,"setTitle:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar1 = *(undefined8 *)(param_1 + servicesMenu_);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)
                    (uVar2,"localizedStringForKey:value:table:",&cf_menuServices,&cf___,0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar1,"setTitle:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::outlineWillClose_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + openWindows_);
  uVar2 = (*(code *)0x10002f0f0)(param_3,"deviceIDForRepository");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar1,"removeObjectForKey:",uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::registerDefaults(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar1,
                     &cf_CopyIsModal,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"registerDefaults:",uVar2);
  (*(code *)0x10002f0f8)(uVar1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPViewerAppDelegate::showHelp_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSURL,"URLWithString:",
                     &cf_https___support_google_com_nexus_answer_2840804);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar2,"openURL:",uVar1);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::aboutApplicationMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuAbout,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::hideMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuHide,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::hideOthersMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuHideOthers,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::showAllMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuShowAll,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::quitMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuQuit,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::newFolderMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuNewFolder,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::closeWindowMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuCloseWindow,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::deleteMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuDelete,&cf___,0)
  ;
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::backMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuBack,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::forwardMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuForward,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::enclosingMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuEnclosing,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::openMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuOpenFolder,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::minimizeMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuMinimize,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::zoomMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuZoom,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::bringAllToFrontMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuBringAllToFront,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPViewerAppDelegate::androidFileTransferHelpMenuItemTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuHelpItem,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

void MTPViewerAppDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_storeStrong(noDevicesPanel_ + param_1,0);
  __stubs::_objc_storeStrong(firstRunWindowController_ + param_1,0);
  __stubs::_objc_storeStrong(openWindows_ + param_1,0);
  __stubs::_objc_storeStrong(servicesMenu_ + param_1,0);
  __stubs::_objc_storeStrong(helpMenu_ + param_1,0);
  __stubs::_objc_storeStrong(windowMenu_ + param_1,0);
  __stubs::_objc_storeStrong(goMenu_ + param_1,0);
  __stubs::_objc_storeStrong(param_1 + fileMenu_,0);
  return;
}



long ___clang_call_terminate(undefined8 param_1)

{
  auto_ptr_DeviceInfo_ *this;
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  Repository *extraout_RDX;
  undefined4 *puVar11;
  undefined8 uStack_48;
  class_t *pcStack_40;
  
  __stubs::___cxa_begin_catch();
  __stubs::__ZSt9terminatev();
  pcStack_40 = &objc::class_t::MTPOutlineController;
  uStack_48 = param_1;
  lVar4 = __stubs::_objc_msgSendSuper2(&uStack_48,"initWithWindowNibName:",&cf_MainWindow);
  if (lVar4 != 0) {
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSSortDescriptor,"alloc");
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar5,"initWithKey:ascending:selector:",&cf_name,1,
                       "localizedCaseInsensitiveCompare:");
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"alloc");
    uVar7 = (*(code *)0x10002f0f0)(uVar5,"initWithObjects:",uVar6,0);
    uVar5 = *(undefined8 *)(lVar4 + MTPOutlineController::sortDescriptors_);
    *(undefined8 *)(lVar4 + MTPOutlineController::sortDescriptors_) = uVar7;
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)(lVar4,"window");
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSValueTransformer,"valueTransformerForName:",
                       &cf_FileSizeHumanTransformer);
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = *(undefined8 *)(lVar4 + MTPOutlineController::humanSizeTransformer_);
    *(undefined8 *)(lVar4 + MTPOutlineController::humanSizeTransformer_) = uVar7;
    (*(code *)0x10002f0f8)(uVar5);
    lVar2 = MTPOutlineController::repository_;
    std::auto_ptr<Repository>::reset
              ((auto_ptr_Repository_ *)(lVar4 + MTPOutlineController::repository_),extraout_RDX);
    puVar8 = (undefined8 *)__stubs::__Znwm(0x38);
    lVar10 = MTPOutlineController::deviceInfo_;
    this = (auto_ptr_DeviceInfo_ *)(lVar4 + MTPOutlineController::deviceInfo_);
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar9 = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
    *puVar8 = puVar9;
    puVar8[1] = puVar9;
    puVar8[2] = puVar9;
    puVar8[3] = puVar9;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    std::auto_ptr<DeviceInfo>::reset(this,(DeviceInfo *)puVar8);
    iVar3 = (**(code **)(**(long **)(lVar4 + lVar2) + 8))
                      (*(long **)(lVar4 + lVar2),*(undefined8 *)(lVar4 + lVar10));
    if (iVar3 == 0) {
      uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar7 = (*(code *)0x10002f0f0)(uVar5,"init");
      uVar5 = *(undefined8 *)(lVar4 + MTPOutlineController::pathStack_);
      *(undefined8 *)(lVar4 + MTPOutlineController::pathStack_) = uVar7;
      (*(code *)0x10002f0f8)(uVar5);
      *(undefined8 *)(lVar4 + MTPOutlineController::pathStackInsertionPoint_) = 0;
      lVar2 = MTPOutlineController::storageMatrix_;
      (*(code *)0x10002f0f0)
                (*(undefined8 *)(lVar4 + MTPOutlineController::storageMatrix_),"setDelegate:",lVar4)
      ;
      puVar11 = *(undefined4 **)(*(long *)(lVar4 + MTPOutlineController::deviceInfo_) + 0x20);
      puVar1 = *(undefined4 **)(*(long *)(lVar4 + MTPOutlineController::deviceInfo_) + 0x28);
      lVar10 = (long)puVar1 - (long)puVar11 >> 5;
      if (lVar10 == 0) {
        (*(code *)0x10002f0f0)
                  (lVar4,"performSelectorOnMainThread:withObject:waitUntilDone:",
                   "unlockDeviceError:",0,0);
      }
      else {
        if (lVar10 == 1) {
          (*(code *)0x10002f0f0)(*(undefined8 *)(lVar4 + lVar2),"setHidden:",1);
        }
        else {
          uVar5 = *(undefined8 *)(lVar4 + lVar2);
          if (puVar11 != puVar1) {
            do {
              uVar7 = (*(code *)0x10002f0f0)
                                (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                                 *(undefined8 *)(puVar11 + 6));
              uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
              (*(code *)0x10002f0f0)(uVar5,"addButton:identifier:",uVar7,*puVar11);
              (*(code *)0x10002f0f8)(uVar7);
              puVar11 = puVar11 + 8;
              uVar5 = *(undefined8 *)(lVar4 + lVar2);
            } while (puVar11 !=
                     *(undefined4 **)(*(long *)(lVar4 + MTPOutlineController::deviceInfo_) + 0x28));
          }
          (*(code *)0x10002f0f0)(uVar5,"performLayout");
        }
        (*(code *)0x10002f0f0)
                  (lVar4,"setCurrentRoot:storage:",&cf__,
                   **(undefined4 **)(*(long *)(lVar4 + MTPOutlineController::deviceInfo_) + 0x20));
      }
    }
    else if (iVar3 == 5) {
      (*(code *)0x10002f0f0)
                (lVar4,"performSelectorOnMainThread:withObject:waitUntilDone:","unlockDeviceError:",
                 0,0);
    }
    else {
      (*(code *)0x10002f0f0)
                (lVar4,"performSelectorOnMainThread:withObject:waitUntilDone:","criticalError:",0,0)
      ;
    }
    (*(code *)0x10002f0f8)(uVar6);
  }
  return lVar4;
}



// Function Stack Size: 0x18 bytes

ID MTPOutlineController::initWithRepository_(ID param_1,SEL param_2,Repository *param_3)

{
  auto_ptr_DeviceInfo_ *this;
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::MTPOutlineController;
  local_40 = param_1;
  IVar4 = __stubs::_objc_msgSendSuper2(&local_40,"initWithWindowNibName:",&cf_MainWindow);
  if (IVar4 != 0) {
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSSortDescriptor,"alloc");
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar5,"initWithKey:ascending:selector:",&cf_name,1,
                       "localizedCaseInsensitiveCompare:");
    uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"alloc");
    uVar7 = (*(code *)0x10002f0f0)(uVar5,"initWithObjects:",uVar6,0);
    uVar5 = *(undefined8 *)(IVar4 + sortDescriptors_);
    *(undefined8 *)(IVar4 + sortDescriptors_) = uVar7;
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)(IVar4,"window");
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)0x10002f0f8)(uVar5);
    uVar5 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSValueTransformer,"valueTransformerForName:",
                       &cf_FileSizeHumanTransformer);
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = *(undefined8 *)(IVar4 + humanSizeTransformer_);
    *(undefined8 *)(IVar4 + humanSizeTransformer_) = uVar7;
    (*(code *)0x10002f0f8)(uVar5);
    lVar2 = repository_;
    std::auto_ptr<Repository>::reset((auto_ptr_Repository_ *)(IVar4 + repository_),param_3);
    puVar8 = (undefined8 *)__stubs::__Znwm(0x38);
    lVar10 = deviceInfo_;
    this = (auto_ptr_DeviceInfo_ *)(IVar4 + deviceInfo_);
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar9 = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
    *puVar8 = puVar9;
    puVar8[1] = puVar9;
    puVar8[2] = puVar9;
    puVar8[3] = puVar9;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    std::auto_ptr<DeviceInfo>::reset(this,(DeviceInfo *)puVar8);
    iVar3 = (**(code **)(**(long **)(IVar4 + lVar2) + 8))
                      (*(long **)(IVar4 + lVar2),*(undefined8 *)(IVar4 + lVar10));
    if (iVar3 == 0) {
      uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar7 = (*(code *)0x10002f0f0)(uVar5,"init");
      uVar5 = *(undefined8 *)(IVar4 + pathStack_);
      *(undefined8 *)(IVar4 + pathStack_) = uVar7;
      (*(code *)0x10002f0f8)(uVar5);
      *(undefined8 *)(IVar4 + pathStackInsertionPoint_) = 0;
      lVar2 = storageMatrix_;
      (*(code *)0x10002f0f0)(*(undefined8 *)(IVar4 + storageMatrix_),"setDelegate:",IVar4);
      puVar11 = *(undefined4 **)(*(long *)(IVar4 + deviceInfo_) + 0x20);
      puVar1 = *(undefined4 **)(*(long *)(IVar4 + deviceInfo_) + 0x28);
      lVar10 = (long)puVar1 - (long)puVar11 >> 5;
      if (lVar10 == 0) {
        (*(code *)0x10002f0f0)
                  (IVar4,"performSelectorOnMainThread:withObject:waitUntilDone:",
                   "unlockDeviceError:",0,0);
      }
      else {
        if (lVar10 == 1) {
          (*(code *)0x10002f0f0)(*(undefined8 *)(IVar4 + lVar2),"setHidden:",1);
        }
        else {
          uVar5 = *(undefined8 *)(IVar4 + lVar2);
          if (puVar11 != puVar1) {
            do {
              uVar7 = (*(code *)0x10002f0f0)
                                (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                                 *(undefined8 *)(puVar11 + 6));
              uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
              (*(code *)0x10002f0f0)(uVar5,"addButton:identifier:",uVar7,*puVar11);
              (*(code *)0x10002f0f8)(uVar7);
              puVar11 = puVar11 + 8;
              uVar5 = *(undefined8 *)(IVar4 + lVar2);
            } while (puVar11 != *(undefined4 **)(*(long *)(IVar4 + deviceInfo_) + 0x28));
          }
          (*(code *)0x10002f0f0)(uVar5,"performLayout");
        }
        (*(code *)0x10002f0f0)
                  (IVar4,"setCurrentRoot:storage:",&cf__,
                   **(undefined4 **)(*(long *)(IVar4 + deviceInfo_) + 0x20));
      }
    }
    else if (iVar3 == 5) {
      (*(code *)0x10002f0f0)
                (IVar4,"performSelectorOnMainThread:withObject:waitUntilDone:","unlockDeviceError:",
                 0,0);
    }
    else {
      (*(code *)0x10002f0f0)
                (IVar4,"performSelectorOnMainThread:withObject:waitUntilDone:","criticalError:",0,0)
      ;
    }
    (*(code *)0x10002f0f8)(uVar6);
  }
  return IVar4;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineController::deviceIDForRepository(ID param_1,SEL param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  puVar4 = (undefined4 *)(**(code **)(**(long **)(param_1 + repository_) + 0x10))();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = puVar4[2];
  uVar5 = (*(code *)0x10002f0f0)(&objc::class_t::MTPDeviceID,"alloc");
  uVar5 = (*(code *)0x10002f0f0)(uVar5,"initWithVendorID:productID:locationID:",uVar1,uVar2,uVar3);
  uVar6 = (*(code *)0x10002f0f0)(uVar5,"description");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  IVar7 = __stubs::_objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// Function Stack Size: 0x10 bytes

void MTPOutlineController::awakeFromNib(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = outlineView_;
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"setTarget:",param_1);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"setDoubleAction:","doubleAction:");
  uVar2 = (*(code *)0x10002f0f0)
                    (*(undefined8 *)(param_1 + lVar1),"tableColumnWithIdentifier:",&cf_name);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(uVar3,"headerCell");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar4,"localizedStringForKey:value:table:",&cf_filenameColumnHeaderTitle,&cf___
                     ,0);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f0)(uVar2,"setTitle:",uVar5);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
  lVar1 = outlineView_;
  uVar2 = (*(code *)0x10002f0f0)
                    (*(undefined8 *)(param_1 + outlineView_),"tableColumnWithIdentifier:",
                     &cf_lastModified);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(uVar4,"headerCell");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)
                    (uVar5,"localizedStringForKey:value:table:",&cf_lastModifiedColumnHeaderTitle,
                     &cf___,0);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)(uVar2,"setTitle:",uVar6);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)
                    (*(undefined8 *)(param_1 + lVar1),"tableColumnWithIdentifier:",&cf_size);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(uVar5,"headerCell");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)0x10002f0f0)
                    (uVar6,"localizedStringForKey:value:table:",&cf_sizeColumnHeaderTitle,&cf___,0);
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)0x10002f0f0)(uVar2,"setTitle:",uVar7);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  uVar6 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)__got::_NSFilenamesPboardType,
                     &cf_CorePasteboardFlavorType0x6974756E,0);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)(uVar2,"registerForDraggedTypes:",uVar6);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f0)
            (*(undefined8 *)(param_1 + lVar1),"setDraggingSourceOperationMask:forLocal:",
             0xffffffffffffffff,1);
  (*(code *)0x10002f0f0)
            (*(undefined8 *)(param_1 + lVar1),"setDraggingSourceOperationMask:forLocal:",
             0xffffffffffffffff,0);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x20 bytes

long_long MTPOutlineController::outlineView_numberOfChildrenOfItem_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long_long lVar4;
  
  lVar2 = (*(code *)__got::_objc_retain)(param_4);
  if (lVar2 == 0) {
    lVar2 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + root_));
  }
  uVar3 = (*(code *)0x10002f0f0)(&objc::class_t::MTPOutlineNode,"class");
  cVar1 = (*(code *)0x10002f0f0)(lVar2,"isKindOfClass:",uVar3);
  lVar4 = 0;
  if (cVar1 != '\0') {
    lVar4 = (*(code *)0x10002f0f0)(lVar2,"childCount");
  }
  (*(code *)0x10002f0f8)(lVar2);
  return lVar4;
}



// Function Stack Size: 0x20 bytes

char MTPOutlineController::outlineView_isItemExpandable_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_4);
  uVar3 = (*(code *)0x10002f0f0)(&objc::class_t::MTPOutlineNode,"class");
  cVar1 = (*(code *)0x10002f0f0)(uVar2,"isKindOfClass:",uVar3);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = (*(code *)0x10002f0f0)(uVar2,"isFolder");
  }
  (*(code *)0x10002f0f8)(uVar2);
  return cVar1;
}



// Function Stack Size: 0x28 bytes

ID MTPOutlineController::outlineView_child_ofItem_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  
  lVar1 = (*(code *)__got::_objc_retain)(param_5);
  if (lVar1 == 0) {
    lVar1 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + root_));
  }
  uVar2 = (*(code *)0x10002f0f0)(lVar1,"childAtIndex:",param_4);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(lVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x28 bytes

ID MTPOutlineController::outlineView_objectValueForTableColumn_byItem_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  undefined8 uVar8;
  
  puVar1 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_4);
  uVar4 = (*(code *)puVar1)(param_5);
  uVar5 = (*(code *)0x10002f0f0)(param_4,"identifier");
  (*(code *)0x10002f0f8)(uVar3);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  cVar2 = (*(code *)0x10002f0f0)(uVar3,"isEqual:",&cf_name);
  if (cVar2 == '\0') {
    cVar2 = (*(code *)0x10002f0f0)(uVar3,"isEqual:",&cf_lastModified);
    if (cVar2 == '\0') {
      cVar2 = (*(code *)0x10002f0f0)(uVar3,"isEqual:",&cf_size);
      if (cVar2 == '\0') {
        pcVar6 = &cf___;
        (*(code *)__got::_objc_retain)(&cf___);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + humanSizeTransformer_);
        uVar8 = (*(code *)0x10002f0f0)(uVar4,"nodeSizeNumber");
        uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
        uVar5 = (*(code *)0x10002f0f0)(uVar5,"transformedValue:",uVar8);
        pcVar6 = (cfstringStruct *)__stubs::_objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)0x10002f0f8)(uVar8);
      }
      goto LAB_10000480e;
    }
    uVar5 = (*(code *)0x10002f0f0)(uVar4,"lastModified");
  }
  else {
    uVar5 = (*(code *)0x10002f0f0)(uVar4,"name");
  }
  pcVar6 = (cfstringStruct *)__stubs::_objc_retainAutoreleasedReturnValue(uVar5);
LAB_10000480e:
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar4);
  IVar7 = __stubs::_objc_autoreleaseReturnValue(pcVar6);
  return IVar7;
}



// Function Stack Size: 0x30 bytes

unsigned_long_long
MTPOutlineController::outlineView_validateDrop_proposedItem_proposedChildIndex_
          (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  unsigned_long_long uVar8;
  
  puVar1 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  lVar5 = (*(code *)puVar1)(param_5);
  if (lVar5 == 0) {
    lVar5 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + root_));
  }
  uVar6 = (*(code *)0x10002f0f0)(uVar4,"draggingSourceOperationMask");
  uVar8 = 0;
  if ((uVar6 & 1) != 0) {
    cVar2 = (*(code *)0x10002f0f0)(lVar5,"isFolder");
    if (cVar2 == '\0') {
      uVar7 = (*(code *)0x10002f0f0)(uVar3,"parentForItem:",lVar5);
      uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)0x10002f0f0)(uVar3,"setDropItem:dropChildIndex:",uVar7,0xffffffffffffffff);
      (*(code *)0x10002f0f8)(uVar7);
      uVar8 = 1;
    }
    else {
      uVar8 = 1;
      if (param_6 != 0xffffffffffffffff) {
        uVar8 = 1;
        (*(code *)0x10002f0f0)(uVar3,"setDropItem:dropChildIndex:",lVar5,0xffffffffffffffff);
      }
    }
  }
  (*(code *)0x10002f0f8)(lVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  return uVar8;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x30 bytes

char MTPOutlineController::outlineView_acceptDrop_item_childIndex_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar4 = (*(code *)__got::_objc_retain)(param_4);
  lVar5 = (*(code *)puVar2)(param_5);
  if (lVar5 == 0) {
    lVar5 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + root_));
  }
  if (param_6 == 0xffffffffffffffff) {
    cVar3 = (*(code *)0x10002f0f0)(lVar5,"isFolder");
    if (cVar3 != '\0') {
      uVar6 = (*(code *)0x10002f0f0)(uVar4,"draggingPasteboard");
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)0x10002f0f0)
                        (*(undefined8 *)(param_1 + outlineView_),"registeredDraggedTypes");
      uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = (*(code *)0x10002f0f0)(uVar6,"availableTypeFromArray:",uVar7);
      uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)0x10002f0f8)(uVar7);
      puVar2 = __got::_NSFilenamesPboardType;
      cVar3 = (*(code *)0x10002f0f0)
                        (uVar8,"isEqualToString:",*(undefined8 *)__got::_NSFilenamesPboardType);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)0x10002f0f0)
                          (uVar8,"isEqualToString:",&cf_CorePasteboardFlavorType0x6974756E);
        if (cVar3 != '\0') {
          uVar7 = (*(code *)0x10002f0f0)
                            (uVar6,"propertyListForType:",&cf_CorePasteboardFlavorType0x6974756E);
          uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
          uVar12 = (*(code *)0x10002f0f0)(uVar7,"valueForKey:",&cf_Tracks);
          uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
          uVar13 = (*(code *)0x10002f0f0)(uVar12,"allValues");
          uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
          (*(code *)0x10002f0f8)(uVar12);
          uVar12 = (*(code *)0x10002f0f0)(uVar13,"count");
          uVar12 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar12)
          ;
          lVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
          local_c8 = ZEXT816(0);
          local_d8 = ZEXT816(0);
          local_e8 = ZEXT816(0);
          local_f8 = ZEXT816(0);
          uVar12 = (*(code *)__got::_objc_retain)(uVar13);
          uVar10 = (*(code *)0x10002f0f0)
                             (uVar12,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,
                              0x10);
          if (uVar10 != 0) {
            lVar1 = *local_e8._0_8_;
            do {
              uVar14 = 0;
              do {
                if (*local_e8._0_8_ != lVar1) {
                  __stubs::_objc_enumerationMutation(uVar12);
                }
                uVar13 = (*(code *)0x10002f0f0)
                                   (*(undefined8 *)(local_f8._8_8_ + uVar14 * 8),"valueForKey:",
                                    &cf_Location);
                uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
                uVar11 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSURL,"URLWithString:",uVar13);
                uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
                (*(code *)0x10002f0f8)(uVar13);
                cVar3 = (*(code *)0x10002f0f0)(uVar11,"isFileURL");
                if (cVar3 != '\0') {
                  uVar13 = (*(code *)0x10002f0f0)(uVar11,"path");
                  uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
                  (*(code *)0x10002f0f0)(lVar9,"addObject:",uVar13);
                  (*(code *)0x10002f0f8)(uVar13);
                }
                (*(code *)0x10002f0f8)(uVar11);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar10);
              uVar10 = (*(code *)0x10002f0f0)
                                 (uVar12,"countByEnumeratingWithState:objects:count:",local_f8,
                                  local_b8,0x10);
            } while (uVar10 != 0);
          }
          (*(code *)0x10002f0f8)(uVar12);
          (*(code *)0x10002f0f8)(uVar12);
          (*(code *)0x10002f0f8)(uVar7);
          goto LAB_100004e2f;
        }
        cVar3 = '\0';
      }
      else {
        uVar7 = (*(code *)0x10002f0f0)(uVar6,"propertyListForType:",*(undefined8 *)puVar2);
        lVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
LAB_100004e2f:
        cVar3 = '\x01';
        if (lVar9 != 0) {
          uVar7 = (*(code *)0x10002f0f0)
                            (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
          uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
          uVar12 = (*(code *)0x10002f0f0)(param_1,"window");
          uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
          uVar13 = (*(code *)0x10002f0f0)(uVar7,"addCopyStatusForWindow:",uVar12);
          uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
          (*(code *)0x10002f0f8)(uVar12);
          (*(code *)0x10002f0f8)(uVar7);
          uVar7 = (*(code *)0x10002f0f0)(param_1,"friendlyNameOfNode:",lVar5);
          uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)0x10002f0f0)(uVar13,"setDestination:",uVar7);
          (*(code *)0x10002f0f8)(uVar7);
          (*(code *)0x10002f0f0)(param_1,"preflightCopyLocalFiles:statusController:",lVar9,uVar13);
          (*(code *)0x10002f0f0)(uVar13,"setPreflightComplete:",1);
          uVar7 = (*(code *)0x10002f0f0)
                            (&_OBJC_CLASS___NSArray,"arrayWithObjects:",lVar9,lVar5,uVar13,0);
          uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)0x10002f0f0)
                    (param_1,"performSelectorInBackground:withObject:","copyLocalFilesThread:",uVar7
                    );
          (*(code *)0x10002f0f8)(uVar7);
          (*(code *)0x10002f0f8)(uVar13);
          (*(code *)0x10002f0f8)(lVar9);
        }
      }
      (*(code *)0x10002f0f8)(uVar8);
      (*(code *)0x10002f0f8)(uVar6);
      goto LAB_100004fd6;
    }
  }
  cVar3 = '\0';
LAB_100004fd6:
  (*(code *)0x10002f0f8)(lVar5);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return cVar3;
  }
  cVar3 = __stubs::___stack_chk_fail();
  return cVar3;
}



// WARNING: Could not reconcile some variable overlaps

void MTPOutlineController::writeItems_toPasteboard_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  uVar4 = (*(code *)puVar2)(param_4);
  uVar5 = (*(code *)0x10002f0f0)(uVar4,"types");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)(uVar5,"mutableCopy");
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f0)(uVar6,"addObject:",*(undefined8 *)__got::_NSFilesPromisePboardType);
  (*(code *)0x10002f0f0)(uVar4,"declareTypes:owner:",uVar6,param_1);
  uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar7 = (*(code *)0x10002f0f0)(uVar3,"count");
  uVar7 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar7);
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar8 = (*(code *)__got::_objc_retain)(uVar3);
  uVar9 = (*(code *)0x10002f0f0)
                    (uVar8,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10,
                     param_6,uVar3);
  if (uVar9 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar12 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar8);
        }
        uVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(local_f8._8_8_ + uVar12 * 8),"path");
        uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
        uVar10 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNull,&DAT_100022538);
        uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
        uVar11 = (*(code *)0x10002f0f0)(uVar3,"pathExtension");
        uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
        (*(code *)0x10002f0f0)(uVar5,"setValue:forKey:",uVar10,uVar11);
        (*(code *)0x10002f0f8)(uVar11);
        (*(code *)0x10002f0f8)(uVar10);
        (*(code *)0x10002f0f0)(uVar7,"addObject:",uVar3);
        (*(code *)0x10002f0f8)(uVar3);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar9);
      uVar9 = (*(code *)0x10002f0f0)
                        (uVar8,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar9 != 0);
  }
  (*(code *)0x10002f0f8)(uVar8);
  uVar3 = (*(code *)0x10002f0f0)(uVar5,"allKeys");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)
            (uVar4,"setPropertyList:forType:",uVar3,*(undefined8 *)__got::_NSFilesPromisePboardType)
  ;
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f0)
            (uVar4,"setPropertyList:forType:",uVar7,&cf_com_google_android_mtpviewer_allpaths);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar8);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x28 bytes

char MTPOutlineController::outlineView_writeItems_toPasteboard_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_4);
  (*(code *)0x10002f0f0)(param_1,"writeItems:toPasteboard:",uVar1,param_5);
  (*(code *)0x10002f0f8)(uVar1);
  return '\x01';
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x28 bytes

void MTPOutlineController::outlineView_startPromiseFileCopy_dropDestination_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar3 = (*(code *)__got::_objc_retain)(param_4);
  uVar4 = (*(code *)puVar2)(param_5);
  uVar5 = (*(code *)0x10002f0f0)
                    (param_4,"propertyListForType:",&cf_com_google_android_mtpviewer_allpaths);
  (*(code *)0x10002f0f8)(uVar3);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)0x10002f0f0)(uVar3,"count");
  uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar5);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar3 = (*(code *)__got::_objc_retain)(uVar3);
  uVar6 = (*(code *)0x10002f0f0)
                    (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar6 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar11 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar3);
        }
        uVar7 = (*(code *)0x10002f0f0)
                          (param_1,"nodeForPath:",*(undefined8 *)(local_f8._8_8_ + uVar11 * 8));
        uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)0x10002f0f0)(uVar5,"addObject:",uVar7);
        (*(code *)0x10002f0f8)(uVar7);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
      uVar6 = (*(code *)0x10002f0f0)
                        (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar6 != 0);
  }
  (*(code *)0x10002f0f8)(uVar3);
  uVar7 = (*(code *)0x10002f0f0)
                    (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)0x10002f0f0)(uVar7,"addCopyStatusForWindow:",uVar8);
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f8)(uVar7);
  uVar7 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)0x10002f0f0)(uVar4,"path");
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  uVar10 = (*(code *)0x10002f0f0)(uVar7,"displayNameAtPath:",uVar8);
  uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f0)(uVar9,"setDestination:",uVar10);
  (*(code *)0x10002f0f0)(param_1,"preflightCopyDeviceFiles:statusController:",uVar5,uVar9);
  (*(code *)0x10002f0f0)(uVar9,"setPreflightComplete:",1);
  uVar7 = (*(code *)0x10002f0f0)(uVar4,"path");
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar5,uVar7,uVar9,0);
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)0x10002f0f0)
            (param_1,"performSelectorInBackground:withObject:","copyDeviceFilesThread:",uVar8);
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar10);
  (*(code *)0x10002f0f8)(uVar9);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x28 bytes

ID MTPOutlineController::outlineView_namesOfPromisedFilesDroppedAtDestination_forDraggedItems_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ID IVar6;
  undefined8 in_R9;
  ulong uVar7;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar2 = (*(code *)__got::_objc_retain)(param_5);
  uVar3 = (*(code *)0x10002f0f0)(uVar2,"count");
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar3);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar4 = (*(code *)__got::_objc_retain)(uVar2);
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10,in_R9
                     ,uVar2);
  if (uVar5 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar7 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar4);
        }
        uVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(local_f8._8_8_ + uVar7 * 8),"name");
        uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
        (*(code *)0x10002f0f0)(uVar3,"addObject:",uVar2);
        (*(code *)0x10002f0f8)(uVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      uVar5 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar5 != 0);
  }
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    IVar6 = __stubs::_objc_autoreleaseReturnValue(uVar3);
    return IVar6;
  }
  IVar6 = __stubs::___stack_chk_fail();
  return IVar6;
}



// Function Stack Size: 0x30 bytes

void MTPOutlineController::outlineView_setObjectValue_forTableColumn_byItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  Result RVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar4 = __got::_objc_retain;
  uVar7 = (*(code *)__got::_objc_retain)(param_4);
  uVar8 = (*(code *)puVar4)(param_5);
  uVar9 = (*(code *)puVar4)(param_6);
  uVar10 = (*(code *)0x10002f0f0)(param_5,"identifier");
  (*(code *)0x10002f0f8)(uVar8);
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
  cVar5 = (*(code *)0x10002f0f0)(uVar8,"isNotEqualTo:",&cf_name);
  (*(code *)0x10002f0f8)(uVar8);
  if (cVar5 != '\0') goto LAB_100006038;
  lVar11 = (*(code *)__got::_objc_retain)(uVar7);
  RVar6 = 1;
  if ((lVar11 == 0) || (lVar12 = (*(code *)0x10002f0f0)(lVar11,"length"), lVar12 == 0)) {
LAB_100005f2d:
    uVar8 = LocalizedInformativeTextForResult(RVar6);
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    cVar5 = (*(code *)0x10002f0f0)(uVar9,"isFolder");
    if (cVar5 == '\0') {
      uVar10 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
      uVar13 = (*(code *)0x10002f0f0)
                         (uVar10,"localizedStringForKey:value:table:",&cf_errorRenameFileTitle,
                          &cf___,0);
    }
    else {
      uVar10 = (*(code *)0x10002f0f0)();
      uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
      uVar13 = (*(code *)0x10002f0f0)
                         (uVar10,"localizedStringForKey:value:table:",&cf_errorRenameFolderTitle,
                          &cf___,0);
    }
    uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
    (*(code *)0x10002f0f8)(uVar10);
    (*(code *)0x10002f0f0)
              (param_1,"showModalErrorMessage:statusController:informativeText:",uVar13,0,uVar8);
    (*(code *)0x10002f0f8)(uVar13);
    (*(code *)0x10002f0f8)(uVar8);
  }
  else {
    plVar2 = *(long **)(param_1 + repository_);
    pcVar3 = *(code **)(*plVar2 + 0x50);
    uVar1 = *(undefined4 *)(param_1 + currentStorage_);
    uVar8 = (*(code *)0x10002f0f0)(uVar9,"path");
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar8 = __stubs::_objc_retainAutorelease(uVar8);
    uVar10 = (*(code *)0x10002f0f0)(uVar8,"UTF8String");
    uVar13 = __stubs::_objc_retainAutorelease(lVar11);
    uVar13 = (*(code *)0x10002f0f0)(uVar13,"UTF8String");
    RVar6 = (*pcVar3)(plVar2,uVar1,uVar10,uVar13);
    (*(code *)0x10002f0f8)(uVar8);
    if (RVar6 != 0) goto LAB_100005f2d;
  }
  (*(code *)0x10002f0f0)(0,param_1,"performSelector:withObject:afterDelay:","refreshFromNode:",0);
  (*(code *)0x10002f0f8)(lVar11);
LAB_100006038:
  (*(code *)0x10002f0f8)(uVar9);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar7);
  return;
}



// LocalizedInformativeTextForResult(Repository::Result)

void LocalizedInformativeTextForResult(Result param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  switch(param_1) {
  case 0:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = (*(code *)0x10002f0f0)
                      (uVar1,"localizedStringForKey:value:table:",&cf_errorSuccessDescription,&cf___
                       ,0);
    break;
  case 1:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = (*(code *)0x10002f0f0)
                      (uVar1,"localizedStringForKey:value:table:",&cf_errorGenericDescription,&cf___
                       ,0);
    break;
  case 2:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = (*(code *)0x10002f0f0)
                      (uVar1,"localizedStringForKey:value:table:",&cf_errorPathNotFoundDescription,
                       &cf___,0);
    break;
  case 3:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = (*(code *)0x10002f0f0)
                      (uVar1,"localizedStringForKey:value:table:",
                       &cf_errrorDeviceNotInitializedDescription,&cf___,0);
    break;
  case 4:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = (*(code *)0x10002f0f0)
                      (uVar1,"localizedStringForKey:value:table:",
                       &cf_errorPathAlreadyExistsDescription,&cf___,0);
    break;
  case 5:
  case 6:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = (*(code *)0x10002f0f0)
                      (uVar1,"localizedStringForKey:value:table:",&cf_errorInvalidStorageDescription
                       ,&cf___,0);
    break;
  default:
    goto switchD_1000060dc_caseD_7;
  }
  unaff_RBX = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
switchD_1000060dc_caseD_7:
  __stubs::_objc_autoreleaseReturnValue(unaff_RBX);
  return;
}



// Function Stack Size: 0x20 bytes

ID MTPOutlineController::outlineView_itemForPersistentObject_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"nodeForPath:",param_4);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  IVar2 = __stubs::_objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// Function Stack Size: 0x20 bytes

ID MTPOutlineController::outlineView_persistentObjectForItem_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(param_4,"path");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  IVar2 = __stubs::_objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// Function Stack Size: 0x20 bytes

ID MTPOutlineController::newFilenameForExistingPath_targetDirectory_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  puVar1 = __got::_objc_retain;
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)0x10002f0f0)(param_3,"lastPathComponent");
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"stringByAppendingPathComponent:",uVar2);
  IVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar3);
  return IVar5;
}



// Function Stack Size: 0x28 bytes

void MTPOutlineController::copyLocalFile_toDeviceDirectory_statusController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  int *piVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined local_3c;
  undefined local_38 [8];
  
  puVar5 = __got::_objc_retain;
  uVar8 = (*(code *)__got::_objc_retain)(param_3);
  uVar9 = (*(code *)puVar5)(param_4);
  uVar10 = (*(code *)puVar5)(param_5);
  uVar11 = (*(code *)0x10002f0f0)(param_1,"newFilenameForExistingPath:targetDirectory:",uVar8,uVar9)
  ;
  (*(code *)0x10002f0f8)(uVar9);
  local_60 = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  plVar3 = *(long **)(param_1 + repository_);
  pcVar4 = *(code **)(*plVar3 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + currentStorage_);
  uVar9 = __stubs::_objc_retainAutorelease(uVar11);
  uVar11 = (*(code *)0x10002f0f0)(uVar9,"UTF8String");
  iVar7 = (*pcVar4)(plVar3,uVar2,uVar11,&local_60);
  if (iVar7 == 0) {
    cVar6 = (*(code *)0x10002f0f0)(uVar10,"shouldReplaceFilename:",uVar8);
    if (cVar6 == '\0') goto LAB_100006718;
    plVar3 = *(long **)(param_1 + repository_);
    pcVar4 = *(code **)(*plVar3 + 0x40);
    uVar2 = *(undefined4 *)(param_1 + currentStorage_);
    uVar11 = __stubs::_objc_retainAutorelease(uVar9);
    uVar11 = (*(code *)0x10002f0f0)(uVar11,"UTF8String");
    (*pcVar4)(plVar3,uVar2,uVar11);
  }
  plVar3 = *(long **)(param_1 + repository_);
  pcVar4 = *(code **)(*plVar3 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + currentStorage_);
  uVar11 = __stubs::_objc_retainAutorelease(uVar8);
  uVar12 = (*(code *)0x10002f0f0)(uVar11,"fileSystemRepresentation");
  uVar13 = __stubs::_objc_retainAutorelease(uVar9);
  uVar14 = (*(code *)0x10002f0f0)(uVar13,"UTF8String");
  iVar7 = (*pcVar4)(plVar3,uVar2,uVar12,uVar14,progress,uVar10);
  if (iVar7 == 0) {
    (*(code *)0x10002f0f0)
              (uVar10,"performSelectorOnMainThread:withObject:waitUntilDone:","finishedFile:",uVar11
               ,0);
  }
  else {
    cVar6 = (*(code *)0x10002f0f0)(uVar10,"shouldCancel");
    if (cVar6 == '\0') {
      uVar11 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)0x10002f0f0)
                         (uVar11,"localizedStringForKey:value:table:",
                          &cf_errorCopyingFileDescription,&cf___,0);
      uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
      uVar13 = (*(code *)0x10002f0f0)(uVar13,"lastPathComponent");
      uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
      uVar14 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"stringWithFormat:",uVar12,uVar13);
      uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)0x10002f0f8)(uVar13);
      (*(code *)0x10002f0f8)(uVar12);
      (*(code *)0x10002f0f8)(uVar11);
      uVar11 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)0x10002f0f0)
                         (uVar11,"localizedStringForKey:value:table:",&cf_errorCopyingFileTitle,
                          &cf___,0);
      uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
      (*(code *)0x10002f0f0)
                (param_1,"showModalErrorMessage:statusController:informativeText:",uVar12,uVar10,
                 uVar14);
      (*(code *)0x10002f0f8)(uVar12);
      (*(code *)0x10002f0f8)(uVar11);
      (*(code *)0x10002f0f0)
                (uVar10,"performSelectorOnMainThread:withObject:waitUntilDone:",
                 "cancelButtonPressed:",0,0);
      (*(code *)0x10002f0f8)(uVar14);
    }
  }
LAB_100006718:
  if (local_60 + -0x18 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar1 = (int *)(local_60 + -8);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (iVar7 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(local_60 + -0x18,local_38);
    }
  }
  (*(code *)0x10002f0f8)(uVar9);
  (*(code *)0x10002f0f8)(uVar10);
  (*(code *)0x10002f0f8)(uVar8);
  return;
}



// progress(unsigned long long, unsigned long long, void const*)

int progress(ulonglong param_1,ulonglong param_2,void *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",param_1);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  iVar4 = 0;
  (*(code *)0x10002f0f0)
            (uVar2,"performSelectorOnMainThread:withObject:waitUntilDone:",
             "setFileInProgressBytesCopied:",uVar3,0);
  (*(code *)0x10002f0f8)(uVar3);
  if (0xf00000 < param_2 - param_1) {
    cVar1 = (*(code *)0x10002f0f0)(uVar2,"shouldCancel");
    iVar4 = (int)cVar1;
  }
  (*(code *)0x10002f0f8)(uVar2);
  return iVar4;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

ID MTPOutlineController::contentsOfLocalDirectory_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ID IVar7;
  ulong uVar8;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"contentsOfDirectoryAtPath:error:",uVar2,0);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  uVar3 = (*(code *)0x10002f0f0)(uVar4,"count");
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar3);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar4 = (*(code *)__got::_objc_retain)(uVar4);
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar5 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar8 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar4);
        }
        uVar6 = (*(code *)0x10002f0f0)
                          (uVar2,"stringByAppendingPathComponent:",
                           *(undefined8 *)(local_f8._8_8_ + uVar8 * 8));
        uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)0x10002f0f0)(uVar3,"addObject:",uVar6);
        (*(code *)0x10002f0f8)(uVar6);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      uVar5 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar5 != 0);
  }
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    IVar7 = __stubs::_objc_autoreleaseReturnValue(uVar3);
    return IVar7;
  }
  IVar7 = __stubs::___stack_chk_fail();
  return IVar7;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x28 bytes

void MTPOutlineController::copyLocalFiles_toDeviceDirectory_statusController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  Result RVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined local_114;
  char local_109;
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c0 [8];
  undefined local_b8 [128];
  long local_38;
  
  puVar1 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar13 = (*(code *)__got::_objc_retain)(param_3);
  uVar14 = (*(code *)puVar1)(param_4);
  uVar15 = (*(code *)puVar1)(param_5);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  local_108 = ZEXT816(0);
  uVar13 = (*(code *)puVar1)(uVar13);
  uVar16 = (*(code *)0x10002f0f0)
                     (uVar13,"countByEnumeratingWithState:objects:count:",local_108,local_b8,0x10);
  lVar9 = currentStorage_;
  lVar8 = repository_;
  if (uVar16 != 0) {
    puVar1 = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
    lVar4 = *local_f8._0_8_;
    do {
      uVar21 = 0;
      do {
        if (*local_f8._0_8_ != lVar4) {
          __stubs::_objc_enumerationMutation(uVar13);
        }
        uVar20 = *(undefined8 *)(local_108._8_8_ + uVar21 * 8);
        local_109 = '\0';
        uVar17 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
        uVar17 = __stubs::_objc_retainAutoreleasedReturnValue(uVar17);
        (*(code *)0x10002f0f0)(uVar17,"fileExistsAtPath:isDirectory:",uVar20,&local_109);
        (*(code *)0x10002f0f8)(uVar17);
        if (local_109 == '\0') {
          (*(code *)0x10002f0f0)
                    (param_1,"copyLocalFile:toDeviceDirectory:statusController:",uVar20,uVar14,
                     uVar15);
        }
        else {
          uVar17 = (*(code *)0x10002f0f0)
                             (param_1,"newFilenameForExistingPath:targetDirectory:",uVar20,uVar14);
          local_114 = 0;
          local_118 = 0;
          local_120 = 0;
          local_128 = 0;
          local_130 = 0;
          plVar5 = *(long **)(param_1 + lVar8);
          pcVar6 = *(code **)(*plVar5 + 0x20);
          uVar3 = *(undefined4 *)(param_1 + lVar9);
          local_138 = puVar1;
          uVar17 = __stubs::_objc_retainAutorelease(uVar17);
          uVar18 = (*(code *)0x10002f0f0)(uVar17,"UTF8String");
          iVar11 = (*pcVar6)(plVar5,uVar3,uVar18,&local_138);
          if (iVar11 == 0) {
            cVar10 = (*(code *)0x10002f0f0)(uVar15,"shouldReplaceFilename:",uVar20);
            bVar7 = true;
            if (cVar10 != '\0') {
              plVar5 = *(long **)(param_1 + lVar8);
              pcVar6 = *(code **)(*plVar5 + 0x40);
              uVar3 = *(undefined4 *)(param_1 + lVar9);
              uVar18 = __stubs::_objc_retainAutorelease(uVar17);
              uVar18 = (*(code *)0x10002f0f0)(uVar18,"UTF8String");
              (*pcVar6)(plVar5,uVar3,uVar18);
              goto LAB_100006e56;
            }
          }
          else {
LAB_100006e56:
            plVar5 = *(long **)(param_1 + lVar8);
            pcVar6 = *(code **)(*plVar5 + 0x48);
            uVar3 = *(undefined4 *)(param_1 + lVar9);
            uVar18 = __stubs::_objc_retainAutorelease(uVar17);
            uVar19 = (*(code *)0x10002f0f0)(uVar18,"UTF8String");
            RVar12 = (*pcVar6)(plVar5,uVar3,uVar19);
            if (RVar12 == 0) {
              uVar20 = (*(code *)0x10002f0f0)(param_1,"contentsOfLocalDirectory:",uVar20);
              uVar20 = __stubs::_objc_retainAutoreleasedReturnValue(uVar20);
              (*(code *)0x10002f0f0)
                        (param_1,"copyLocalFiles:toDeviceDirectory:statusController:",uVar20,uVar18,
                         uVar15);
              (*(code *)0x10002f0f8)(uVar20);
            }
            else {
              uVar20 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
              uVar20 = __stubs::_objc_retainAutoreleasedReturnValue(uVar20);
              uVar18 = (*(code *)0x10002f0f0)
                                 (uVar20,"localizedStringForKey:value:table:",
                                  &cf_errorCreateFolderTitle,&cf___,0);
              uVar18 = __stubs::_objc_retainAutoreleasedReturnValue(uVar18);
              uVar19 = LocalizedInformativeTextForResult(RVar12);
              uVar19 = __stubs::_objc_retainAutoreleasedReturnValue(uVar19);
              (*(code *)0x10002f0f0)
                        (param_1,"showModalErrorMessage:statusController:informativeText:",uVar18,
                         uVar15);
              (*(code *)0x10002f0f8)(uVar19);
              (*(code *)0x10002f0f8)(uVar18);
              (*(code *)0x10002f0f8)(uVar20);
            }
            bVar7 = false;
          }
          if (local_138 + -0x18 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
            LOCK();
            piVar2 = (int *)(local_138 + -8);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            if (iVar11 < 1) {
              __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(local_138 + -0x18,local_c0);
            }
          }
          (*(code *)0x10002f0f8)(uVar17);
          if (bVar7) goto LAB_100007057;
        }
        cVar10 = (*(code *)0x10002f0f0)(uVar15,"shouldCancel");
        if (cVar10 != '\0') goto LAB_100007057;
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar16);
      uVar16 = (*(code *)0x10002f0f0)
                         (uVar13,"countByEnumeratingWithState:objects:count:",local_108,local_b8);
    } while (uVar16 != 0);
  }
LAB_100007057:
  (*(code *)0x10002f0f8)(uVar13);
  (*(code *)0x10002f0f8)(uVar15);
  (*(code *)0x10002f0f8)(uVar14);
  (*(code *)0x10002f0f8)(uVar13);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// WARNING: Could not reconcile some variable overlaps

void MTPOutlineController::preflightCopyLocalFiles_statusController_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char local_f9;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  uVar4 = (*(code *)puVar2)(param_4);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar3 = (*(code *)puVar2)(uVar3);
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar5 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar11 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar3);
        }
        uVar7 = *(undefined8 *)(local_f8._8_8_ + uVar11 * 8);
        local_f9 = '\0';
        uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
        uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)0x10002f0f0)(uVar6,"fileExistsAtPath:isDirectory:",uVar7,&local_f9);
        if (local_f9 == '\0') {
          uVar8 = (*(code *)0x10002f0f0)(uVar7,"stringByResolvingSymlinksInPath");
          uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
          uVar9 = (*(code *)0x10002f0f0)(uVar6,"attributesOfItemAtPath:error:",uVar8,0);
          uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
          uVar10 = (*(code *)0x10002f0f0)(uVar9,"fileSize");
          (*(code *)0x10002f0f0)(uVar4,"addFile:size:",uVar7,uVar10);
          (*(code *)0x10002f0f8)(uVar9);
          (*(code *)0x10002f0f8)(uVar8);
        }
        else {
          uVar7 = (*(code *)0x10002f0f0)(param_1,"contentsOfLocalDirectory:",uVar7);
          uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)0x10002f0f0)(param_1,"preflightCopyLocalFiles:statusController:",uVar7,uVar4);
          (*(code *)0x10002f0f8)(uVar7);
        }
        (*(code *)0x10002f0f8)(uVar6);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar5);
      uVar5 = (*(code *)0x10002f0f0)
                        (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar5 != 0);
  }
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::copyLocalFilesThread_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = __stubs::_objc_autoreleasePoolPush();
  uVar3 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",1);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",2);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)(uVar4,"path");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)
            (param_1,"copyLocalFiles:toDeviceDirectory:statusController:",uVar3,uVar6,uVar5);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f0)
            (param_1,"performSelectorOnMainThread:withObject:waitUntilDone:","refreshFromNode:",
             uVar4,0);
  uVar6 = (*(code *)0x10002f0f0)
                    (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)
            (uVar6,"performSelectorOnMainThread:withObject:waitUntilDone:","removeStatus:",uVar5,0);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  __stubs::_objc_autoreleasePoolPop(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::criticalError_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_errorGenericDescription,&cf___,0
                    );
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar3 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",
                     &cf_errorCommunicatingWithDeviceTitle,&cf___,0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSAlert,
                     "alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:"
                     ,uVar3,0,0,0,&cf___,uVar2);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"setAlertStyle:",0);
  (*(code *)0x10002f0f0)(uVar1,"runModal");
  uVar4 = __stubs::_objc_loadWeakRetained(param_1 + delegate_);
  (*(code *)0x10002f0f0)(uVar4,"closeAllWindows");
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f8)(uVar3);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::unlockDeviceError_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_errorUnlockDescription,&cf___,0)
  ;
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar3 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_errorUnlockDeviceTitle,&cf___,0)
  ;
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSAlert,
                     "alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:"
                     ,uVar3,0,0,0,&cf___,uVar2);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"setAlertStyle:",0);
  (*(code *)0x10002f0f0)(uVar1,"runModal");
  uVar4 = __stubs::_objc_loadWeakRetained(param_1 + delegate_);
  (*(code *)0x10002f0f0)(uVar4,"closeAllWindows");
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f8)(uVar3);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x28 bytes

void MTPOutlineController::copyDeviceFile_toLocalDirectory_statusController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  int *piVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  undefined local_4c;
  undefined8 local_48 [2];
  undefined local_38 [8];
  
  puVar5 = __got::_objc_retain;
  uVar8 = (*(code *)__got::_objc_retain)(param_3);
  uVar9 = (*(code *)puVar5)(param_4);
  uVar10 = (*(code *)puVar5)(param_5);
  uVar11 = (*(code *)0x10002f0f0)(param_1,"newFilenameForExistingPath:targetDirectory:",uVar8,uVar9)
  ;
  (*(code *)0x10002f0f8)(uVar9);
  uVar9 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  cVar6 = (*(code *)0x10002f0f0)(uVar9,"fileExistsAtPath:",uVar11);
  if (cVar6 == '\0') {
LAB_100007ac7:
    plVar3 = *(long **)(param_1 + repository_);
    pcVar4 = *(code **)(*plVar3 + 0x30);
    uVar2 = *(undefined4 *)(param_1 + currentStorage_);
    uVar12 = __stubs::_objc_retainAutorelease(uVar8);
    uVar13 = (*(code *)0x10002f0f0)(uVar12,"UTF8String");
    uVar14 = __stubs::_objc_retainAutorelease(uVar11);
    uVar15 = (*(code *)0x10002f0f0)(uVar14,"fileSystemRepresentation");
    iVar7 = (*pcVar4)(plVar3,uVar2,uVar13,uVar15,progress,uVar10);
    if (iVar7 == 0) {
      local_70 = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
      local_4c = 0;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      plVar3 = *(long **)(param_1 + repository_);
      pcVar4 = *(code **)(*plVar3 + 0x20);
      uVar2 = *(undefined4 *)(param_1 + currentStorage_);
      uVar12 = __stubs::_objc_retainAutorelease(uVar12);
      uVar13 = (*(code *)0x10002f0f0)(uVar12,"UTF8String");
      iVar7 = (*pcVar4)(plVar3,uVar2,uVar13,&local_70);
      if (iVar7 == 0) {
        uVar13 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDate,"date");
        uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
        uVar15 = (*(code *)0x10002f0f0)
                           ((double)local_58,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSince1970:")
        ;
        uVar15 = __stubs::_objc_retainAutoreleasedReturnValue(uVar15);
        uVar14 = __stubs::_objc_retainAutorelease(uVar14);
        uVar14 = (*(code *)0x10002f0f0)(uVar14,"fileSystemRepresentation");
        uVar14 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"stringWithUTF8String:",uVar14);
        uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)0x10002f0f0)(&objc::class_t::Utils,"updateModifiedDate:toFile:",uVar15,uVar14);
        (*(code *)0x10002f0f0)(&objc::class_t::Utils,"updateCreatedDate:toFile:",uVar13,uVar14);
        (*(code *)0x10002f0f8)(uVar14);
        (*(code *)0x10002f0f8)(uVar15);
        (*(code *)0x10002f0f8)(uVar13);
      }
      (*(code *)0x10002f0f0)
                (uVar10,"performSelectorOnMainThread:withObject:waitUntilDone:","finishedFile:",
                 uVar12,0);
      if (local_70 + -0x18 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
        LOCK();
        piVar1 = (int *)(local_70 + -8);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar7 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(local_70 + -0x18,local_38);
        }
      }
      goto LAB_100007f41;
    }
    cVar6 = (*(code *)0x10002f0f0)(uVar10,"shouldCancel");
    if (cVar6 != '\0') goto LAB_100007f41;
    uVar12 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
    uVar12 = (*(code *)0x10002f0f0)
                       (uVar13,"localizedStringForKey:value:table:",&cf_errorCopyingFileDescription,
                        &cf___,0);
    uVar15 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
    uVar12 = (*(code *)0x10002f0f0)(uVar14,"lastPathComponent");
    uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
    uVar12 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"stringWithFormat:",uVar15,uVar14);
    uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
    (*(code *)0x10002f0f8)(uVar14);
    (*(code *)0x10002f0f8)(uVar15);
    (*(code *)0x10002f0f8)(uVar13);
    uVar13 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
    uVar14 = (*(code *)0x10002f0f0)
                       (uVar13,"localizedStringForKey:value:table:",&cf_errorReplacingFileTitle,
                        &cf___,0);
    uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar14);
    (*(code *)0x10002f0f0)
              (param_1,"showModalErrorMessage:statusController:informativeText:",uVar14,uVar10,
               uVar12);
    (*(code *)0x10002f0f8)(uVar14);
    (*(code *)0x10002f0f8)(uVar13);
    (*(code *)0x10002f0f0)
              (uVar10,"performSelectorOnMainThread:withObject:waitUntilDone:","cancelButtonPressed:"
               ,0,0);
  }
  else {
    cVar6 = (*(code *)0x10002f0f0)(uVar10,"shouldReplaceFilename:",uVar8);
    if (cVar6 == '\0') goto LAB_100007f41;
    local_48[0] = 0;
    cVar6 = (*(code *)0x10002f0f0)(uVar9,"removeItemAtPath:error:",uVar11,local_48);
    uVar12 = (*(code *)__got::_objc_retain)(local_48[0]);
    if (cVar6 != '\0') {
      (*(code *)0x10002f0f8)(uVar12);
      goto LAB_100007ac7;
    }
    uVar13 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
    uVar14 = (*(code *)0x10002f0f0)
                       (uVar13,"localizedStringForKey:value:table:",&cf_errorCopyingFileTitle,&cf___
                        ,0);
    uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar14);
    uVar15 = (*(code *)0x10002f0f0)(uVar12,"localizedDescription");
    uVar15 = __stubs::_objc_retainAutoreleasedReturnValue(uVar15);
    (*(code *)0x10002f0f0)
              (param_1,"showModalErrorMessage:statusController:informativeText:",uVar14,uVar10,
               uVar15);
    (*(code *)0x10002f0f8)(uVar15);
    (*(code *)0x10002f0f8)(uVar14);
    (*(code *)0x10002f0f8)(uVar13);
    (*(code *)0x10002f0f0)
              (uVar10,"performSelectorOnMainThread:withObject:waitUntilDone:","cancelButtonPressed:"
               ,0,0);
  }
  (*(code *)0x10002f0f8)(uVar12);
LAB_100007f41:
  (*(code *)0x10002f0f8)(uVar9);
  (*(code *)0x10002f0f8)(uVar11);
  (*(code *)0x10002f0f8)(uVar10);
  (*(code *)0x10002f0f8)(uVar8);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x28 bytes

void MTPOutlineController::copyDeviceFiles_toLocalDirectory_statusController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 local_100;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar4 = (*(code *)__got::_objc_retain)(param_3);
  uVar5 = (*(code *)puVar2)(param_4);
  uVar6 = (*(code *)puVar2)(param_5);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar4 = (*(code *)puVar2)(uVar4);
  uVar7 = (*(code *)0x10002f0f0)
                    (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar7 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar14 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar4);
        }
        uVar11 = *(undefined8 *)(local_f8._8_8_ + uVar14 * 8);
        cVar3 = (*(code *)0x10002f0f0)(uVar11,"isFolder");
        if (cVar3 == '\0') {
          uVar11 = (*(code *)0x10002f0f0)(uVar11,"path");
          uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
          (*(code *)0x10002f0f0)
                    (param_1,"copyDeviceFile:toLocalDirectory:statusController:",uVar11,uVar5,uVar6)
          ;
          (*(code *)0x10002f0f8)(uVar11);
        }
        else {
          uVar8 = (*(code *)0x10002f0f0)(uVar11,"path");
          uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
          uVar9 = (*(code *)0x10002f0f0)
                            (param_1,"newFilenameForExistingPath:targetDirectory:",uVar8,uVar5);
          (*(code *)0x10002f0f8)(uVar8);
          uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
          uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
          cVar3 = (*(code *)0x10002f0f0)(uVar8,"fileExistsAtPath:",uVar9);
          if (cVar3 != '\0') {
            uVar10 = (*(code *)0x10002f0f0)(uVar11,"path");
            uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
            cVar3 = (*(code *)0x10002f0f0)(uVar6,"shouldReplaceFilename:",uVar10);
            (*(code *)0x10002f0f8)(uVar10);
            if (cVar3 != '\0') {
              local_100 = 0;
              cVar3 = (*(code *)0x10002f0f0)(uVar8,"removeItemAtPath:error:",uVar9,&local_100);
              uVar10 = (*(code *)__got::_objc_retain)(local_100);
              if (cVar3 != '\0') {
                (*(code *)0x10002f0f8)(uVar10);
                goto LAB_1000082f6;
              }
              uVar11 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
              uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
              uVar12 = (*(code *)0x10002f0f0)
                                 (uVar11,"localizedStringForKey:value:table:",
                                  &cf_errorCopyingFileTitle,&cf___,0);
              uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
              uVar13 = (*(code *)0x10002f0f0)(uVar10,"localizedDescription");
              uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
              (*(code *)0x10002f0f0)
                        (param_1,"showModalErrorMessage:statusController:informativeText:",uVar12,
                         uVar6,uVar13);
              (*(code *)0x10002f0f8)(uVar13);
              (*(code *)0x10002f0f8)(uVar12);
              (*(code *)0x10002f0f8)(uVar11);
              (*(code *)0x10002f0f0)
                        (uVar6,"performSelectorOnMainThread:withObject:waitUntilDone:",
                         "cancelButtonPressed:",0,0);
              (*(code *)0x10002f0f8)(uVar10);
            }
            (*(code *)0x10002f0f8)(uVar8);
            (*(code *)0x10002f0f8)(uVar9);
            goto LAB_100008526;
          }
LAB_1000082f6:
          (*(code *)0x10002f0f0)
                    (uVar8,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                     uVar9,1,0,0);
          uVar11 = (*(code *)0x10002f0f0)(uVar11,"children");
          uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
          (*(code *)0x10002f0f0)
                    (param_1,"copyDeviceFiles:toLocalDirectory:statusController:",uVar11,uVar9);
          (*(code *)0x10002f0f8)(uVar11);
          (*(code *)0x10002f0f8)(uVar8);
          (*(code *)0x10002f0f8)(uVar9);
        }
        cVar3 = (*(code *)0x10002f0f0)(uVar6,"shouldCancel");
        if (cVar3 != '\0') goto LAB_100008526;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar7);
      uVar7 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8);
    } while (uVar7 != 0);
  }
LAB_100008526:
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard != local_38) {
    __stubs::___stack_chk_fail();
    return;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void MTPOutlineController::preflightCopyDeviceFiles_statusController_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar4 = (*(code *)__got::_objc_retain)(param_3);
  uVar5 = (*(code *)puVar2)(param_4);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar4 = (*(code *)puVar2)(uVar4);
  uVar6 = (*(code *)0x10002f0f0)
                    (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar6 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar9 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar4);
        }
        uVar7 = *(undefined8 *)(local_f8._8_8_ + uVar9 * 8);
        cVar3 = (*(code *)0x10002f0f0)(uVar7,"isFolder");
        if (cVar3 == '\0') {
          uVar8 = (*(code *)0x10002f0f0)(uVar7,"path");
          uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
          uVar7 = (*(code *)0x10002f0f0)(uVar7,"nodeSize");
          (*(code *)0x10002f0f0)(uVar5,"addFile:size:",uVar8,uVar7);
          (*(code *)0x10002f0f8)(uVar8);
        }
        else {
          uVar7 = (*(code *)0x10002f0f0)(uVar7,"children");
          uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)0x10002f0f0)(param_1,"preflightCopyDeviceFiles:statusController:",uVar7,uVar5);
          (*(code *)0x10002f0f8)(uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
      uVar6 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar6 != 0);
  }
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::copyDeviceFilesThread_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = __stubs::_objc_autoreleasePoolPush();
  uVar3 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",1);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",2);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f0)
            (param_1,"copyDeviceFiles:toLocalDirectory:statusController:",uVar3,uVar4,uVar5);
  uVar6 = (*(code *)0x10002f0f0)
                    (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)
            (uVar6,"performSelectorOnMainThread:withObject:waitUntilDone:","removeStatus:",uVar5,0);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  __stubs::_objc_autoreleasePoolPop(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

char MTPOutlineController::canGoBack(ID param_1,SEL param_2)

{
  return *(long *)(param_1 + pathStackInsertionPoint_) != 1;
}



// Function Stack Size: 0x10 bytes

char MTPOutlineController::canGoForward(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + pathStackInsertionPoint_);
  lVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + pathStack_),"count");
  return lVar1 != lVar2;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::setCurrentRoot_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)0x10002f0f0)
            (param_1,"setCurrentRoot:storage:",param_3,*(undefined4 *)(param_1 + currentStorage_));
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::setCurrentRootArray_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  lVar2 = (*(code *)0x10002f0f0)(uVar1,"count");
  if (lVar2 == 2) {
    uVar3 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",0);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",1);
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)0x10002f0f0)(uVar4,"unsignedIntValue");
    (*(code *)0x10002f0f0)(param_1,"setCurrentRoot:storage:",uVar3,uVar5);
    (*(code *)0x10002f0f8)(uVar4);
    (*(code *)0x10002f0f8)(uVar3);
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x1c bytes

void MTPOutlineController::setCurrentRoot_storage_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  uVar7 = (*(code *)__got::_objc_retain)(param_3);
  *(unsigned_int *)(param_1 + currentStorage_) = param_4;
  uVar8 = (*(code *)0x10002f0f0)(&objc::class_t::MTPOutlineNode,"alloc");
  uVar9 = (*(code *)0x10002f0f0)
                    (uVar8,"initWithPath:repository:storageId:sortDescriptors:",uVar7,
                     *(undefined8 *)(param_1 + repository_),
                     *(undefined4 *)(param_1 + currentStorage_),
                     *(undefined8 *)(param_1 + sortDescriptors_));
  uVar8 = *(undefined8 *)(param_1 + root_);
  *(undefined8 *)(param_1 + root_) = uVar9;
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"reloadData");
  uVar8 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)0x10002f0f0)(uVar8,"setRepresentedFilename:",&cf_fakefilename);
  (*(code *)0x10002f0f8)(uVar8);
  uVar8 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"name");
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  lVar10 = (*(code *)0x10002f0f0)(uVar8,"length");
  if (lVar10 == 0) {
    uVar9 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                       **(undefined8 **)(param_1 + deviceInfo_));
  }
  else {
    uVar9 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____s,uVar8);
  }
  uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  uVar9 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)0x10002f0f0)(uVar9,"setTitle:",uVar11);
  (*(code *)0x10002f0f8)(uVar9);
  uVar9 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  uVar12 = (*(code *)0x10002f0f0)(uVar9,"standardWindowButton:",4);
  uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"icon");
  uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)0x10002f0f0)(uVar12,"setImage:",uVar13);
  (*(code *)0x10002f0f8)(uVar13);
  (*(code *)0x10002f0f8)(uVar12);
  (*(code *)0x10002f0f8)(uVar9);
  uVar9 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:",
                     *(undefined4 *)(param_1 + currentStorage_));
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  uVar12 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar7,uVar9,0);
  uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)0x10002f0f8)(uVar9);
  lVar10 = pathStackInsertionPoint_;
  uVar9 = 0;
  if (*(long *)(param_1 + pathStackInsertionPoint_) != 0) {
    uVar9 = (*(code *)0x10002f0f0)
                      (*(undefined8 *)(param_1 + pathStack_),"objectAtIndex:",
                       *(long *)(param_1 + pathStackInsertionPoint_) + -1);
    uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
    cVar6 = (*(code *)0x10002f0f0)(uVar9,"isNotEqualTo:",uVar12);
    (*(code *)0x10002f0f8)(uVar9);
    if (cVar6 == '\0') goto LAB_100008f2d;
    uVar9 = *(undefined8 *)(param_1 + pathStackInsertionPoint_);
  }
  lVar5 = pathStack_;
  lVar14 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + pathStack_),"count");
  (*(code *)0x10002f0f0)
            (*(undefined8 *)(param_1 + lVar5),"removeObjectsInRange:",uVar9,
             lVar14 - *(long *)(param_1 + lVar10));
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar5),"addObject:",uVar12);
  plVar1 = (long *)(param_1 + lVar10);
  *plVar1 = *plVar1 + 1;
LAB_100008f2d:
  lVar10 = forwardBackControl_;
  uVar9 = *(undefined8 *)(param_1 + forwardBackControl_);
  cVar6 = (*(code *)0x10002f0f0)(param_1,"canGoBack");
  (*(code *)0x10002f0f0)(uVar9,"setEnabled:forSegment:",(int)cVar6,0);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  cVar6 = (*(code *)0x10002f0f0)(param_1,"canGoForward");
  (*(code *)0x10002f0f0)(uVar9,"setEnabled:forSegment:",(int)cVar6,1);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"deselectAll:",0);
  puVar3 = *(undefined8 **)(param_1 + deviceInfo_);
  uVar9 = *puVar3;
  uVar13 = puVar3[1];
  uVar4 = puVar3[3];
  uVar2 = *(undefined4 *)(param_1 + currentStorage_);
  uVar15 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"path");
  uVar15 = __stubs::_objc_retainAutoreleasedReturnValue(uVar15);
  uVar9 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__s__s__u___,uVar13,uVar9,
                     uVar4,uVar2,uVar15);
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)0x10002f0f8)(uVar15);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"setAutosaveName:",uVar9);
  (*(code *)0x10002f0f0)(param_1,"updateBottomStatus");
  (*(code *)0x10002f0f0)
            (*(undefined8 *)(param_1 + storageMatrix_),"selectButtonWithIdentifier:",param_4);
  (*(code *)0x10002f0f8)(uVar9);
  (*(code *)0x10002f0f8)(uVar12);
  (*(code *)0x10002f0f8)(uVar11);
  (*(code *)0x10002f0f8)(uVar8);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar7);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::deletePaths_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)
                    (uVar2,"localizedStringForKey:value:table:",&cf_deleteWarningTitle,&cf___,0);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar4 = (*(code *)0x10002f0f0)
                    (uVar2,"localizedStringForKey:value:table:",&cf_noUndoWarningInformative,&cf___,
                     0);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar5 = (*(code *)0x10002f0f0)(uVar2,"localizedStringForKey:value:table:",&cf_menuDelete,&cf___,0)
  ;
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar6 = (*(code *)0x10002f0f0)
                    (uVar2,"localizedStringForKey:value:table:",&cf_cancelButton,&cf___,0);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSAlert,
                     "alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:"
                     ,uVar3,uVar5,uVar6,0,&cf___,uVar4);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar7 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  uVar1 = (*(code *)__got::_objc_retain)(uVar1);
  (*(code *)0x10002f0f0)
            (uVar2,"beginSheetModalForWindow:modalDelegate:didEndSelector:contextInfo:",uVar7,
             param_1,"deleteAlertDidEnd:returnCode:contextInfo:",uVar1);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x28 bytes

void MTPOutlineController::deleteAlertDidEnd_returnCode_contextInfo_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,void *param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [128];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  if (param_4 != 0) {
    uVar11 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableSet,"set");
    uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
    local_148 = ZEXT816(0);
    local_158 = ZEXT816(0);
    local_168 = ZEXT816(0);
    local_178 = ZEXT816(0);
    uVar12 = (*(code *)__got::_objc_retain)(param_5);
    uVar13 = (*(code *)0x10002f0f0)
                       (uVar12,"countByEnumeratingWithState:objects:count:",local_178,local_b8,0x10)
    ;
    lVar8 = currentStorage_;
    lVar7 = repository_;
    if (uVar13 != 0) {
      lVar2 = *local_168._0_8_;
      do {
        uVar21 = 0;
        do {
          if (*local_168._0_8_ != lVar2) {
            __stubs::_objc_enumerationMutation(uVar12);
          }
          uVar17 = *(undefined8 *)(local_178._8_8_ + uVar21 * 8);
          local_188 = ZEXT816(0);
          local_198 = ZEXT816(0);
          local_1a8 = ZEXT816(0);
          local_1b8 = ZEXT816(0);
          uVar14 = (*(code *)__got::_objc_retain)(uVar11);
          uVar15 = (*(code *)0x10002f0f0)
                             (uVar14,"countByEnumeratingWithState:objects:count:",local_1b8,
                              local_138,0x10);
          if (uVar15 != 0) {
            lVar3 = *local_1a8._0_8_;
            do {
              uVar20 = 0;
              do {
                if (*local_1a8._0_8_ != lVar3) {
                  __stubs::_objc_enumerationMutation(uVar14);
                }
                uVar16 = (*(code *)0x10002f0f0)
                                   (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____,
                                    *(undefined8 *)(local_1b8._8_8_ + uVar20 * 8));
                uVar16 = __stubs::_objc_retainAutoreleasedReturnValue(uVar16);
                cVar9 = (*(code *)0x10002f0f0)(uVar17,"hasPrefix:",uVar16);
                (*(code *)0x10002f0f8)(uVar16);
                if (cVar9 != '\0') {
                  (*(code *)0x10002f0f8)(uVar14);
                  goto LAB_1000097e6;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar15);
              uVar15 = (*(code *)0x10002f0f0)
                                 (uVar14,"countByEnumeratingWithState:objects:count:",local_1b8,
                                  local_138,0x10);
            } while (uVar15 != 0);
          }
          (*(code *)0x10002f0f8)(uVar14);
          uVar16 = (*(code *)0x10002f0f0)
                             (&objc::class_t::MTPOutlineNode,
                              "nodeWithPath:repository:storageId:sortDescriptors:",uVar17,
                              *(undefined8 *)(param_1 + lVar7),*(undefined4 *)(param_1 + lVar8),0);
          uVar16 = __stubs::_objc_retainAutoreleasedReturnValue(uVar16);
          cVar9 = (*(code *)0x10002f0f0)(uVar16,"isFolder");
          if (cVar9 != '\0') {
            (*(code *)0x10002f0f0)(uVar14,"addObject:",uVar17);
          }
          plVar4 = *(long **)(param_1 + lVar7);
          pcVar5 = *(code **)(*plVar4 + 0x40);
          uVar1 = *(undefined4 *)(param_1 + lVar8);
          uVar17 = __stubs::_objc_retainAutorelease(uVar17);
          uVar17 = (*(code *)0x10002f0f0)(uVar17,"UTF8String");
          iVar10 = (*pcVar5)(plVar4,uVar1,uVar17);
          if (iVar10 != 0) {
            uVar17 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
            uVar17 = __stubs::_objc_retainAutoreleasedReturnValue(uVar17);
            uVar14 = (*(code *)0x10002f0f0)
                               (uVar17,"localizedStringForKey:value:table:",
                                &cf_errorDeletingDescription,&cf___,0);
            uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar14);
            uVar18 = (*(code *)0x10002f0f0)(uVar16,"name");
            uVar18 = __stubs::_objc_retainAutoreleasedReturnValue(uVar18);
            uVar19 = (*(code *)0x10002f0f0)
                               (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar14,uVar18);
            uVar19 = __stubs::_objc_retainAutoreleasedReturnValue(uVar19);
            (*(code *)0x10002f0f8)(uVar18);
            (*(code *)0x10002f0f8)(uVar14);
            (*(code *)0x10002f0f8)(uVar17);
            uVar17 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
            uVar17 = __stubs::_objc_retainAutoreleasedReturnValue(uVar17);
            uVar14 = (*(code *)0x10002f0f0)
                               (uVar17,"localizedStringForKey:value:table:",&cf_errorDeletingTitle,
                                &cf___,0);
            uVar14 = __stubs::_objc_retainAutoreleasedReturnValue(uVar14);
            (*(code *)0x10002f0f0)
                      (param_1,"showModalErrorMessage:statusController:informativeText:",uVar14,0,
                       uVar19);
            (*(code *)0x10002f0f8)(uVar14);
            (*(code *)0x10002f0f8)(uVar17);
            (*(code *)0x10002f0f8)(uVar19);
            (*(code *)0x10002f0f8)(uVar16);
            goto LAB_100009962;
          }
          (*(code *)0x10002f0f8)(uVar16);
LAB_1000097e6:
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar13);
        uVar13 = (*(code *)0x10002f0f0)
                           (uVar12,"countByEnumeratingWithState:objects:count:",local_178,local_b8,
                            0x10);
      } while (uVar13 != 0);
    }
LAB_100009962:
    (*(code *)0x10002f0f8)(uVar12);
    (*(code *)0x10002f0f0)(param_1,"refreshFromNode:",*(undefined8 *)(param_1 + root_));
    (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"deselectAll:",0);
    (*(code *)0x10002f0f8)(uVar11);
  }
  puVar6 = __got::___stack_chk_guard;
  (*(code *)0x10002f0f8)(param_5);
  if (*(long *)puVar6 != local_38) {
    __stubs::___stack_chk_fail();
    return;
  }
  return;
}



// Function Stack Size: 0x30 bytes

void MTPOutlineController::outlineView_willDisplayCell_forTableColumn_item_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_4);
  uVar4 = (*(code *)puVar1)(param_5);
  uVar5 = (*(code *)puVar1)(param_6);
  uVar6 = (*(code *)0x10002f0f0)(uVar4,"identifier");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  cVar2 = (*(code *)0x10002f0f0)(uVar6,"isEqual:",&cf_name);
  (*(code *)0x10002f0f8)(uVar6);
  if (cVar2 != '\0') {
    uVar6 = (*(code *)0x10002f0f0)(uVar5,"icon");
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)0x10002f0f0)(uVar3,"setImage:",uVar6);
    (*(code *)0x10002f0f8)(uVar6);
  }
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x28 bytes

char MTPOutlineController::outlineView_shouldEditTableColumn_item_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_4);
  uVar3 = (*(code *)0x10002f0f0)(param_4,"identifier");
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = (*(code *)0x10002f0f0)(uVar2,"isEqualToString:",&cf_name);
  (*(code *)0x10002f0f8)(uVar2);
  return cVar1 != '\0';
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::outlineViewItemDidCollapse_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)0x10002f0f0)(param_1,"updateBottomStatus");
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::outlineViewItemDidExpand_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)0x10002f0f0)(param_1,"updateBottomStatus");
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::outlineViewSelectionDidChange_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)0x10002f0f0)(param_1,"updateBottomStatus");
  return;
}



// Function Stack Size: 0x20 bytes

void MTPOutlineController::outlineView_mouseDownInHeaderOfTableColumn_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + watermarkView_),"setHidden:",1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::outlineViewColumnDidResize_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + watermarkView_),"setHidden:",0);
  return;
}



// Function Stack Size: 0x20 bytes

void MTPOutlineController::outlineView_didDragTableColumn_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + watermarkView_),"setHidden:",0);
  return;
}



// Function Stack Size: 0x20 bytes

void MTPOutlineController::outlineView_didClickTableColumn_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + watermarkView_),"setHidden:",0);
  return;
}



// Function Stack Size: 0x20 bytes

void MTPOutlineController::outlineView_itemsWereDraggedToTrash_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)
                    (param_4,"propertyListForType:",&cf_com_google_android_mtpviewer_allpaths);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(param_1,"deletePaths:",uVar1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x20 bytes

char MTPOutlineController::window_shouldPopUpDocumentPathMenu_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar4 = (*(code *)__got::_objc_retain)(param_4);
  (*(code *)0x10002f0f0)(uVar4,"removeAllItems");
  uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = __stubs::_NSFileTypeForHFSTypeCode(0x666c6472);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)0x10002f0f0)(uVar5,"iconForFileType:",uVar6);
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f0)(0,0,uVar7,"setSize:");
  uVar6 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"path");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar8 = (*(code *)0x10002f0f0)(uVar6,"pathComponents");
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)0x10002f0f8)(uVar6);
  puVar2 = __got::_objc_retain;
  (*(code *)__got::_objc_retain)(&cf__);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar6 = (*(code *)puVar2)(uVar8);
  uVar9 = (*(code *)0x10002f0f0)
                    (uVar6,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar9 == 0) {
    pcVar12 = &cf__;
  }
  else {
    pcVar12 = &cf__;
    lVar1 = *local_e8._0_8_;
    do {
      uVar14 = 0;
      pcVar13 = pcVar12;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar6);
        }
        uVar8 = *(undefined8 *)(local_f8._8_8_ + uVar14 * 8);
        uVar10 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMenuItem,"alloc");
        uVar10 = (*(code *)0x10002f0f0)(uVar10,"init");
        (*(code *)0x10002f0f0)(uVar10,"setTitle:",uVar8);
        uVar11 = (*(code *)0x10002f0f0)(pcVar13,"stringByAppendingPathComponent:",uVar8);
        pcVar12 = (cfstringStruct *)__stubs::_objc_retainAutoreleasedReturnValue(uVar11);
        (*(code *)0x10002f0f8)(pcVar13);
        (*(code *)0x10002f0f0)(uVar10,"setRepresentedObject:",pcVar12);
        (*(code *)0x10002f0f0)(uVar10,"setTarget:",param_1);
        (*(code *)0x10002f0f0)(uVar10,"setAction:","changePathMenuItem:");
        (*(code *)0x10002f0f0)(uVar4,"setShowsStateColumn:",0);
        cVar3 = (*(code *)0x10002f0f0)(uVar8,"isEqualToString:",&cf__);
        if (cVar3 == '\0') {
          (*(code *)0x10002f0f0)(uVar10,"setImage:",uVar7);
        }
        else {
          uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSImage,"imageNamed:",&cf_usbfistman);
          uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
          (*(code *)0x10002f0f0)(0,0,uVar8,"setSize:");
          (*(code *)0x10002f0f0)(uVar10,"setImage:",uVar8);
          (*(code *)0x10002f0f8)(uVar8);
        }
        (*(code *)0x10002f0f0)(uVar4,"insertItem:atIndex:",uVar10,0);
        (*(code *)0x10002f0f8)(uVar10);
        uVar14 = uVar14 + 1;
        pcVar13 = pcVar12;
      } while (uVar14 < uVar9);
      uVar9 = (*(code *)0x10002f0f0)
                        (uVar6,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar9 != 0);
  }
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(pcVar12);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard != local_38) {
    cVar3 = __stubs::___stack_chk_fail();
    return cVar3;
  }
  return '\x01';
}



// Function Stack Size: 0x38 bytes

char MTPOutlineController::window_shouldDragDocumentWithEvent_from_withPasteboard_
               (ID param_1,SEL param_2,ID param_3,ID param_4,CGPoint param_5,ID param_6)

{
  return '\0';
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::windowWillClose_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = __stubs::_objc_loadWeakRetained(delegate_ + param_1);
  (*(code *)0x10002f0f0)(uVar1,"outlineWillClose:",param_1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void MTPOutlineController::refreshFromNode_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  lVar3 = (*(code *)__got::_objc_retain)(param_3);
  if (lVar3 == 0) {
    lVar3 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + root_));
    (*(code *)0x10002f0f8)(0);
  }
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"array");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"numberOfRows");
  lVar1 = outlineView_;
  if (0 < lVar5) {
    lVar9 = 0;
    do {
      uVar6 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"itemAtRow:",lVar9);
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"isItemExpanded:",uVar6);
      if (cVar2 != '\0') {
        uVar7 = (*(code *)0x10002f0f0)
                          (param_1,"outlineView:persistentObjectForItem:",
                           *(undefined8 *)(param_1 + lVar1),uVar6);
        uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)0x10002f0f0)(uVar4,"addObject:",uVar7);
        (*(code *)0x10002f0f8)(uVar7);
      }
      (*(code *)0x10002f0f8)(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar5);
  }
  (*(code *)0x10002f0f0)(lVar3,"reloadFromDevice");
  if (lVar3 == *(long *)(param_1 + root_)) {
    (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"reloadData");
  }
  else {
    (*(code *)0x10002f0f0)
              (*(undefined8 *)(param_1 + outlineView_),"reloadItem:reloadChildren:",lVar3,1);
  }
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar4 = (*(code *)__got::_objc_retain)(uVar4);
  uVar8 = (*(code *)0x10002f0f0)
                    (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar8 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar10 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar4);
        }
        uVar6 = (*(code *)0x10002f0f0)
                          (param_1,"outlineView:itemForPersistentObject:",
                           *(undefined8 *)(param_1 + outlineView_),
                           *(undefined8 *)(local_f8._8_8_ + uVar10 * 8));
        uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"expandItem:",uVar6);
        (*(code *)0x10002f0f8)(uVar6);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
      uVar8 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar8 != 0);
  }
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f0)(param_1,"updateBottomStatus");
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(lVar3);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x18 bytes

ID MTPOutlineController::getUniqueDeviceFilename_(ID param_1,SEL param_2,ID param_3)

{
  int *piVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID IVar13;
  int local_64;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined local_3c;
  undefined local_38 [8];
  
  uVar6 = (*(code *)__got::_objc_retain)(param_3);
  local_60 = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  plVar3 = *(long **)(param_1 + repository_);
  pcVar4 = *(code **)(*plVar3 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + currentStorage_);
  uVar6 = __stubs::_objc_retainAutorelease(uVar6);
  uVar7 = (*(code *)0x10002f0f0)(uVar6,"UTF8String");
  iVar5 = (*pcVar4)(plVar3,uVar2,uVar7,&local_60);
  if (iVar5 == 0) {
    uVar7 = (*(code *)0x10002f0f0)(uVar6,"stringByDeletingPathExtension");
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
    uVar9 = (*(code *)0x10002f0f0)(uVar6,"pathExtension");
    uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
    local_64 = 2;
    do {
      lVar10 = (*(code *)0x10002f0f0)(uVar9,"length");
      if (lVar10 == 0) {
        uVar8 = (*(code *)0x10002f0f0)
                          (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____i_,uVar7,local_64);
      }
      else {
        uVar8 = (*(code *)0x10002f0f0)
                          (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____i____,uVar7,local_64,
                           uVar9);
      }
      uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
      plVar3 = *(long **)(param_1 + repository_);
      pcVar4 = *(code **)(*plVar3 + 0x20);
      uVar2 = *(undefined4 *)(param_1 + currentStorage_);
      uVar11 = __stubs::_objc_retainAutorelease(uVar8);
      uVar12 = (*(code *)0x10002f0f0)(uVar11,"UTF8String");
      iVar5 = (*pcVar4)(plVar3,uVar2,uVar12,&local_60);
      if (iVar5 != 0) break;
      (*(code *)0x10002f0f8)(uVar11);
      local_64 = local_64 + 1;
      uVar8 = 0;
    } while (local_64 != 0x7fffffff);
    (*(code *)0x10002f0f8)(uVar9);
    (*(code *)0x10002f0f8)(uVar7);
  }
  else {
    uVar8 = (*(code *)__got::_objc_retain)(uVar6);
  }
  if (local_60 + -0x18 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar1 = (int *)(local_60 + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (iVar5 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(local_60 + -0x18,local_38);
    }
  }
  (*(code *)0x10002f0f8)(uVar6);
  IVar13 = __stubs::_objc_autoreleaseReturnValue(uVar8);
  return IVar13;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

ID MTPOutlineController::nodeForPath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ID IVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar4 = (*(code *)__got::_objc_retain)(param_3);
  lVar1 = root_;
  uVar5 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"path");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  auVar13 = (*(code *)0x10002f0f0)(uVar4,"rangeOfString:",uVar6);
  uVar5 = 0;
  if (SUB168(auVar13,0) == 0) {
    uVar5 = (*(code *)0x10002f0f0)
                      (uVar4,"stringByReplacingCharactersInRange:withString:",0,
                       SUB168(auVar13 >> 0x40,0),&cf___);
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + lVar1));
    uVar8 = (*(code *)0x10002f0f0)(uVar7,"pathComponents");
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    local_c8 = ZEXT816(0);
    local_d8 = ZEXT816(0);
    local_e8 = ZEXT816(0);
    local_f8 = ZEXT816(0);
    uVar8 = (*(code *)__got::_objc_retain)(uVar8);
    uVar9 = (*(code *)0x10002f0f0)
                      (uVar8,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    if (uVar9 != 0) {
      lVar1 = *local_e8._0_8_;
      do {
        uVar12 = 0;
        uVar11 = uVar5;
        do {
          if (*local_e8._0_8_ != lVar1) {
            __stubs::_objc_enumerationMutation(uVar8);
          }
          uVar2 = *(undefined8 *)(local_f8._8_8_ + uVar12 * 8);
          cVar3 = (*(code *)0x10002f0f0)(uVar2,"isEqualToString:",&cf__);
          uVar5 = uVar11;
          if (cVar3 == '\0') {
            uVar5 = (*(code *)0x10002f0f0)(uVar11,"childWithName:",uVar2);
            uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
            (*(code *)0x10002f0f8)(uVar11);
          }
          uVar12 = uVar12 + 1;
          uVar11 = uVar5;
        } while (uVar12 < uVar9);
        uVar9 = (*(code *)0x10002f0f0)
                          (uVar8,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10
                          );
      } while (uVar9 != 0);
    }
    (*(code *)0x10002f0f8)(uVar8);
    (*(code *)0x10002f0f8)(uVar8);
    (*(code *)0x10002f0f8)(uVar7);
  }
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    IVar10 = __stubs::_objc_autoreleaseReturnValue(uVar5);
    return IVar10;
  }
  IVar10 = __stubs::___stack_chk_fail();
  return IVar10;
}



void MTPOutlineController::showModalErrorMessage_statusController_informativeText_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = __got::_objc_retain;
  local_40 = (*(code *)__got::_objc_retain)(param_3);
  local_48 = (*(code *)puVar1)(param_4);
  local_38 = (*(code *)puVar1)(param_5);
  local_68 = __got::__NSConcreteStackBlock;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = 
  ___79__MTPOutlineController_showModalErrorMessage_statusController_informativeText___block_invoke;
  local_50 = &___block_descriptor_tmp;
  uVar2 = (*(code *)puVar1)(local_48);
  uVar3 = (*(code *)puVar1)(local_40);
  uVar4 = (*(code *)puVar1)(local_38);
  _ExecuteSyncOnMainThread(&local_68);
  (*(code *)0x10002f0f8)(local_38);
  (*(code *)0x10002f0f8)(local_40);
  (*(code *)0x10002f0f8)(local_48);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



void ___79__MTPOutlineController_showModalErrorMessage_statusController_informativeText___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = (*(code *)0x10002f0f0)
                      (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    (*(code *)0x10002f0f0)(uVar1,"removeStatus:",*(undefined8 *)(param_1 + 0x20));
    (*(code *)0x10002f0f8)(uVar1);
  }
  uVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSAlert,
                     "alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:"
                     ,*(undefined8 *)(param_1 + 0x28),0,0,0,&cf___,*(undefined8 *)(param_1 + 0x30));
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"setAlertStyle:",0);
  (*(code *)0x10002f0f0)(uVar1,"runModal");
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



void ___copy_helper_block_(undefined8 param_1,long param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __got::_objc_retain;
  (*(code *)__got::_objc_retain)(*(undefined8 *)(param_2 + 0x20));
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x28));
                    // WARNING: Could not recover jumptable at 0x00010000adfa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x30));
  return;
}



void ___destroy_helper_block_(long param_1)

{
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x28));
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x30));
  return;
}



// Function Stack Size: 0x10 bytes

void MTPOutlineController::updateBottomStatus(ID param_1,SEL param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 local_38;
  
  lVar5 = deviceInfo_;
  iVar2 = (**(code **)(**(long **)(param_1 + repository_) + 8))();
  if (iVar2 != 0) {
    if (iVar2 == 5) {
      pcVar8 = "unlockDeviceError:";
    }
    else {
      pcVar8 = "criticalError:";
    }
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f0)
              (param_1,"performSelectorOnMainThread:withObject:waitUntilDone:",pcVar8,0,0);
    return;
  }
  piVar3 = *(int **)(*(long *)(param_1 + lVar5) + 0x20);
  piVar1 = *(int **)(*(long *)(param_1 + lVar5) + 0x28);
  local_38 = 0;
  if (piVar3 != piVar1) {
    local_38 = 0;
    do {
      if (*piVar3 == *(int *)(param_1 + currentStorage_)) {
        uVar6 = *(undefined8 *)(param_1 + humanSizeTransformer_);
        uVar7 = (*(code *)0x10002f0f0)
                          (&_OBJC_CLASS___NSNumber,"numberWithLongLong:",*(undefined8 *)(piVar3 + 4)
                          );
        uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
        uVar6 = (*(code *)0x10002f0f0)(uVar6,"transformedValue:",uVar7);
        local_38 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)0x10002f0f8)(uVar7);
        break;
      }
      piVar3 = piVar3 + 8;
    } while (piVar1 != piVar3);
  }
  lVar5 = outlineView_;
  lVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"numberOfRows");
  lVar5 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar5),"numberOfSelectedRows");
  if (lVar5 == 0) {
    if (lVar4 == 1) {
      uVar6 = (*(code *)0x10002f0f0)();
      uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)0x10002f0f0)
                        (uVar7,"localizedStringForKey:value:table:",
                         &cf_bottomStatusNoSelectionSingleItem,&cf___,0);
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)0x10002f0f8)(uVar7);
      uVar7 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"stringWithFormat:",uVar6,local_38);
    }
    else {
      uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)0x10002f0f0)
                        (uVar7,"localizedStringForKey:value:table:",
                         &cf_bottomStatusNoSelectionMultipleItems,&cf___,0);
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)0x10002f0f8)(uVar7);
      uVar7 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar6,lVar4,local_38);
    }
  }
  else {
    uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar7,"localizedStringForKey:value:table:",&cf_bottomStatusFilesSelected,
                       &cf___,0);
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)0x10002f0f8)(uVar7);
    uVar7 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar6,lVar5,lVar4,local_38);
  }
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + bottomStatusLabel_),"setStringValue:",uVar7);
  (*(code *)0x10002f0f8)(uVar7);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(local_38);
  return;
}



// Function Stack Size: 0x18 bytes

ID MTPOutlineController::friendlyNameOfNode_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar1 = (*(code *)0x10002f0f0)(param_3,"name");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  lVar2 = (*(code *)0x10002f0f0)(uVar1,"length");
  if (lVar2 == 0) {
    uVar3 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                       **(undefined8 **)(param_1 + deviceInfo_));
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  }
  else {
    uVar3 = (*(code *)__got::_objc_retain)(uVar1);
  }
  (*(code *)0x10002f0f8)(uVar1);
  IVar4 = __stubs::_objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::deleteSelected_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  uVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"selectedRowIndexes");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  lVar2 = (*(code *)0x10002f0f0)(uVar1,"count");
  local_38 = uVar1;
  if ((lVar2 == 0) &&
     (lVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"clickedRow"),
     lVar2 != -1)) {
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSIndexSet,"indexSetWithIndex:",lVar2);
    local_38 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)0x10002f0f8)(uVar1);
  }
  lVar2 = (*(code *)0x10002f0f0)(local_38,"firstIndex");
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"array");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  while (lVar2 != 0x7fffffffffffffff) {
    uVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"itemAtRow:",lVar2);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)0x10002f0f0)(uVar3,"path");
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)0x10002f0f0)(uVar1,"addObject:",uVar4);
    lVar2 = (*(code *)0x10002f0f0)(local_38,"indexGreaterThanIndex:",lVar2);
    (*(code *)0x10002f0f8)(uVar4);
    (*(code *)0x10002f0f8)(uVar3);
  }
  (*(code *)0x10002f0f0)(param_1,"deletePaths:",uVar1);
  (*(code *)0x10002f0f8)(uVar1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(local_38);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::changePathMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(param_3,"representedObject");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(param_1,"setCurrentRoot:",uVar1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::doubleAction_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  lVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"clickedRow");
  if (lVar2 != -1) {
    (*(code *)0x10002f0f0)(param_1,"openNode:",uVar1);
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::openNode_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = outlineView_;
  uVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"selectedRowIndexes");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  lVar2 = (*(code *)0x10002f0f0)(uVar1,"count");
  if (lVar2 == 1) {
    uVar10 = *(undefined8 *)(param_1 + lVar6);
    uVar8 = (*(code *)0x10002f0f0)(uVar1,"firstIndex");
    uVar10 = (*(code *)0x10002f0f0)(uVar10,"itemAtRow:",uVar8);
    uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
    cVar7 = (*(code *)0x10002f0f0)(uVar10,"isFolder");
    if (cVar7 == '\0') {
      uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
      uVar3 = (*(code *)0x10002f0f0)
                        (uVar8,"localizedStringForKey:value:table:",&cf_errorCannotOpenFileTitle,
                         &cf___,0);
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = (*(code *)0x10002f0f0)
                        (uVar9,"localizedStringForKey:value:table:",
                         &cf_errorCannotOpenFileDescription,&cf___,0);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f0)
                (param_1,"showModalErrorMessage:statusController:informativeText:",uVar3,0,uVar4);
      (*(code *)0x10002f0f8)(uVar4);
      (*(code *)0x10002f0f8)(uVar9);
      (*(code *)0x10002f0f8)(uVar3);
      (*(code *)0x10002f0f8)(uVar8);
    }
    else {
      uVar8 = (*(code *)0x10002f0f0)(uVar10,"path");
      uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)0x10002f0f0)(param_1,"setCurrentRoot:",uVar8);
      (*(code *)0x10002f0f8)(uVar8);
    }
    (*(code *)0x10002f0f8)(uVar10);
  }
  else {
    uVar5 = (*(code *)0x10002f0f0)(uVar1,"count");
    if (uVar5 < 2) {
      uVar10 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
      uVar8 = (*(code *)0x10002f0f0)
                        (uVar10,"localizedStringForKey:value:table:",&cf_errorCannotOpenNoneTitle,
                         &cf___,0);
    }
    else {
      uVar10 = (*(code *)0x10002f0f0)();
      uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
      uVar8 = (*(code *)0x10002f0f0)
                        (uVar10,"localizedStringForKey:value:table:",
                         &cf_errorCannotOpenMultipleTitle,&cf___,0);
    }
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)0x10002f0f8)(uVar10);
    uVar10 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
    uVar3 = (*(code *)0x10002f0f0)
                      (uVar10,"localizedStringForKey:value:table:",
                       &cf_errorCannotOpenBadSelectionDescription,&cf___,0);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)0x10002f0f0)
              (param_1,"showModalErrorMessage:statusController:informativeText:",uVar8,0,uVar3);
    (*(code *)0x10002f0f8)(uVar3);
    (*(code *)0x10002f0f8)(uVar10);
    (*(code *)0x10002f0f8)(uVar8);
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::goUp_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"path");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"stringByDeletingLastPathComponent");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f0)(param_1,"setCurrentRoot:",uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::goBack_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (*(code *)0x10002f0f0)(param_1,"canGoBack");
  if (cVar2 != '\0') {
    lVar1 = *(long *)(param_1 + pathStackInsertionPoint_);
    *(long *)(param_1 + pathStackInsertionPoint_) = lVar1 + -1;
    uVar3 = (*(code *)0x10002f0f0)
                      (*(undefined8 *)(param_1 + pathStack_),"objectAtIndex:",lVar1 + -2);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)0x10002f0f0)(param_1,"setCurrentRootArray:",uVar3);
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f8)(uVar3);
    return;
  }
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::goForward_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (*(code *)0x10002f0f0)(param_1,"canGoForward");
  if (cVar1 != '\0') {
    *(long *)(param_1 + pathStackInsertionPoint_) =
         *(long *)(param_1 + pathStackInsertionPoint_) + 1;
    uVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + pathStack_),"objectAtIndex:");
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)0x10002f0f0)(param_1,"setCurrentRootArray:",uVar2);
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f8)(uVar2);
    return;
  }
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::forwardBackControlClicked_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  lVar2 = (*(code *)0x10002f0f0)(uVar1,"selectedSegment");
  if (lVar2 == 0) {
    (*(code *)0x10002f0f0)(param_1,"goBack:",uVar1);
  }
  else {
    lVar2 = (*(code *)0x10002f0f0)(uVar1,"selectedSegment");
    if (lVar2 == 1) {
      (*(code *)0x10002f0f0)(param_1,"goForward:",uVar1);
    }
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::createNewFolder_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  Result RVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)0x10002f0f0)
                    (uVar6,"localizedStringForKey:value:table:",&cf_folderDefaultName,&cf___,0);
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)0x10002f0f8)(uVar6);
  uVar6 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"path");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar8 = (*(code *)0x10002f0f0)(uVar6,"stringByAppendingPathComponent:",uVar7);
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)0x10002f0f8)(uVar6);
  uVar6 = (*(code *)0x10002f0f0)(param_1,"getUniqueDeviceFilename:",uVar8);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  plVar2 = *(long **)(param_1 + repository_);
  pcVar3 = *(code **)(*plVar2 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + currentStorage_);
  uVar6 = __stubs::_objc_retainAutorelease(uVar6);
  uVar9 = (*(code *)0x10002f0f0)(uVar6,"UTF8String");
  RVar5 = (*pcVar3)(plVar2,uVar1,uVar9);
  if (RVar5 != 0) {
    uVar9 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)0x10002f0f0)
                       (uVar9,"localizedStringForKey:value:table:",&cf_errorCreateFolderTitle,&cf___
                        ,0);
    uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = LocalizedInformativeTextForResult(RVar5);
    uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)0x10002f0f0)
              (param_1,"showModalErrorMessage:statusController:informativeText:",uVar10,0,uVar11);
    (*(code *)0x10002f0f8)(uVar11);
    (*(code *)0x10002f0f8)(uVar10);
    (*(code *)0x10002f0f8)(uVar9);
  }
  (*(code *)0x10002f0f0)(param_1,"refreshFromNode:",*(undefined8 *)(param_1 + root_));
  uVar9 = (*(code *)0x10002f0f0)(param_1,"nodeForPath:",uVar6);
  uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  lVar4 = outlineView_;
  uVar9 = *(undefined8 *)(param_1 + outlineView_);
  uVar11 = (*(code *)0x10002f0f0)(uVar9,"columnWithIdentifier:",&cf_name);
  uVar12 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar4),"rowForItem:",uVar10);
  (*(code *)0x10002f0f0)(uVar9,"editColumn:row:withEvent:select:",uVar11,uVar12,0,1);
  (*(code *)0x10002f0f8)(uVar10);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar8);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar7);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void MTPOutlineController::setSortDescriptors_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar3 = (*(code *)puVar2)(uVar3);
  uVar4 = (*(code *)0x10002f0f0)
                    (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar4 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar7 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar3);
        }
        uVar6 = *(undefined8 *)(local_f8._8_8_ + uVar7 * 8);
        uVar5 = (*(code *)0x10002f0f0)(uVar6,"key");
        uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
        uVar5 = __stubs::_objc_retainAutorelease(uVar5);
        (*(code *)0x10002f0f0)(uVar5,"UTF8String");
        uVar6 = (*(code *)0x10002f0f0)(uVar6,"selector");
        uVar6 = __stubs::_NSStringFromSelector(uVar6);
        uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        uVar6 = __stubs::_objc_retainAutorelease(uVar6);
        (*(code *)0x10002f0f0)(uVar6,"UTF8String");
        _trace(0);
        (*(code *)0x10002f0f8)(uVar6);
        (*(code *)0x10002f0f8)(uVar5);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
      uVar4 = (*(code *)0x10002f0f0)
                        (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar4 != 0);
  }
  (*(code *)0x10002f0f8)(uVar3);
  lVar1 = sortDescriptors_;
  uVar6 = (*(code *)__got::_objc_retain)(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = uVar6;
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + root_),"setSortDescriptors:",uVar6);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + outlineView_),"reloadData");
  (*(code *)0x10002f0f8)(uVar6);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x14 bytes

void MTPOutlineController::matrixButtonPressed_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"setCurrentRoot:storage:",&cf__,param_3);
  return;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineController::deleteMenuItem(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",&cf_menuDelete,&cf___,0)
  ;
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineController::newFolderMenuItem(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_menuNewFolder,&cf___,0);
  IVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineController::delegate(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = __stubs::_objc_loadWeakRetained(param_1 + delegate_);
  IVar2 = __stubs::_objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// Function Stack Size: 0x18 bytes

void MTPOutlineController::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_storeWeak(param_1 + delegate_,param_3);
  return;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineController::sortDescriptors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + sortDescriptors_);
}



// Function Stack Size: 0x10 bytes

void MTPOutlineController::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_storeStrong(humanSizeTransformer_ + param_1,0);
  __stubs::_objc_storeStrong(sortDescriptors_ + param_1,0);
  __stubs::_objc_destroyWeak(delegate_ + param_1);
  __stubs::_objc_storeStrong(root_ + param_1,0);
  std::auto_ptr<DeviceInfo>::_auto_ptr((auto_ptr_DeviceInfo_ *)(deviceInfo_ + param_1));
  if (*(long **)(param_1 + repository_) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + repository_) + 0x68))();
  }
  __stubs::_objc_storeStrong(pathStack_ + param_1,0);
  __stubs::_objc_storeStrong(storageMatrix_ + param_1,0);
  __stubs::_objc_storeStrong(watermarkView_ + param_1,0);
  __stubs::_objc_storeStrong(bottomStatusLabel_ + param_1,0);
  __stubs::_objc_storeStrong(forwardBackControl_ + param_1,0);
  __stubs::_objc_storeStrong(param_1 + outlineView_,0);
  return;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineController::_cxx_construct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + repository_) = 0;
  *(undefined8 *)(param_1 + deviceInfo_) = 0;
  return param_1;
}



// std::auto_ptr<Repository>::reset(Repository*)

void __thiscall std::auto_ptr<Repository>::reset(auto_ptr_Repository_ *this,Repository *param_1)

{
  Repository *pRVar1;
  
  pRVar1 = *(Repository **)this;
  if (pRVar1 != param_1) {
    if (pRVar1 != (Repository *)0x0) {
      (*(code *)pRVar1->field0_0x0[0xd])();
    }
    *(Repository **)this = param_1;
  }
  return;
}



// std::auto_ptr<DeviceInfo>::reset(DeviceInfo*)

void __thiscall std::auto_ptr<DeviceInfo>::reset(auto_ptr_DeviceInfo_ *this,DeviceInfo *param_1)

{
  DeviceInfo *this_00;
  
  this_00 = *(DeviceInfo **)this;
  if (this_00 != param_1) {
    if (this_00 != (DeviceInfo *)0x0) {
      DeviceInfo::_DeviceInfo(this_00);
      __stubs::__ZdlPv(this_00);
    }
    *(DeviceInfo **)this = param_1;
  }
  return;
}



// std::auto_ptr<DeviceInfo>::~auto_ptr()

void __thiscall std::auto_ptr<DeviceInfo>::_auto_ptr(auto_ptr_DeviceInfo_ *this)

{
  DeviceInfo *this_00;
  
  this_00 = *(DeviceInfo **)this;
  if (this_00 != (DeviceInfo *)0x0) {
    DeviceInfo::_DeviceInfo(this_00);
    __stubs::__ZdlPv(this_00);
    return;
  }
  return;
}



// DeviceInfo::~DeviceInfo()

void __thiscall DeviceInfo::_DeviceInfo(DeviceInfo *this)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined local_58 [8];
  undefined local_50 [8];
  undefined local_48 [8];
  undefined local_40 [40];
  
  std::vector<Storage,std::allocator<Storage>>::_vector
            ((vector_Storage_std__allocator_Storage__ *)(this + 0x20));
  puVar1 = (undefined *)(*(long *)(this + 0x18) + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)(this + 0x18) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_58);
    }
  }
  puVar1 = (undefined *)(*(long *)(this + 0x10) + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)(this + 0x10) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_50);
    }
  }
  puVar1 = (undefined *)(*(long *)(this + 8) + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)(this + 8) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_48);
    }
  }
  puVar1 = (undefined *)(*(long *)this + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)this + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_40);
    }
  }
  return;
}



// std::vector<Storage, std::allocator<Storage> >::~vector()

void __thiscall
std::vector<Storage,std::allocator<Storage>>::_vector(vector_Storage_std__allocator_Storage__ *this)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined local_38 [8];
  
  puVar5 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  lVar6 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  if (lVar6 != lVar4) {
    do {
      puVar2 = (undefined *)(*(long *)(lVar6 + 0x18) + -0x18);
      if (puVar2 != puVar5) {
        LOCK();
        piVar1 = (int *)(*(long *)(lVar6 + 0x18) + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar3 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
        }
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar4 != lVar6);
    lVar6 = *(long *)this;
  }
  if (lVar6 != 0) {
    __stubs::__ZdlPv(lVar6);
  }
  return;
}



// Function Stack Size: 0x10 bytes

ID ImageAndTextCell::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  class_t *local_20;
  
  local_20 = &objc::class_t::ImageAndTextCell;
  local_28 = param_1;
  IVar1 = __stubs::_objc_msgSendSuper2(&local_28,"init");
  if (IVar1 != 0) {
    (*(code *)0x10002f0f0)(IVar1,"setLineBreakMode:",4);
    (*(code *)0x10002f0f0)(IVar1,"setSelectable:",1);
  }
  return IVar1;
}



// Function Stack Size: 0x30 bytes

CGRect * ImageAndTextCell::imageRectForBounds_
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double in_XMM1_Qa;
  double dVar4;
  double dVar5;
  
  if (*(long *)(param_1 + _image) == 0) {
    dVar4 = *(double *)__got::_NSZeroRect;
    dVar5 = *(double *)(__got::_NSZeroRect + 8);
    uVar1 = *(undefined8 *)(__got::_NSZeroRect + 0x10);
    uVar2 = *(undefined4 *)(__got::_NSZeroRect + 0x18);
    uVar3 = *(undefined4 *)(__got::_NSZeroRect + 0x1c);
  }
  else {
    uVar1 = (*(code *)0x10002f0f0)(*(long *)(param_1 + _image),"size");
    dVar5 = (double)__stubs::_ceil(SUB84((param_3.field1_0x10.field1_0x8 - in_XMM1_Qa) * 0.5,0));
    dVar4 = SUB328((undefined  [32])param_3,0) + 3.0;
    dVar5 = dVar5 + SUB328((undefined  [32])param_3,8);
    uVar2 = SUB84(in_XMM1_Qa,0);
    uVar3 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  }
  __return_storage_ptr__->field0_0x0 = (CGPoint)CONCAT88(dVar5,dVar4);
  __return_storage_ptr__->field1_0x10 = (CGSize)CONCAT412(uVar3,CONCAT48(uVar2,uVar1));
  return __return_storage_ptr__;
}



// Function Stack Size: 0x30 bytes

CGRect * ImageAndTextCell::titleRectForBounds_
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2,CGRect param_3)

{
  double dVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ID local_28;
  class_t *local_20;
  
  if (*(long *)(param_1 + _image) == 0) {
    local_20 = &objc::class_t::ImageAndTextCell;
    local_28 = param_1;
    __stubs::_objc_msgSendSuper2_stret(&local_48,&local_28,"titleRectForBounds:");
    param_3.field0_0x0.field1_0x8 = dStack_40;
    param_3.field1_0x10.field1_0x8 = dStack_30;
  }
  else {
    dVar1 = (double)(*(code *)0x10002f0f0)(*(long *)(param_1 + _image),"size");
    local_48 = dVar1 + 3.0 + 2.0;
    local_38 = param_3.field1_0x10.field0_0x0 - local_48;
    local_48 = local_48 + param_3.field0_0x0.field0_0x0;
  }
  __return_storage_ptr__->field0_0x0 = (CGPoint)CONCAT88(param_3.field0_0x0.field1_0x8,local_48);
  __return_storage_ptr__->field1_0x10 = (CGSize)CONCAT88(param_3.field1_0x10.field1_0x8,local_38);
  return __return_storage_ptr__;
}



// Function Stack Size: 0x50 bytes

void ImageAndTextCell::editWithFrame_inView_editor_delegate_event_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  ID local_80;
  class_t *local_78;
  undefined local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_4);
  uVar4 = (*(code *)puVar2)(param_5);
  uVar5 = (*(code *)puVar2)(param_6);
  uVar1 = *(undefined8 *)(param_1 + _image);
  uVar6 = (*(code *)puVar2)(param_7);
  dVar7 = (double)(*(code *)0x10002f0f0)(uVar1,"size");
  __stubs::_NSDivideRect(dVar7 + 5.0,local_70,&local_50,0);
  local_78 = &objc::class_t::ImageAndTextCell;
  local_80 = param_1;
  __stubs::_objc_msgSendSuper2
            (&local_80,"editWithFrame:inView:editor:delegate:event:",uVar3,uVar4,uVar5,uVar6,
             local_50,local_48,local_40,local_38);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x58 bytes

void ImageAndTextCell::selectWithFrame_inView_editor_delegate_start_length_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5,ID param_6,
               long_long param_7,long_long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  ID local_80;
  class_t *local_78;
  undefined local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_4);
  uVar4 = (*(code *)puVar2)(param_5);
  uVar1 = *(undefined8 *)(param_1 + _image);
  uVar5 = (*(code *)puVar2)(param_6);
  dVar6 = (double)(*(code *)0x10002f0f0)(uVar1,"size");
  __stubs::_NSDivideRect(dVar6 + 5.0,local_70,&local_50,0);
  local_78 = &objc::class_t::ImageAndTextCell;
  local_80 = param_1;
  __stubs::_objc_msgSendSuper2
            (&local_80,"selectWithFrame:inView:editor:delegate:start:length:",uVar3,uVar4,uVar5,
             param_7,local_50,local_48,local_40,local_38,param_8);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x38 bytes

void ImageAndTextCell::drawWithFrame_inView_(ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_R9;
  undefined8 in_XMM1_Qa;
  ID local_60;
  class_t *local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  
  uVar3 = (*(code *)__got::_objc_retain)(param_4);
  lVar1 = _image;
  if (*(long *)(param_1 + _image) != 0) {
    local_40 = (double)(*(code *)0x10002f0f0)(*(long *)(param_1 + _image),"size");
    __stubs::_NSDivideRect(local_40 + 5.0,&local_50,&param_3,0);
    cVar2 = (*(code *)0x10002f0f0)(param_1,"drawsBackground");
    if (cVar2 != '\0') {
      uVar4 = (*(code *)0x10002f0f0)(param_1,"backgroundColor");
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f0)(uVar4,"set");
      (*(code *)0x10002f0f8)(uVar4);
      __stubs::_NSRectFill();
    }
    local_50 = local_50 + 3.0;
    (*(code *)0x10002f0f0)
              (0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1),
               "drawInRect:fromRect:operation:fraction:respectFlipped:hints:",2,1,0,in_R9,local_50,
               local_48,local_40,in_XMM1_Qa,*(undefined8 *)__got::_NSZeroRect,
               *(undefined8 *)(__got::_NSZeroRect + 8),*(undefined8 *)(__got::_NSZeroRect + 0x10),
               *(undefined8 *)(__got::_NSZeroRect + 0x18));
  }
  local_58 = &objc::class_t::ImageAndTextCell;
  local_60 = param_1;
  __stubs::_objc_msgSendSuper2(&local_60,"drawWithFrame:inView:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x10 bytes

CGSize ImageAndTextCell::cellSize(ID param_1,SEL param_2)

{
  undefined8 extraout_RDX;
  CGSize CVar1;
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::ImageAndTextCell;
  local_20 = param_1;
  __stubs::_objc_msgSendSuper2(&local_20,"cellSize");
  CVar1 = (CGSize)CONCAT88(extraout_RDX,_image);
  if (*(long *)(param_1 + _image) != 0) {
    CVar1 = (CGSize)(*(code *)0x10002f0f0)(*(long *)(param_1 + _image),"size");
  }
  return CVar1;
}



// Function Stack Size: 0x40 bytes

unsigned_long_long
ImageAndTextCell::hitTestForEvent_inRect_ofView_
          (ID param_1,SEL param_2,ID param_3,CGRect param_4,ID param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  unsigned_long_long uVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  ID local_60;
  class_t *local_58;
  double local_50 [2];
  double local_40;
  
  puVar1 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  uVar4 = (*(code *)puVar1)(param_5);
  (*(code *)0x10002f0f0)(uVar3,"locationInWindow");
  uVar6 = (*(code *)0x10002f0f0)(uVar4,"convertPoint:fromView:",0);
  if (*(long *)(param_1 + _image) != 0) {
    local_40 = (double)(*(code *)0x10002f0f0)(*(long *)(param_1 + _image),"size");
    __stubs::_NSDivideRect(local_40 + 5.0,local_50,&param_4,0);
    local_50[0] = local_50[0] + 3.0;
    cVar2 = (*(code *)0x10002f0f0)(uVar4,"isFlipped");
    cVar2 = __stubs::_NSMouseInRect(uVar6,in_XMM1_Qa,(int)cVar2);
    uVar5 = 1;
    if (cVar2 != '\0') goto LAB_10000ce8e;
  }
  local_58 = &objc::class_t::ImageAndTextCell;
  local_60 = param_1;
  uVar5 = __stubs::_objc_msgSendSuper2
                    (&local_60,"hitTestForEvent:inRect:ofView:",uVar3,uVar4,in_R8,in_R9,
                     param_4.field0_0x0.field0_0x0,param_4.field0_0x0.field1_0x8,
                     param_4.field1_0x10.field0_0x0,param_4.field1_0x10.field1_0x8);
LAB_10000ce8e:
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  return uVar5;
}



// Function Stack Size: 0x18 bytes

ID ImageAndTextCell::setUpFieldEditorAttributes_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ImageAndTextCell;
  local_30 = param_1;
  uVar1 = __stubs::_objc_msgSendSuper2(&local_30,"setUpFieldEditorAttributes:");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSColor,"whiteColor");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar1,"setBackgroundColor:",uVar2);
  (*(code *)0x10002f0f8)(uVar2);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID ImageAndTextCell::image(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = __stubs::_objc_getProperty(param_1,param_2,_image,1);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void ImageAndTextCell::setImage_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_setProperty(param_1,param_2,_image,param_3,1,0);
  return;
}



// Function Stack Size: 0x10 bytes

void ImageAndTextCell::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_storeStrong(param_1 + _image,0);
  return;
}



// Function Stack Size: 0x2c bytes

ID MTPOutlineNode::initWithPath_repository_storageId_sortDescriptors_
             (ID param_1,SEL param_2,ID param_3,Repository *param_4,unsigned_int param_5,ID param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  ID local_40;
  class_t *local_38;
  
  puVar2 = __got::_objc_retain;
  uVar4 = (*(code *)__got::_objc_retain)(param_3);
  uVar5 = (*(code *)puVar2)(param_6);
  local_38 = &objc::class_t::MTPOutlineNode;
  local_40 = param_1;
  IVar6 = __stubs::_objc_msgSendSuper2(&local_40,"init");
  if (IVar6 != 0) {
    *(Repository **)(IVar6 + repository_) = param_4;
    uVar7 = (*(code *)0x10002f0f0)(uVar4,"copy");
    uVar1 = *(undefined8 *)(IVar6 + path_);
    *(undefined8 *)(IVar6 + path_) = uVar7;
    (*(code *)0x10002f0f8)(uVar1);
    lVar3 = sortDescriptors_;
    uVar7 = (*(code *)__got::_objc_retain)(uVar5);
    uVar1 = *(undefined8 *)(IVar6 + lVar3);
    *(undefined8 *)(IVar6 + lVar3) = uVar7;
    (*(code *)0x10002f0f8)(uVar1);
    *(unsigned_int *)(IVar6 + storageId_) = param_5;
  }
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  return IVar6;
}



// Function Stack Size: 0x2c bytes

ID MTPOutlineNode::nodeWithPath_repository_storageId_sortDescriptors_
             (ID param_1,SEL param_2,ID param_3,Repository *param_4,unsigned_int param_5,ID param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  puVar1 = __got::_objc_retain;
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)puVar1)(param_6);
  uVar4 = (*(code *)0x10002f0f0)(&objc::class_t::MTPOutlineNode,"alloc");
  uVar4 = (*(code *)0x10002f0f0)
                    (uVar4,"initWithPath:repository:storageId:sortDescriptors:",uVar2,param_4,
                     param_5,uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  IVar5 = __stubs::_objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x10 bytes

void MTPOutlineNode::loadChildrenFromDevice(ID param_1,SEL param_2)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_48 = ZEXT816(0);
  local_38 = 0;
  plVar2 = *(long **)(param_1 + repository_);
  pcVar3 = *(code **)(*plVar2 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + storageId_);
  uVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + path_),"UTF8String");
  (*pcVar3)(plVar2,uVar1,uVar4,local_48);
  uVar4 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",
                     ((long)local_48._8_8_ - (long)local_48._0_8_ >> 3) * -0x3333333333333333);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = *(undefined8 *)(param_1 + children_);
  *(undefined8 *)(param_1 + children_) = uVar5;
  (*(code *)0x10002f0f8)(uVar4);
  uVar4 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithCapacity:",
                     ((long)local_48._8_8_ - (long)local_48._0_8_ >> 3) * -0x3333333333333333);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = *(undefined8 *)(param_1 + childrenDict_);
  *(undefined8 *)(param_1 + childrenDict_) = uVar5;
  (*(code *)0x10002f0f8)(uVar4);
  if (local_48._0_8_ != local_48._8_8_) {
    do {
      uVar4 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithUTF8String:",*local_48._0_8_);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      uVar5 = (*(code *)0x10002f0f0)
                        (*(undefined8 *)(param_1 + path_),"stringByAppendingPathComponent:",uVar4);
      uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = (*(code *)0x10002f0f0)
                        (&objc::class_t::MTPOutlineNode,
                         "nodeWithPath:repository:storageId:sortDescriptors:",uVar5,
                         *(undefined8 *)(param_1 + repository_),
                         *(undefined4 *)(param_1 + storageId_),
                         *(undefined8 *)(param_1 + sortDescriptors_));
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + children_),"addObject:",uVar6);
      (*(code *)0x10002f0f0)
                (*(undefined8 *)(param_1 + childrenDict_),"setValue:forKey:",uVar6,uVar4);
      (*(code *)0x10002f0f8)(uVar6);
      (*(code *)0x10002f0f8)(uVar5);
      (*(code *)0x10002f0f8)(uVar4);
      local_48._0_8_ = local_48._0_8_ + 5;
    } while (local_48._0_8_ != local_48._8_8_);
  }
  (*(code *)0x10002f0f0)
            (*(undefined8 *)(param_1 + children_),"sortUsingDescriptors:",
             *(undefined8 *)(param_1 + sortDescriptors_));
  std::vector<Resource,std::allocator<Resource>>::_vector
            ((vector_Resource_std__allocator_Resource__ *)local_48);
  return;
}



// Function Stack Size: 0x10 bytes

void MTPOutlineNode::loadFromDevice(ID param_1,SEL param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar8 = *(undefined8 *)(param_1 + icon_);
  *(undefined8 *)(param_1 + icon_) = 0;
  (*(code *)0x10002f0f8)(uVar8);
  plVar3 = *(long **)(param_1 + repository_);
  pcVar4 = *(code **)(*plVar3 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + storageId_);
  uVar8 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + path_),"UTF8String");
  lVar6 = resource_;
  (*pcVar4)(plVar3,uVar1,uVar8,param_1 + resource_);
  lVar12 = icon_;
  lVar5 = path_;
  iVar2 = *(int *)(lVar6 + 0x20 + param_1);
  if (iVar2 == 1) {
    cVar7 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + path_),"isEqualToString:",&cf__);
    if (cVar7 != '\0') {
      uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSImage,"imageNamed:",&cf_usbfistman);
      uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
      lVar12 = icon_;
      uVar8 = *(undefined8 *)(param_1 + icon_);
      *(undefined8 *)(param_1 + icon_) = uVar9;
      (*(code *)0x10002f0f8)(uVar8);
      goto LAB_10000d581;
    }
    uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
    uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar8 = __stubs::_NSFileTypeForHFSTypeCode(0x666c6472);
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar10 = (*(code *)0x10002f0f0)(uVar9,"iconForFileType:",uVar8);
    lVar12 = icon_;
  }
  else {
    if (iVar2 != 0) goto LAB_10000d581;
    uVar8 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
    uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar8 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar5),"pathExtension");
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar10 = (*(code *)0x10002f0f0)(uVar9,"iconForFileType:",uVar8);
  }
  uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = uVar11;
  (*(code *)0x10002f0f8)(uVar10);
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f8)(uVar9);
LAB_10000d581:
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(0x4030000000000000,0,*(undefined8 *)(param_1 + lVar12),"setSize:");
  return;
}



// Function Stack Size: 0x10 bytes

void MTPOutlineNode::reloadFromDevice(ID param_1,SEL param_2)

{
  (*(code *)0x10002f0f0)(param_1,"loadFromDevice");
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"loadChildrenFromDevice");
  return;
}



// Function Stack Size: 0x10 bytes

void MTPOutlineNode::ensureLoaded(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = loaded_;
  if (*(char *)(param_1 + loaded_) == '\0') {
    (*(code *)0x10002f0f0)(param_1,"loadFromDevice");
    *(undefined *)(param_1 + lVar1) = 1;
  }
  return;
}



// Function Stack Size: 0x10 bytes

void MTPOutlineNode::ensureChildrenLoaded(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = childrenLoaded_;
  if (*(char *)(param_1 + childrenLoaded_) == '\0') {
    (*(code *)0x10002f0f0)(param_1,"loadChildrenFromDevice");
    *(undefined *)(param_1 + lVar1) = 1;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void MTPOutlineNode::setSortDescriptors_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  puVar2 = __got::_objc_retain;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  lVar1 = sortDescriptors_;
  uVar4 = (*(code *)puVar2)(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = uVar4;
  (*(code *)0x10002f0f8)(uVar3);
  lVar1 = children_;
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + children_),"sortUsingDescriptors:",uVar4);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar3 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + lVar1));
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar5 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar6 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar3);
        }
        (*(code *)0x10002f0f0)
                  (*(undefined8 *)(local_f8._8_8_ + uVar6 * 8),"setSortDescriptors:",uVar4);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      uVar5 = (*(code *)0x10002f0f0)
                        (uVar3,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar5 != 0);
  }
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x10 bytes

unsigned_long_long MTPOutlineNode::childCount(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
  (*(code *)0x10002f0f0)(param_1,"ensureChildrenLoaded");
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + children_),"count");
  return uVar1;
}



// Function Stack Size: 0x18 bytes

ID MTPOutlineNode::childAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
  (*(code *)0x10002f0f0)(param_1,"ensureChildrenLoaded");
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + children_),"objectAtIndex:",param_3);
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::children(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
  (*(code *)0x10002f0f0)(param_1,"ensureChildrenLoaded");
  IVar1 = __stubs::_objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + children_));
  return IVar1;
}



// Function Stack Size: 0x18 bytes

ID MTPOutlineNode::childWithName_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
  (*(code *)0x10002f0f0)(param_1,"ensureChildrenLoaded");
  uVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + childrenDict_),"valueForKey:",uVar1);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::path(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = __stubs::_objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + path_));
  return IVar1;
}



// Function Stack Size: 0x10 bytes

char MTPOutlineNode::isFolder(ID param_1,SEL param_2)

{
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
  return *(int *)(resource_ + 0x20 + param_1) == 1;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::icon(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
  IVar1 = __stubs::_objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + icon_));
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::name(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                     *(undefined8 *)(param_1 + resource_));
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::lastModified(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)0x10002f0f0)(param_1,"ensureLoaded");
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    ((double)*(long *)(resource_ + 0x18 + param_1),&_OBJC_CLASS___NSDate,
                     "dateWithTimeIntervalSince1970:");
  return IVar1;
}



// Function Stack Size: 0x10 bytes

long_long MTPOutlineNode::nodeSize(ID param_1,SEL param_2)

{
  char cVar1;
  long_long lVar2;
  
  cVar1 = (*(code *)0x10002f0f0)(param_1,"isFolder");
  lVar2 = 0xffffffffffffffff;
  if (cVar1 == '\0') {
    lVar2 = *(long_long *)(resource_ + 0x10 + param_1);
  }
  return lVar2;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::nodeSizeNumber(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"nodeSize");
                    // WARNING: Treating indirect jump as call
  IVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",uVar1);
  return IVar2;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = *(undefined8 *)(param_1 + path_);
  uVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + children_),"count");
                    // WARNING: Treating indirect jump as call
  IVar3 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Path_____luchildren,uVar1,uVar2
                     ,0x10002f0f0);
  return IVar3;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x10 bytes

void MTPOutlineNode::deepDump(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar2 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + children_));
  uVar3 = (*(code *)0x10002f0f0)
                    (uVar2,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar3 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar4 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar2);
        }
        (*(code *)0x10002f0f0)(*(undefined8 *)(local_f8._8_8_ + uVar4 * 8),"deepDump");
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      uVar3 = (*(code *)0x10002f0f0)
                        (uVar2,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar3 != 0);
  }
  (*(code *)0x10002f0f8)(uVar2);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::sortDescriptors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + sortDescriptors_);
}



// Function Stack Size: 0x10 bytes

void MTPOutlineNode::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined local_18 [8];
  
  puVar1 = (undefined *)(*(long *)(param_1 + resource_) + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)(param_1 + resource_) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_18);
    }
  }
  __stubs::_objc_storeStrong(icon_ + param_1,0);
  __stubs::_objc_storeStrong(sortDescriptors_ + param_1,0);
  __stubs::_objc_storeStrong(childrenDict_ + param_1,0);
  __stubs::_objc_storeStrong(children_ + param_1,0);
  __stubs::_objc_storeStrong(param_1 + path_,0);
  return;
}



// Function Stack Size: 0x10 bytes

ID MTPOutlineNode::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = resource_;
  *(undefined **)(param_1 + resource_) = __got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18;
  *(undefined *)(param_1 + 0x24 + lVar1) = 0;
  *(undefined4 *)(param_1 + 0x20 + lVar1) = 0;
  *(undefined8 *)(param_1 + 0x18 + lVar1) = 0;
  *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
  *(undefined8 *)(param_1 + 8 + lVar1) = 0;
  return param_1;
}



// std::vector<Resource, std::allocator<Resource> >::~vector()

void __thiscall
std::vector<Resource,std::allocator<Resource>>::_vector
          (vector_Resource_std__allocator_Resource__ *this)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  undefined local_38 [8];
  
  puVar5 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  plVar6 = *(long **)this;
  plVar4 = *(long **)(this + 8);
  if (plVar6 != plVar4) {
    do {
      puVar2 = (undefined *)(*plVar6 + -0x18);
      if (puVar2 != puVar5) {
        LOCK();
        piVar1 = (int *)(*plVar6 + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar3 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
        }
      }
      plVar6 = plVar6 + 5;
    } while (plVar4 != plVar6);
    plVar6 = *(long **)this;
  }
  if (plVar6 != (long *)0x0) {
    __stubs::__ZdlPv(plVar6);
  }
  return;
}



// Function Stack Size: 0x10 bytes

void FileSizeHumanTransformer::load(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(&objc::class_t::FileSizeHumanTransformer,"alloc");
  uVar1 = (*(code *)0x10002f0f0)(uVar1,"init");
  (*(code *)0x10002f0f0)
            (&_OBJC_CLASS___NSValueTransformer,"setValueTransformer:forName:",uVar1,
             &cf_FileSizeHumanTransformer);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

CLASS FileSizeHumanTransformer::transformedValueClass(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
                    // WARNING: Treating indirect jump as call
  CVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"class");
  return CVar1;
}



// Function Stack Size: 0x18 bytes

ID FileSizeHumanTransformer::transformedValue_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  char cVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  double local_38;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"class");
  cVar4 = (*(code *)0x10002f0f0)(uVar1,"isKindOfClass:",uVar6);
  uVar6 = 0;
  if (cVar4 != '\0') {
    local_38 = (double)(*(code *)0x10002f0f0)(uVar1,"doubleValue");
    if (0.0 <= local_38) {
      if (1024.0 <= local_38) {
        local_38 = local_38 * 0.0009765625;
        if (1024.0 <= local_38) {
          local_38 = local_38 * 0.0009765625;
          if (1024.0 <= local_38) {
            local_38 = local_38 * 0.0009765625;
            if (1024.0 <= local_38) {
              local_38 = local_38 * 0.0009765625;
              if (1024.0 <= local_38) {
                local_38 = local_38 * 0.0009765625;
                uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
                uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
                pcVar5 = &cf_fileSizePb;
              }
              else {
                uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
                uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
                pcVar5 = &cf_fileSizeTb;
              }
            }
            else {
              uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
              uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
              pcVar5 = &cf_fileSizeGb;
            }
          }
          else {
            uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
            uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
            pcVar5 = &cf_fileSizeMb;
          }
        }
        else {
          uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
          uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
          pcVar5 = &cf_fileSizeKb;
        }
      }
      else {
        uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
        uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        pcVar5 = &cf_fileSizeByte;
      }
      uVar2 = (*(code *)0x10002f0f0)(uVar6,"localizedStringForKey:value:table:",pcVar5,&cf___,0);
      uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
      (*(code *)0x10002f0f8)(uVar6);
      uVar6 = (*(code *)0x10002f0f0)(local_38,&_OBJC_CLASS___NSString,"stringWithFormat:",uVar2);
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)0x10002f0f8)(uVar2);
    }
    else {
      uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)0x10002f0f0)
                        (uVar2,"localizedStringForKey:value:table:",&cf_fileSizeFolder,&cf___,0);
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)0x10002f0f8)(uVar2);
    }
  }
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar6);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::CopyStatusViewController;
  local_30 = param_1;
  IVar1 = __stubs::_objc_msgSendSuper2(&local_30,"initWithNibName:bundle:",&cf_CopyStatusView,0);
  if (IVar1 != 0) {
    uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableDictionary,"alloc");
    uVar3 = (*(code *)0x10002f0f0)(uVar2,"init");
    uVar2 = *(undefined8 *)(IVar1 + files_);
    *(undefined8 *)(IVar1 + files_) = uVar3;
    (*(code *)0x10002f0f8)(uVar2);
    uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",0);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = *(undefined8 *)(IVar1 + bytesToCopy_);
    *(undefined8 *)(IVar1 + bytesToCopy_) = uVar3;
    (*(code *)0x10002f0f8)(uVar2);
    *(undefined8 *)(IVar1 + filesCompletedBytesCopied_) = 0;
    uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",0);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = *(undefined8 *)(IVar1 + fileInProgressBytesCopied_);
    *(undefined8 *)(IVar1 + fileInProgressBytesCopied_) = uVar3;
    (*(code *)0x10002f0f8)(uVar2);
    uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"alloc");
    uVar3 = (*(code *)0x10002f0f0)(uVar2,"init");
    uVar2 = *(undefined8 *)(IVar1 + destination_);
    *(undefined8 *)(IVar1 + destination_) = uVar3;
    (*(code *)0x10002f0f8)(uVar2);
    *(undefined *)(IVar1 + shouldCancel_) = 0;
    *(undefined *)(IVar1 + preflightComplete_) = 0;
    *(undefined *)(IVar1 + replaceAll_) = 0;
    uVar2 = (*(code *)0x10002f0f0)
                      (&_OBJC_CLASS___NSValueTransformer,"valueTransformerForName:",
                       &cf_FileSizeHumanTransformer);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = *(undefined8 *)(IVar1 + humanSizeTransformer_);
    *(undefined8 *)(IVar1 + humanSizeTransformer_) = uVar3;
    (*(code *)0x10002f0f8)(uVar2);
    uVar2 = *(undefined8 *)(IVar1 + startTime_);
    *(undefined8 *)(IVar1 + startTime_) = 0;
    (*(code *)0x10002f0f8)(uVar2);
    *(undefined8 *)(IVar1 + pausedTime_) = 0;
  }
  return IVar1;
}



// Function Stack Size: 0x20 bytes

void CopyStatusViewController::addFile_size_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + files_);
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",param_4);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar3,"setValue:forKey:",uVar2,uVar1);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f8)(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(param_1,"bytesToCopy");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  lVar4 = (*(code *)0x10002f0f0)(uVar3,"longLongValue");
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar4 + param_4);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(param_1,"setBytesToCopy:",uVar1);
  (*(code *)0x10002f0f8)(uVar1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void CopyStatusViewController::skipFile_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [128];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  lVar7 = files_;
  uVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + files_),"valueForKey:",uVar3);
  lVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(lVar5);
  uVar4 = uVar3;
  if (lVar5 == 0) {
    cVar2 = (*(code *)0x10002f0f0)(uVar3,"hasSuffix:",&cf__);
    if (cVar2 == '\0') {
      uVar4 = (*(code *)0x10002f0f0)(uVar3,"stringByAppendingString:",&cf__);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f8)(uVar3);
    }
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"array");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    local_148 = ZEXT816(0);
    local_158 = ZEXT816(0);
    local_168 = ZEXT816(0);
    local_178 = ZEXT816(0);
    uVar6 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + lVar7));
    uVar8 = (*(code *)0x10002f0f0)
                      (uVar6,"countByEnumeratingWithState:objects:count:",local_178,local_b8,0x10);
    if (uVar8 != 0) {
      lVar7 = *local_168._0_8_;
      do {
        uVar9 = 0;
        do {
          if (*local_168._0_8_ != lVar7) {
            __stubs::_objc_enumerationMutation(uVar6);
          }
          uVar1 = *(undefined8 *)(local_178._8_8_ + uVar9 * 8);
          cVar2 = (*(code *)0x10002f0f0)(uVar1,"hasPrefix:",uVar4);
          if (cVar2 != '\0') {
            (*(code *)0x10002f0f0)(uVar3,"addObject:",uVar1);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
        uVar8 = (*(code *)0x10002f0f0)
                          (uVar6,"countByEnumeratingWithState:objects:count:",local_178,local_b8,
                           0x10);
      } while (uVar8 != 0);
    }
    (*(code *)0x10002f0f8)(uVar6);
    local_188 = ZEXT816(0);
    local_198 = ZEXT816(0);
    local_1a8 = ZEXT816(0);
    local_1b8 = ZEXT816(0);
    uVar8 = (*(code *)0x10002f0f0)
                      (uVar3,"countByEnumeratingWithState:objects:count:",local_1b8,local_138,0x10);
    if (uVar8 != 0) {
      lVar7 = *local_1a8._0_8_;
      do {
        uVar9 = 0;
        do {
          if (*local_1a8._0_8_ != lVar7) {
            __stubs::_objc_enumerationMutation(uVar3);
          }
          (*(code *)0x10002f0f0)(param_1,"skipFile:",*(undefined8 *)(local_1b8._8_8_ + uVar9 * 8));
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
        uVar8 = (*(code *)0x10002f0f0)
                          (uVar3,"countByEnumeratingWithState:objects:count:",local_1b8,local_138,
                           0x10);
      } while (uVar8 != 0);
    }
    (*(code *)0x10002f0f8)(uVar3);
  }
  else {
    uVar6 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar7),"valueForKey:",uVar3);
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    lVar5 = (*(code *)0x10002f0f0)(uVar6,"longLongValue");
    (*(code *)0x10002f0f8)(uVar6);
    (*(code *)0x10002f0f0)(param_1,"willChangeValueForKey:",&cf_topProgressString);
    (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar7),"removeObjectForKey:",uVar3);
    (*(code *)0x10002f0f0)(param_1,"didChangeValueForKey:",&cf_topProgressString);
    uVar3 = (*(code *)0x10002f0f0)(param_1,"bytesToCopy");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    lVar7 = (*(code *)0x10002f0f0)(uVar3,"longLongValue");
    uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar7 - lVar5);
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)0x10002f0f0)(param_1,"setBytesToCopy:",uVar6);
    (*(code *)0x10002f0f8)(uVar6);
    (*(code *)0x10002f0f8)(uVar3);
  }
  (*(code *)0x10002f0f8)(uVar4);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



void CopyStatusViewController::finishedFile_(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + files_);
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  uVar2 = (*(code *)0x10002f0f0)(uVar2,"valueForKey:",uVar1);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  lVar3 = (*(code *)0x10002f0f0)(uVar2,"longLongValue");
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f0)(param_1,"willChangeValueForKey:",&cf_topProgressString);
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + files_),"removeObjectForKey:",param_3);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f0)(param_1,"didChangeValueForKey:",&cf_topProgressString);
  lVar4 = (*(code *)0x10002f0f0)(param_1,"filesCompletedBytesCopied");
  (*(code *)0x10002f0f0)(param_1,"setFilesCompletedBytesCopied:",lVar4 + lVar3);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(param_1,"setFileInProgressBytesCopied:",uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar2);
  return;
}



// Function Stack Size: 0x18 bytes

long_long CopyStatusViewController::fileSize_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long_long lVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + files_),"valueForKey:");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  lVar2 = (*(code *)0x10002f0f0)(uVar1,"longLongValue");
  (*(code *)0x10002f0f8)(uVar1);
  return lVar2;
}



// Function Stack Size: 0x10 bytes

char CopyStatusViewController::preflightComplete(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + preflightComplete_);
}



// Function Stack Size: 0x14 bytes

void CopyStatusViewController::setPreflightComplete_(ID param_1,SEL param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(char *)(param_1 + preflightComplete_) = param_3;
  if (param_3 != '\0') {
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDate,"date");
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    uVar1 = *(undefined8 *)(param_1 + startTime_);
    *(undefined8 *)(param_1 + startTime_) = uVar2;
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f8)(uVar1);
    return;
  }
  return;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::bytesCopied(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  
  lVar1 = *(long *)(param_1 + filesCompletedBytesCopied_);
  lVar2 = (*(code *)0x10002f0f0)
                    (*(undefined8 *)(param_1 + fileInProgressBytesCopied_),"longLongValue");
                    // WARNING: Treating indirect jump as call
  IVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar1 + lVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::keyPathsForValuesAffectingBytesCopied(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSSet,"setWithObjects:",&cf_filesCompletedBytesCopied,
                     &cf_fileInProgressBytesCopied,0);
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::copying(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + preflightComplete_) == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + shouldCancel_) == '\0';
  }
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithBool:",bVar2);
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::keyPathsForValuesAffectingCopying(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSSet,"setWithObjects:",&cf_preflightComplete,&cf_shouldCancel,0
                    );
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::topProgressString(ID param_1,SEL param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  lVar1 = files_;
  uVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + files_),"count");
  if (*(char *)(param_1 + shouldCancel_) == '\0') {
    if ((uVar2 == 0) || (*(char *)(param_1 + preflightComplete_) == '\0')) {
      uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      uVar4 = (*(code *)0x10002f0f0)
                        (uVar3,"localizedStringForKey:value:table:",&cf_preparingToCopyLabel,&cf___,
                         0);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f8)(uVar3);
      uVar3 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar4,
                         *(undefined8 *)(param_1 + destination_));
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    }
    else {
      if (1 < uVar2) {
        uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
        uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
        uVar4 = (*(code *)0x10002f0f0)
                          (uVar3,"localizedStringForKey:value:table:",&cf_copyingMultipleItemsLabel,
                           &cf___,0);
        uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)0x10002f0f8)(uVar3);
        uVar3 = (*(code *)0x10002f0f0)
                          (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar4,uVar2,
                           *(undefined8 *)(param_1 + destination_));
        uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
        (*(code *)0x10002f0f8)(uVar4);
        goto LAB_10000ed08;
      }
      uVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"allKeys");
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      uVar4 = (*(code *)0x10002f0f0)(uVar3,"objectAtIndex:",0);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f8)(uVar3);
      uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      uVar5 = (*(code *)0x10002f0f0)
                        (uVar3,"localizedStringForKey:value:table:",&cf_copyingSingleItemLabel,
                         &cf___,0);
      uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)0x10002f0f8)(uVar3);
      uVar3 = (*(code *)0x10002f0f0)(uVar4,"lastPathComponent");
      uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      uVar3 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar5,uVar6,
                         *(undefined8 *)(param_1 + destination_));
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      (*(code *)0x10002f0f8)(uVar6);
      (*(code *)0x10002f0f8)(uVar5);
    }
    (*(code *)0x10002f0f8)(uVar4);
  }
  else {
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = (*(code *)0x10002f0f0)
                      (uVar4,"localizedStringForKey:value:table:",&cf_cancelingLabel,&cf___,0);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)0x10002f0f8)(uVar4);
  }
LAB_10000ed08:
  IVar7 = __stubs::_objc_autoreleaseReturnValue(uVar3);
  return IVar7;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::keyPathsForValuesAffectingTopProgressString(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSSet,"setWithObjects:",&cf_destination,&cf_copying,0);
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::timeLeft(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  cfstringStruct *pcVar8;
  double dVar9;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDate,"date");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  dVar9 = (double)(*(code *)0x10002f0f0)
                            (uVar1,"timeIntervalSinceDate:",*(undefined8 *)(param_1 + startTime_));
  dVar9 = dVar9 - *(double *)(param_1 + pausedTime_);
  (*(code *)0x10002f0f8)(uVar1);
  if ((*(char *)(param_1 + preflightComplete_) == '\0') || (dVar9 < 3.0)) {
LAB_10000ee7c:
    uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    pcVar8 = &cf_timeRemainingUnknown;
  }
  else {
    uVar1 = (*(code *)0x10002f0f0)(param_1,"bytesCopied");
    uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
    lVar2 = (*(code *)0x10002f0f0)(uVar1,"longLongValue");
    (*(code *)0x10002f0f8)(uVar1);
    if (lVar2 == 0) goto LAB_10000ee7c;
    lVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + bytesToCopy_),"longLongValue");
    dVar9 = (double)(lVar3 - lVar2) / ((double)lVar2 / dVar9);
    if (5.0 <= dVar9) {
      if (15.0 <= dVar9) {
        if (30.0 <= dVar9) {
          dVar9 = dVar9 / 60.0;
          if (2.0 <= dVar9) {
            if (60.0 <= dVar9) {
              uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
              uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
              if (dVar9 / 60.0 < 2.0) {
                uVar4 = (*(code *)0x10002f0f0)
                                  (uVar1,"localizedStringForKey:value:table:",&cf_timeRemaining1Hour
                                   ,&cf___,0);
                uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
                (*(code *)0x10002f0f8)(uVar1);
                goto LAB_10000eeca;
              }
              uVar7 = 1;
              uVar4 = (*(code *)0x10002f0f0)
                                (uVar1,"localizedStringForKey:value:table:",&cf_timeRemainingHours,
                                 &cf___,0);
              uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
              (*(code *)0x10002f0f8)(uVar1);
              uVar1 = (*(code *)0x10002f0f0)
                                (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar6,
                                 CONCAT44(uVar7,(int)(dVar9 / 60.0)));
              uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
            }
            else {
              uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
              uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
              uVar7 = 1;
              uVar4 = (*(code *)0x10002f0f0)
                                (uVar1,"localizedStringForKey:value:table:",&cf_timeRemainingMinutes
                                 ,&cf___,0);
              uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
              (*(code *)0x10002f0f8)(uVar1);
              uVar1 = (*(code *)0x10002f0f0)
                                (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar6,
                                 CONCAT44(uVar7,(int)dVar9));
              uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
            }
            (*(code *)0x10002f0f8)(uVar6);
            goto LAB_10000eeca;
          }
          uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
          uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
          pcVar8 = &cf_timeRemaining1Minute;
        }
        else {
          uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
          uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
          pcVar8 = &cf_timeRemainingLessThan30Seconds;
        }
      }
      else {
        uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
        uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
        pcVar8 = &cf_timeRemainingLessThan15Seconds;
      }
    }
    else {
      uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
      pcVar8 = &cf_timeRemainingLessThan5Seconds;
    }
  }
  uVar4 = (*(code *)0x10002f0f0)(uVar1,"localizedStringForKey:value:table:",pcVar8,&cf___,0);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar1);
LAB_10000eeca:
  IVar5 = __stubs::_objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::bottomProgressString(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  lVar1 = humanSizeTransformer_;
  uVar3 = *(undefined8 *)(param_1 + humanSizeTransformer_);
  uVar2 = (*(code *)0x10002f0f0)(param_1,"bytesCopied");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar3,"transformedValue:",uVar2);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)
                    (*(undefined8 *)(param_1 + lVar1),"transformedValue:",
                     *(undefined8 *)(param_1 + bytesToCopy_));
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar4,"localizedStringForKey:value:table:",&cf_bottomProgressStringFormat,
                     &cf___,0);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  uVar4 = (*(code *)0x10002f0f0)(param_1,"timeLeft");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithFormat:",uVar5,uVar3,uVar2,uVar4);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar3);
  IVar7 = __stubs::_objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::keyPathsForValuesAffectingBottomProgressString(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSSet,"setWithObjects:",&cf_shouldCancel,&cf_bytesCopied,
                     &cf_bytesToCopy,0);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void CopyStatusViewController::cancelButtonPressed_(ID param_1,SEL param_2,ID param_3)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"setShouldCancel:",1);
  return;
}



// Function Stack Size: 0x18 bytes

char CopyStatusViewController::shouldReplaceFilename_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  char cVar15;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  cVar1 = (*(code *)0x10002f0f0)(param_1,"replaceAll");
  cVar15 = '\x01';
  if (cVar1 == '\0') {
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)0x10002f0f0)
                      (uVar3,"localizedStringForKey:value:table:",&cf_warningFileExistsReplaceAll,
                       &cf___,0);
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)0x10002f0f8)(uVar3);
    uVar5 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + files_),"count");
    if (uVar5 < 2) {
      (*(code *)0x10002f0f8)(uVar4);
      uVar4 = 0;
    }
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar3,"localizedStringForKey:value:table:",&cf_warningFileExistsMessage,
                       &cf___,0);
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)0x10002f0f0)
                      (uVar7,"localizedStringForKey:value:table:",&cf_warningFileExistsInformative,
                       &cf___,0);
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)0x10002f0f0)
                       (uVar9,"localizedStringForKey:value:table:",&cf_warningFileExistsReplace,
                        &cf___,0);
    uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar11 = __stubs::_objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)0x10002f0f0)
                       (uVar11,"localizedStringForKey:value:table:",&cf_warningFileExistsSkip,&cf___
                        ,0);
    uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
    uVar13 = (*(code *)0x10002f0f0)(uVar2,"lastPathComponent");
    uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
    lVar14 = (*(code *)0x10002f0f0)
                       (param_1,
                        "showPerFileQuestionFormat:informativeText:defaultButton:alternateButton:otherButton:filename:"
                        ,uVar6,uVar8,uVar10,uVar12,uVar4,uVar13);
    (*(code *)0x10002f0f8)(uVar13);
    (*(code *)0x10002f0f8)(uVar12);
    (*(code *)0x10002f0f8)(uVar11);
    (*(code *)0x10002f0f8)(uVar10);
    (*(code *)0x10002f0f8)(uVar9);
    (*(code *)0x10002f0f8)(uVar8);
    (*(code *)0x10002f0f8)(uVar7);
    (*(code *)0x10002f0f8)(uVar6);
    (*(code *)0x10002f0f8)(uVar3);
    cVar15 = '\x01';
    if (lVar14 == -1) {
      (*(code *)0x10002f0f0)(param_1,"setReplaceAll:",1);
    }
    else if (lVar14 == 0) {
      (*(code *)0x10002f0f0)(param_1,"skipFile:",uVar2);
      cVar15 = '\0';
    }
    (*(code *)0x10002f0f8)(uVar4);
  }
  (*(code *)0x10002f0f8)(uVar2);
  return cVar15;
}



// Function Stack Size: 0x40 bytes

long_long CopyStatusViewController::
          showPerFileQuestionFormat_informativeText_defaultButton_alternateButton_otherButton_filename_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
                    ID param_8)

{
  long_long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar2 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  uVar4 = (*(code *)puVar2)(param_4);
  uVar5 = (*(code *)puVar2)(param_5);
  uVar6 = (*(code *)puVar2)(param_6);
  uVar7 = (*(code *)puVar2)(param_7);
  uVar8 = (*(code *)puVar2)(param_8);
  local_50 = 0;
  local_48 = &local_50;
  local_40 = 0x20000000;
  local_3c = 0x20;
  local_b0 = __got::__NSConcreteStackBlock;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = 
  ___121__CopyStatusViewController_showPerFileQuestionFormat_informativeText_defaultButton_alternateButton_otherButton_filename___block_invoke
  ;
  local_98 = &___block_descriptor_tmp;
  uVar3 = (*(code *)puVar2)(uVar3);
  local_90 = uVar3;
  uVar8 = (*(code *)puVar2)(uVar8);
  local_88 = uVar8;
  uVar5 = (*(code *)puVar2)(uVar5);
  local_80 = uVar5;
  uVar6 = (*(code *)puVar2)(uVar6);
  local_78 = uVar6;
  uVar7 = (*(code *)puVar2)(uVar7);
  local_70 = uVar7;
  uVar4 = (*(code *)puVar2)(uVar4);
  local_58 = &local_50;
  local_68 = uVar4;
  local_60 = (*(code *)puVar2)(param_1);
  _ExecuteSyncOnMainThread(&local_b0);
  lVar1 = local_48[3];
  (*(code *)0x10002f0f8)(local_60);
  (*(code *)0x10002f0f8)(local_68);
  (*(code *)0x10002f0f8)(local_70);
  (*(code *)0x10002f0f8)(local_78);
  (*(code *)0x10002f0f8)(local_80);
  (*(code *)0x10002f0f8)(local_88);
  (*(code *)0x10002f0f8)(local_90);
  __stubs::__Block_object_dispose(&local_50,8);
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  return lVar1;
}



void ___121__CopyStatusViewController_showPerFileQuestionFormat_informativeText_defaultButton_alternateButton_otherButton_filename___block_invoke
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDate,"date");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithFormat:",*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(param_1 + 0x28));
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSAlert,
                     "alertWithMessageText:defaultButton:alternateButton:otherButton:informativeTextWithFormat:"
                     ,uVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x28));
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar3,"setAlertStyle:",0);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"runModal");
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = uVar4;
  dVar5 = (double)(*(code *)0x10002f0f0)(uVar1,"timeIntervalSinceNow");
  *(double *)(*(long *)(param_1 + 0x50) + CopyStatusViewController::pausedTime_) =
       *(double *)(*(long *)(param_1 + 0x50) + CopyStatusViewController::pausedTime_) - dVar5;
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



void ___copy_helper_block_(long param_1,long param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __got::_objc_retain;
  (*(code *)__got::_objc_retain)(*(undefined8 *)(param_2 + 0x20));
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x28));
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x30));
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x38));
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x40));
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x48));
  __stubs::__Block_object_assign((void *)(param_1 + 0x58),*(void **)(param_2 + 0x58),8);
                    // WARNING: Could not recover jumptable at 0x00010000f8e7. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_2 + 0x50));
  return;
}



void ___destroy_helper_block_(long param_1)

{
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x28));
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x30));
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x38));
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x40));
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x48));
  __stubs::__Block_object_dispose(*(void **)(param_1 + 0x58),8);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(*(undefined8 *)(param_1 + 0x50));
  return;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::bytesToCopy(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = __stubs::_objc_getProperty(param_1,param_2,bytesToCopy_,1);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void CopyStatusViewController::setBytesToCopy_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_setProperty(param_1,param_2,bytesToCopy_,param_3,1,0);
  return;
}



// Function Stack Size: 0x10 bytes

long_long CopyStatusViewController::filesCompletedBytesCopied(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + filesCompletedBytesCopied_);
}



// Function Stack Size: 0x18 bytes

void CopyStatusViewController::setFilesCompletedBytesCopied_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + filesCompletedBytesCopied_) = param_3;
  return;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::fileInProgressBytesCopied(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = __stubs::_objc_getProperty(param_1,param_2,fileInProgressBytesCopied_,0);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void CopyStatusViewController::setFileInProgressBytesCopied_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_setProperty(param_1,param_2,fileInProgressBytesCopied_,param_3,0,1);
  return;
}



// Function Stack Size: 0x10 bytes

char CopyStatusViewController::shouldCancel(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + shouldCancel_);
}



// Function Stack Size: 0x14 bytes

void CopyStatusViewController::setShouldCancel_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + shouldCancel_) = param_3;
  return;
}



// Function Stack Size: 0x10 bytes

ID CopyStatusViewController::destination(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = __stubs::_objc_getProperty(param_1,param_2,destination_,0);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void CopyStatusViewController::setDestination_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_setProperty(param_1,param_2,destination_,param_3,0,1);
  return;
}



// Function Stack Size: 0x10 bytes

char CopyStatusViewController::replaceAll(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + replaceAll_);
}



// Function Stack Size: 0x14 bytes

void CopyStatusViewController::setReplaceAll_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + replaceAll_) = param_3;
  return;
}



// Function Stack Size: 0x10 bytes

void CopyStatusViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_storeStrong(humanSizeTransformer_ + param_1,0);
  __stubs::_objc_storeStrong(startTime_ + param_1,0);
  __stubs::_objc_storeStrong(destination_ + param_1,0);
  __stubs::_objc_storeStrong(fileInProgressBytesCopied_ + param_1,0);
  __stubs::_objc_storeStrong(bytesToCopy_ + param_1,0);
  __stubs::_objc_storeStrong(param_1 + files_,0);
  return;
}



// Function Stack Size: 0x10 bytes

ID StatusWindowController::sharedStatusWindowController(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  if (__StatusWindowController_sharedStatusWindowController__sharedStatusWindowController == 0) {
    uVar2 = (*(code *)0x10002f0f0)(&objc::class_t::StatusWindowController,"alloc");
    lVar3 = (*(code *)0x10002f0f0)(uVar2,"init");
    lVar1 = __StatusWindowController_sharedStatusWindowController__sharedStatusWindowController;
    __StatusWindowController_sharedStatusWindowController__sharedStatusWindowController = lVar3;
    (*(code *)0x10002f0f8)(lVar1);
  }
  IVar4 = __stubs::_objc_retainAutoreleaseReturnValue
                    (
                    __StatusWindowController_sharedStatusWindowController__sharedStatusWindowController
                    );
  return IVar4;
}



// Function Stack Size: 0x10 bytes

ID StatusWindowController::init(ID param_1,SEL param_2)

{
  undefined uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::StatusWindowController;
  local_40 = param_1;
  IVar2 = __stubs::_objc_msgSendSuper2(&local_40,"initWithWindowNibName:",&cf_StatusWindow);
  if (IVar2 != 0) {
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"alloc");
    uVar4 = (*(code *)0x10002f0f0)(uVar3,"init");
    uVar3 = *(undefined8 *)(IVar2 + statusControllers_);
    *(undefined8 *)(IVar2 + statusControllers_) = uVar4;
    (*(code *)0x10002f0f8)(uVar3);
    uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)0x10002f0f0)(uVar3,"valueForKey:",&cf_CopyIsModal);
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    uVar1 = (*(code *)0x10002f0f0)(uVar4,"boolValue");
    *(undefined *)(IVar2 + modal_) = uVar1;
    (*(code *)0x10002f0f8)(uVar4);
    (*(code *)0x10002f0f8)(uVar3);
  }
  return IVar2;
}



// Function Stack Size: 0x18 bytes

ID StatusWindowController::addCopyStatusForWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)(&objc::class_t::CopyStatusViewController,"alloc");
  uVar3 = (*(code *)0x10002f0f0)(uVar3,"init");
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + statusControllers_),"addObject:",uVar3);
  uVar4 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar4,"contentView");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)(uVar3,"view");
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)(uVar5,"addSubview:",uVar6);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f0)(param_1,"arrangeStatusViews");
  puVar1 = __got::_NSApp;
  if (*(char *)(param_1 + modal_) == '\0') {
    uVar4 = (*(code *)0x10002f0f0)(param_1,"window");
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)0x10002f0f0)(uVar4,"orderFront:",param_1);
    (*(code *)0x10002f0f8)(uVar4);
  }
  else {
    (*(code *)0x10002f0f0)(*(undefined8 *)__got::_NSApp,"activateIgnoringOtherApps:",1);
    uVar4 = *(undefined8 *)puVar1;
    uVar5 = (*(code *)0x10002f0f0)(param_1,"window");
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)0x10002f0f0)
              (uVar4,"beginSheet:modalForWindow:modalDelegate:didEndSelector:contextInfo:",uVar5,
               uVar2,param_1,0,0);
    (*(code *)0x10002f0f8)(uVar5);
  }
  (*(code *)0x10002f0f8)(uVar2);
  IVar7 = __stubs::_objc_autoreleaseReturnValue(uVar3);
  return IVar7;
}



// Function Stack Size: 0x18 bytes

void StatusWindowController::removeStatus_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + statusControllers_);
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  (*(code *)0x10002f0f0)(uVar2,"removeObject:",uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"view");
  (*(code *)0x10002f0f8)(uVar1);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar2,"removeFromSuperview");
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"arrangeStatusViews");
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x10 bytes

void StatusWindowController::arrangeStatusViews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  plVar8 = (long *)__got::___stack_chk_guard;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar1 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  lVar5 = statusControllers_;
  lVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + statusControllers_),"count");
  if (lVar2 == 0) {
    (*(code *)0x10002f0f0)(uVar1,"orderOut:",param_1);
    if (*(char *)(param_1 + modal_) != '\0') {
      uVar3 = *(undefined8 *)__got::_NSApp;
      uVar4 = (*(code *)0x10002f0f0)(param_1,"window");
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f0)(uVar3,"endSheet:",uVar4);
      (*(code *)0x10002f0f8)(uVar4);
    }
  }
  else {
    uVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar5),"objectAtIndex:",0);
    uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)0x10002f0f0)(uVar3,"view");
    lVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)0x10002f0f8)(uVar3);
    if (lVar5 == 0) {
      local_c8 = ZEXT816(0);
      local_d8 = ZEXT816(0);
      uVar9 = 0;
    }
    else {
      __stubs::_objc_msgSend_stret(local_d8,lVar5,"frame");
      uVar9 = SUB164(local_c8,0);
    }
    (*(code *)0x10002f0f0)(uVar9,uVar1,"setContentSize:");
    local_e8 = ZEXT816(0);
    local_f8 = ZEXT816(0);
    local_108 = ZEXT816(0);
    local_118 = ZEXT816(0);
    uVar3 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + statusControllers_));
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar3,"countByEnumeratingWithState:objects:count:",local_118,local_b8,0x10);
    if (uVar6 != 0) {
      lVar2 = *local_108._0_8_;
      do {
        uVar7 = 0;
        do {
          if (*local_108._0_8_ != lVar2) {
            __stubs::_objc_enumerationMutation(uVar3);
          }
          uVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(local_118._8_8_ + uVar7 * 8),"view");
          uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
          (*(code *)0x10002f0f0)(0,uVar4,"setFrameOrigin:");
          (*(code *)0x10002f0f8)(uVar4);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
        uVar6 = (*(code *)0x10002f0f0)
                          (uVar3,"countByEnumeratingWithState:objects:count:",local_118,local_b8,
                           0x10);
      } while (uVar6 != 0);
    }
    (*(code *)0x10002f0f8)(uVar3);
    (*(code *)0x10002f0f8)(lVar5);
    plVar8 = (long *)__got::___stack_chk_guard;
  }
  (*(code *)0x10002f0f8)(uVar1);
  if (*plVar8 == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



bool StatusWindowController::allowMoreOperations(long param_1)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(char *)(param_1 + modal_) != '\0') {
    lVar1 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + statusControllers_),"count");
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}



// Function Stack Size: 0x10 bytes

ID StatusWindowController::windowTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_copyStatusWindowTitle,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

void StatusWindowController::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_storeStrong(param_1 + statusControllers_,0);
  return;
}



// Function Stack Size: 0x18 bytes

ID DashedDateFormatter::stringForObjectValue_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  ID local_30;
  class_t *local_28;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDate,"class");
  cVar1 = (*(code *)0x10002f0f0)(uVar2,"isKindOfClass:",uVar3);
  if ((cVar1 == '\0') ||
     (dVar6 = (double)(*(code *)0x10002f0f0)(uVar2,"timeIntervalSince1970"), dVar6 != 0.0)) {
    local_28 = &objc::class_t::DashedDateFormatter;
    local_30 = param_1;
    uVar3 = __stubs::_objc_msgSendSuper2(&local_30,"stringForObjectValue:",uVar2);
    pcVar5 = (cfstringStruct *)__stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  }
  else {
    pcVar5 = &cf___;
    (*(code *)__got::_objc_retain)(&cf___);
  }
  (*(code *)0x10002f0f8)(uVar2);
  IVar4 = __stubs::_objc_autoreleaseReturnValue(pcVar5);
  return IVar4;
}



// Function Stack Size: 0x1c bytes

ID MTPDeviceID::initWithVendorID_productID_locationID_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,unsigned_int param_5)

{
  ID IVar1;
  undefined8 uVar2;
  ID local_38;
  class_t *local_30;
  
  local_30 = &objc::class_t::MTPDeviceID;
  local_38 = param_1;
  IVar1 = __stubs::_objc_msgSendSuper2(&local_38,"init");
  if (IVar1 != 0) {
    *(unsigned_int *)(IVar1 + _vendorID) = param_3;
    *(unsigned_int *)(IVar1 + _productID) = param_4;
    *(unsigned_int *)(IVar1 + _locationID) = param_5;
    uVar2 = (*(code *)0x10002f0f0)(IVar1,"description");
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = __stubs::_objc_retainAutorelease(uVar2);
    (*(code *)0x10002f0f0)(uVar2,"UTF8String");
    _trace(0);
    (*(code *)0x10002f0f8)(uVar2);
  }
  return IVar1;
}



// Function Stack Size: 0x10 bytes

ID MTPDeviceID::description(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___X___X___X,
                     *(undefined4 *)(param_1 + _vendorID),*(undefined4 *)(param_1 + _productID),
                     *(undefined4 *)(param_1 + _locationID));
  return IVar1;
}



// Function Stack Size: 0x18 bytes

ID MTPDeviceID::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  
  uVar4 = (*(code *)__got::_objc_retain)(param_3);
  uVar5 = (*(code *)0x10002f0f0)(param_3,"objectForKey:",&cf_vendorID);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)(param_3,"objectForKey:",&cf_productID);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)0x10002f0f0)(param_3,"objectForKey:",&cf_locationID);
  (*(code *)0x10002f0f8)(uVar4);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)0x10002f0f0)(&objc::class_t::MTPDeviceID,"alloc");
  uVar1 = (*(code *)0x10002f0f0)(uVar5,"unsignedIntValue");
  uVar2 = (*(code *)0x10002f0f0)(uVar6,"unsignedIntValue");
  uVar3 = (*(code *)0x10002f0f0)(uVar4,"unsignedIntValue");
  IVar8 = (*(code *)0x10002f0f0)(uVar7,"initWithVendorID:productID:locationID:",uVar1,uVar2,uVar3);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(param_1);
  return IVar8;
}



// Function Stack Size: 0x10 bytes

ID MTPDeviceID::formatToDictionary(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"alloc");
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSNumber,"numberWithUnsignedInteger:",
                     *(undefined4 *)(param_1 + _vendorID));
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSNumber,"numberWithUnsignedInteger:",
                     *(undefined4 *)(param_1 + _productID));
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSNumber,"numberWithUnsignedInteger:",
                     *(undefined4 *)(param_1 + _locationID));
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar1 = (*(code *)0x10002f0f0)(uVar1,"initWithObjects:",uVar2,uVar3,uVar4,0);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"alloc");
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar2,"initWithObjects:",&cf_vendorID,&cf_productID,&cf_locationID,0);
  uVar3 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:",uVar1,uVar2);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar5 = __stubs::_objc_autoreleaseReturnValue(uVar3);
  return IVar5;
}



// Function Stack Size: 0x10 bytes

unsigned_int MTPDeviceID::vendorID(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + _vendorID);
}



// Function Stack Size: 0x10 bytes

unsigned_int MTPDeviceID::productID(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + _productID);
}



// Function Stack Size: 0x10 bytes

unsigned_int MTPDeviceID::locationID(ID param_1,SEL param_2)

{
  return *(unsigned_int *)(param_1 + _locationID);
}



// Function Stack Size: 0x10 bytes

ID BundleInstaller::bundleName(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                     "/Volumes/Android/buildbot/src/googleplex-android/aft/vendor/aft/source/MacUtilities/BundleInstaller.m"
                    );
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)
            (uVar1,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,uVar2
             ,0xc,&cf_Shouldbeoverridden_);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  __stubs::_objc_retainAutorelease(&cf___);
  return (ID)&cf___;
}



// Function Stack Size: 0x10 bytes

ID BundleInstaller::bundleType(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                     "/Volumes/Android/buildbot/src/googleplex-android/aft/vendor/aft/source/MacUtilities/BundleInstaller.m"
                    );
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)
            (uVar1,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,uVar2
             ,0x11,&cf_Shouldbeoverridden_);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  __stubs::_objc_retainAutorelease(&cf___);
  return (ID)&cf___;
}



// Function Stack Size: 0x10 bytes

ID BundleInstaller::libraryDestinationPath(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                     "/Volumes/Android/buildbot/src/googleplex-android/aft/vendor/aft/source/MacUtilities/BundleInstaller.m"
                    );
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)
            (uVar1,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,uVar2
             ,0x16,&cf_Shouldbeoverridden_);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  __stubs::_objc_retainAutorelease(&cf___);
  return (ID)&cf___;
}



// Function Stack Size: 0x10 bytes

char BundleInstaller::shouldUpdateBundle(ID param_1,SEL param_2)

{
  return '\x01';
}



// Function Stack Size: 0x10 bytes

void BundleInstaller::didUpdateBundle(ID param_1,SEL param_2)

{
  return;
}



// Function Stack Size: 0x10 bytes

unsigned_long_long BundleInstaller::installBundle(ID param_1,SEL param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  unsigned_long_long uVar9;
  
  uVar2 = (*(code *)0x10002f0f0)(param_1,"findInstalledBundle");
  lVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(lVar3,"bundlePath");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  if (lVar3 == 0) {
    cVar1 = (*(code *)0x10002f0f0)(param_1,"installNewBundle");
    uVar4 = __stubs::_objc_retainAutorelease(uVar2);
    uVar4 = (*(code *)0x10002f0f0)(uVar4,"UTF8String");
    if (cVar1 == '\0') {
      __stubs::_NSLog(&cf_Failedtoinstallbundleatpath_s,uVar4);
      uVar9 = 0xffffffffffffffff;
    }
    else {
      __stubs::_NSLog(&cf_Installedbundleatpath_s,uVar4);
      uVar9 = 3;
    }
  }
  else {
    uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)0x10002f0f0)(lVar3,"infoDictionary");
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)__got::_kCFBundleVersionKey;
    uVar7 = (*(code *)0x10002f0f0)(uVar6,"valueForKey:",uVar4);
    uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)0x10002f0f8)(uVar6);
    uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
    uVar8 = (*(code *)0x10002f0f0)(uVar6,"infoDictionary");
    uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
    uVar4 = (*(code *)0x10002f0f0)(uVar8,"valueForKey:",uVar4);
    uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)0x10002f0f8)(uVar8);
    (*(code *)0x10002f0f8)(uVar6);
    cVar1 = (*(code *)0x10002f0f0)(param_1,"isVersion:higherThanVersion:",uVar4,uVar7);
    if (cVar1 == '\0') {
      uVar6 = __stubs::_objc_retainAutorelease(uVar2);
      uVar6 = (*(code *)0x10002f0f0)(uVar6,"UTF8String");
      __stubs::_NSLog(&cf_Bundlealreadyexistsat_s,uVar6);
      uVar9 = 1;
    }
    else {
      cVar1 = (*(code *)0x10002f0f0)(param_1,"shouldUpdateBundle");
      uVar9 = 2;
      if (cVar1 != '\0') {
        cVar1 = (*(code *)0x10002f0f0)(uVar5,"removeItemAtPath:error:",uVar2,0);
        if (cVar1 == '\0') {
          uVar6 = __stubs::_objc_retainAutorelease(uVar2);
          uVar6 = (*(code *)0x10002f0f0)(uVar6,"UTF8String");
          __stubs::_NSLog(&cf_Failedtoremovebundleatpath_s,uVar6);
          uVar9 = 0xfffffffffffffffe;
        }
        else {
          cVar1 = (*(code *)0x10002f0f0)(param_1,"installNewBundle");
          if (cVar1 == '\0') {
            uVar6 = __stubs::_objc_retainAutorelease(uVar2);
            uVar6 = (*(code *)0x10002f0f0)(uVar6,"UTF8String");
            __stubs::_NSLog(&cf_Failedtoupdatebundleatpath_s,uVar6);
            uVar9 = 0xfffffffffffffffe;
          }
          else {
            (*(code *)0x10002f0f0)(param_1,"didUpdateBundle");
            uVar6 = __stubs::_objc_retainAutorelease(uVar2);
            uVar6 = (*(code *)0x10002f0f0)(uVar6,"UTF8String");
            __stubs::_NSLog(&cf_Updatedbundleatpath_s,uVar6);
            uVar9 = 4;
          }
        }
      }
    }
    (*(code *)0x10002f0f8)(uVar4);
    (*(code *)0x10002f0f8)(uVar7);
    (*(code *)0x10002f0f8)(uVar5);
  }
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(lVar3);
  return uVar9;
}



// Function Stack Size: 0x20 bytes

char BundleInstaller::isVersion_higherThanVersion_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = __got::_objc_retain;
  uVar3 = (*(code *)__got::_objc_retain)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  cVar2 = _parseVersion(uVar3,&local_24,&local_28,&local_2c,&local_30);
  (*(code *)0x10002f0f8)(uVar3);
  if (cVar2 != '\0') {
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    cVar2 = _parseVersion(uVar4,&local_34,&local_38,&local_3c,&local_40);
    bVar5 = true;
    if (cVar2 == '\0') goto LAB_100010ce9;
    if (local_34 < local_24) goto LAB_100010ce9;
    if (local_34 <= local_24) {
      if (local_38 < local_28) goto LAB_100010ce9;
      if (local_38 <= local_28) {
        if (local_3c < local_2c) goto LAB_100010ce9;
        if (local_3c <= local_2c) {
          bVar5 = local_40 < local_30;
          goto LAB_100010ce9;
        }
      }
    }
  }
  bVar5 = false;
LAB_100010ce9:
  (*(code *)0x10002f0f8)(uVar4);
  return bVar5;
}



bool _parseVersion(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  if (param_4 != 0) {
    if (param_5 != 0) {
      uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSScanner,"scannerWithString:",param_1);
      uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
      uVar3 = (*(code *)0x10002f0f0)
                        (&_OBJC_CLASS___NSCharacterSet,"characterSetWithCharactersInString:",&cf__);
      uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
      (*(code *)0x10002f0f0)(uVar2,"setCharactersToBeSkipped:",uVar3);
      (*(code *)0x10002f0f8)(uVar3);
      cVar1 = (*(code *)0x10002f0f0)(uVar2,"scanInt:",param_2);
      if (((cVar1 == '\0') ||
          (cVar1 = (*(code *)0x10002f0f0)(uVar2,"scanInt:",param_3), cVar1 == '\0')) ||
         (cVar1 = (*(code *)0x10002f0f0)(uVar2,"scanInt:",param_4), cVar1 == '\0')) {
        bVar4 = false;
      }
      else {
        cVar1 = (*(code *)0x10002f0f0)(uVar2,"scanInt:",param_5);
        bVar4 = cVar1 != '\0';
      }
      (*(code *)0x10002f0f8)(uVar2);
      return bVar4;
    }
    return false;
  }
  return false;
}



// Function Stack Size: 0x10 bytes

ID BundleInstaller::installedPath(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"destinationPath");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(param_1,"bundleName");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(param_1,"bundleType");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar2,"stringByAppendingPathExtension:",uVar3);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"stringByAppendingPathComponent:",uVar4);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar1);
  IVar5 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar5;
}



// Function Stack Size: 0x10 bytes

ID BundleInstaller::destinationPath(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar1 = __stubs::_NSSearchPathForDirectoriesInDomains(5,1,1);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(param_1,"libraryDestinationPath");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar2,"stringByAppendingPathComponent:",uVar3);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar5 = __stubs::_objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}



// Function Stack Size: 0x10 bytes

ID BundleInstaller::findInstalledBundle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"installedPath");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"bundleWithPath:",uVar1);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void BundleInstaller::removeQuarantineFromDirectory_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *path;
  ulong uVar7;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"subpathsOfDirectoryAtPath:error:",uVar2,0);
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
  if (uVar5 != 0) {
    lVar1 = *local_e8._0_8_;
    do {
      uVar7 = 0;
      do {
        if (*local_e8._0_8_ != lVar1) {
          __stubs::_objc_enumerationMutation(uVar4);
        }
        uVar6 = (*(code *)0x10002f0f0)
                          (uVar2,"stringByAppendingPathComponent:",
                           *(undefined8 *)(local_f8._8_8_ + uVar7 * 8));
        uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
        uVar6 = __stubs::_objc_retainAutorelease(uVar6);
        path = (char *)(*(code *)0x10002f0f0)(uVar6,"fileSystemRepresentation");
        __stubs::_removexattr(path,"com.apple.quarantine",1);
        (*(code *)0x10002f0f8)(uVar6);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      uVar5 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    } while (uVar5 != 0);
  }
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



bool BundleInstaller::installNewBundle(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(uVar2,"bundleURL");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(uVar3,"path");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar4,"stringByAppendingPathComponent:",&cf_Contents);
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)(uVar5,"stringByAppendingPathComponent:",&cf_Helpers);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)0x10002f0f0)(param_1,"bundleName");
  uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)0x10002f0f0)(param_1,"bundleType");
  uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)0x10002f0f0)(uVar7,"stringByAppendingFormat:",&cf____,uVar8);
  uVar9 = __stubs::_objc_retainAutoreleasedReturnValue(uVar9);
  uVar10 = (*(code *)0x10002f0f0)(uVar6,"stringByAppendingPathComponent:",uVar9);
  uVar10 = __stubs::_objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)0x10002f0f8)(uVar9);
  (*(code *)0x10002f0f8)(uVar8);
  (*(code *)0x10002f0f8)(uVar7);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(param_1,"destinationPath");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)
            (uVar3,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",uVar2,1,0,0
            );
  uVar4 = (*(code *)0x10002f0f0)(param_1,"installedPath");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  cVar1 = (*(code *)0x10002f0f0)(uVar3,"copyItemAtPath:toPath:error:",uVar10,uVar4,0);
  if (cVar1 != '\0') {
    (*(code *)0x10002f0f0)(param_1,"removeQuarantineFromDirectory:",uVar4);
  }
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar10);
  return cVar1 != '\0';
}



// Function Stack Size: 0x10 bytes

void AgentRunner::startAgent(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  
  uVar1 = (*(code *)0x10002f0f0)(&objc::class_t::AgentRunner,"alloc");
  uVar1 = (*(code *)0x10002f0f0)(uVar1,"init");
  (*(code *)0x10002f0f0)(uVar1,"installBundle");
  (*(code *)0x10002f0f0)(uVar1,"registerInLoginItems");
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"installedPath");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar2);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSDictionary,"dictionary");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  local_38 = 0;
  uVar5 = (*(code *)0x10002f0f0)
                    (uVar2,"launchApplicationAtURL:options:configuration:error:",uVar3,0x10000,uVar4
                     ,&local_38);
  lVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)__got::_objc_retain)(local_38);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
  if (lVar6 == 0) {
    uVar2 = (*(code *)0x10002f0f0)(uVar3,"path");
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
    __stubs::_NSLog(&cf_Failedtolaunchagentat______,uVar2,uVar5);
    (*(code *)0x10002f0f8)(uVar2);
  }
  (*(code *)0x10002f0f8)(lVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

ID AgentRunner::bundleName(ID param_1,SEL param_2)

{
  __stubs::_objc_retainAutorelease(&cf_AndroidFileTransferAgent);
  return (ID)&cf_AndroidFileTransferAgent;
}



// Function Stack Size: 0x10 bytes

ID AgentRunner::bundleType(ID param_1,SEL param_2)

{
  __stubs::_objc_retainAutorelease(&cf_app);
  return (ID)&cf_app;
}



// Function Stack Size: 0x10 bytes

ID AgentRunner::libraryDestinationPath(ID param_1,SEL param_2)

{
  __stubs::_objc_retainAutorelease(&cf_ApplicationSupport_Google_AndroidFileTransfer);
  return (ID)&cf_ApplicationSupport_Google_AndroidFileTransfer;
}



// Function Stack Size: 0x10 bytes

char AgentRunner::shouldUpdateBundle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"bundleName");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSArray,"arrayWithObject:",uVar1);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSTask,"launchedTaskWithLaunchPath:arguments:",
                     &cf__usr_bin_killall,uVar2);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  return '\x01';
}



// Function Stack Size: 0x10 bytes

void AgentRunner::registerInLoginItems(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long local_38;
  
  uVar4 = (*(code *)0x10002f0f0)(param_1,"installedPath");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar4,"lastPathComponent");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar4);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  lVar7 = __stubs::_LSSharedFileListCreate
                    (0,*(undefined8 *)__got::_kLSSharedFileListSessionLoginItems,0);
  if (lVar7 == 0) goto LAB_1000118b0;
  lVar8 = __stubs::_LSSharedFileListCopySnapshot(lVar7,0);
  if (lVar8 == 0) {
LAB_100011877:
    lVar8 = __stubs::_LSSharedFileListInsertItemURL
                      (lVar7,*(undefined8 *)__got::_kLSSharedFileListItemLast,0,0,uVar6,0,0);
    if (lVar8 != 0) {
      __stubs::_CFRelease(lVar8);
    }
  }
  else {
    lVar9 = __stubs::_CFArrayGetCount(lVar8);
    if (lVar9 < 1) {
      __stubs::_CFRelease(lVar8);
      goto LAB_100011877;
    }
    bVar1 = false;
    lVar14 = 0;
    do {
      uVar10 = __stubs::_CFArrayGetValueAtIndex(lVar8,lVar14);
      local_38 = 0;
      __stubs::_LSSharedFileListItemResolve(uVar10,0,&local_38,0);
      if (local_38 != 0) {
        uVar11 = (*(code *)__got::_objc_retain)();
        cVar3 = (*(code *)0x10002f0f0)(uVar6,"isEqual:",uVar11);
        bVar2 = true;
        if (cVar3 == '\0') {
          uVar12 = (*(code *)0x10002f0f0)(uVar11,"path");
          uVar12 = __stubs::_objc_retainAutoreleasedReturnValue(uVar12);
          uVar13 = (*(code *)0x10002f0f0)(uVar12,"lastPathComponent");
          uVar13 = __stubs::_objc_retainAutoreleasedReturnValue(uVar13);
          cVar3 = (*(code *)0x10002f0f0)(uVar13,"isEqual:",uVar5);
          (*(code *)0x10002f0f8)(uVar13);
          (*(code *)0x10002f0f8)(uVar12);
          bVar2 = bVar1;
          if (cVar3 != '\0') {
            __stubs::_LSSharedFileListItemRemove(lVar7,uVar10);
          }
        }
        bVar1 = bVar2;
        __stubs::_CFRelease(local_38);
        (*(code *)0x10002f0f8)(uVar11);
      }
      lVar14 = lVar14 + 1;
    } while (lVar9 != lVar14);
    __stubs::_CFRelease(lVar8);
    if (!bVar1) goto LAB_100011877;
  }
  __stubs::_CFRelease(lVar7);
LAB_1000118b0:
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  return;
}



void _GetLogFileName(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined local_488 [1024];
  undefined local_88 [80];
  long local_38;
  
  puVar1 = __got::_objc_retain;
  plVar9 = (long *)__got::___stack_chk_guard;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar5 = (*(code *)__got::_objc_retain)();
  uVar6 = (*(code *)puVar1)(param_2);
  sVar3 = __stubs::_FSFindFolder(0xffff8005,0x6c6f6773,0,local_88);
  uVar7 = 0;
  if (sVar3 == 0) {
    iVar4 = __stubs::_FSRefMakePath(local_88,local_488,0x3ff);
    uVar7 = 0;
    if (iVar4 == 0) {
      uVar7 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSString,"stringWithUTF8String:",local_488);
      uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = (*(code *)0x10002f0f0)(uVar7,"stringByAppendingPathComponent:",uVar5);
      uVar8 = __stubs::_objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)0x10002f0f8)(uVar7);
      uVar7 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
      cVar2 = (*(code *)0x10002f0f0)
                        (uVar7,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:"
                         ,uVar8,1,0,0);
      (*(code *)0x10002f0f8)(uVar7);
      uVar7 = 0;
      if (cVar2 != '\0') {
        uVar7 = (*(code *)0x10002f0f0)(uVar8,"stringByAppendingPathComponent:",uVar6);
        uVar7 = __stubs::_objc_retainAutoreleasedReturnValue(uVar7);
      }
      (*(code *)0x10002f0f8)(uVar8);
      plVar9 = (long *)__got::___stack_chk_guard;
    }
  }
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f8)(uVar5);
  if (*plVar9 == local_38) {
    __stubs::_objc_autoreleaseReturnValue(uVar7);
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



void _ExecuteSyncOnMainThread(void)

{
  char cVar1;
  long lVar2;
  
  lVar2 = (*(code *)__got::_objc_retain)();
  cVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSThread,"isMainThread");
  if (cVar1 == '\0') {
    __stubs::_dispatch_sync(__got::__dispatch_main_q,lVar2);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2);
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(lVar2);
  return;
}



// Function Stack Size: 0x20 bytes

void Utils::updateModifiedDate_toFile_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = __got::_objc_retain;
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",param_3,
                     *(undefined8 *)__got::_NSFileModificationDate,0);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f0)(uVar4,"setAttributes:ofItemAtPath:error:",uVar2,uVar3,0);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x20 bytes

void Utils::updateCreatedDate_toFile_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = __got::_objc_retain;
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",param_3,
                     *(undefined8 *)__got::_NSFileCreationDate,0);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f0)(uVar4,"setAttributes:ofItemAtPath:error:",uVar2,uVar3,0);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// Function Stack Size: 0x10 bytes

ID CustomOutlineView::stripeColor(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSColor,"controlAlternatingRowBackgroundColors");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"count");
  if (uVar2 < 2) {
    uVar3 = (*(code *)0x10002f0f0)
                      (0x3fee6c8f75536934,0x3fee6c54bcf0b6b7,0x3fee6c764adff823,0x3ff0000000000000,
                       &_OBJC_CLASS___NSColor,"colorWithCalibratedRed:green:blue:alpha:");
  }
  else {
    uVar3 = (*(code *)0x10002f0f0)(uVar1,"objectAtIndex:",1);
  }
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)__got::_objc_retain)(uVar3);
  uVar4 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSColorSpace,"genericRGBColorSpace");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)0x10002f0f0)(uVar3,"colorUsingColorSpace:",uVar4);
  lVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)0x10002f0f8)(uVar4);
  if (lVar6 == 0) {
    uVar4 = (*(code *)0x10002f0f0)(0x3fc999999999999a,uVar3,"colorWithAlphaComponent:");
  }
  else {
    dVar8 = (double)(*(code *)0x10002f0f0)(lVar6,"redComponent");
    dVar9 = (double)(*(code *)0x10002f0f0)(lVar6,"greenComponent");
    dVar10 = (double)(*(code *)0x10002f0f0)(lVar6,"blueComponent");
    uVar4 = (*(code *)0x10002f0f0)
                      ((dVar8 + -0.8) / 0.2,(dVar9 + -0.8) / 0.2,(dVar10 + -0.8) / 0.2,
                       &_OBJC_CLASS___NSColor,"colorWithCalibratedRed:green:blue:alpha:");
  }
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f8)(lVar6);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f8)(uVar3);
  IVar7 = __stubs::_objc_autoreleaseReturnValue(uVar4);
  return IVar7;
}



// Function Stack Size: 0x30 bytes

void CustomOutlineView::drawStripesInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  double dVar2;
  double in_XMM1_Qa;
  double local_38;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"stripeColor");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  dVar2 = (double)(*(code *)0x10002f0f0)(param_1,"rowHeight");
  (*(code *)0x10002f0f0)(param_1,"intercellSpacing");
  in_XMM1_Qa = in_XMM1_Qa + dVar2;
  local_38 = (double)((~(int)(param_3.field0_0x0.field1_0x8 / in_XMM1_Qa) & 1U) +
                     (int)(param_3.field0_0x0.field1_0x8 / in_XMM1_Qa)) * in_XMM1_Qa;
  (*(code *)0x10002f0f0)(uVar1,"set");
  if (local_38 < param_3.field1_0x10.field1_0x8 + param_3.field0_0x0.field1_0x8) {
    do {
      (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBezierPath,"fillRect:");
      local_38 = local_38 + in_XMM1_Qa + in_XMM1_Qa;
    } while (local_38 < param_3.field1_0x10.field1_0x8 + param_3.field0_0x0.field1_0x8);
  }
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x30 bytes

void CustomOutlineView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID local_20;
  class_t *local_18;
  
  (*(code *)0x10002f0f0)(param_1,"drawStripesInRect:");
  local_18 = &objc::class_t::CustomOutlineView;
  local_20 = param_1;
  __stubs::_objc_msgSendSuper2(&local_20,"drawRect:");
  return;
}



// Function Stack Size: 0x18 bytes

unsigned_long_long CustomOutlineView::draggingEntered_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  ID local_38;
  class_t *local_30;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)
                    (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = (*(code *)0x10002f0f0)(uVar3,"allowMoreOperations");
  (*(code *)0x10002f0f8)(uVar3);
  uVar4 = 0;
  if (cVar1 != '\0') {
    local_30 = &objc::class_t::CustomOutlineView;
    local_38 = param_1;
    uVar4 = __stubs::_objc_msgSendSuper2(&local_38,"draggingEntered:",uVar2);
  }
  (*(code *)0x10002f0f8)(uVar2);
  return uVar4;
}



// Function Stack Size: 0x18 bytes

unsigned_long_long CustomOutlineView::draggingUpdated_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  ID local_38;
  class_t *local_30;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)
                    (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = (*(code *)0x10002f0f0)(uVar3,"allowMoreOperations");
  (*(code *)0x10002f0f8)(uVar3);
  uVar4 = 0;
  if (cVar1 != '\0') {
    local_30 = &objc::class_t::CustomOutlineView;
    local_38 = param_1;
    uVar4 = __stubs::_objc_msgSendSuper2(&local_38,"draggingUpdated:",uVar2);
  }
  (*(code *)0x10002f0f8)(uVar2);
  return uVar4;
}



// Function Stack Size: 0x18 bytes

ID CustomOutlineView::namesOfPromisedFilesDroppedAtDestination_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_28;
  class_t *local_20;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lastDropDestination_);
  *(undefined8 *)(param_1 + lastDropDestination_) = uVar2;
  (*(code *)0x10002f0f8)(uVar1);
  local_20 = &objc::class_t::CustomOutlineView;
  local_28 = param_1;
  IVar3 = __stubs::_objc_msgSendSuper2(&local_28,"namesOfPromisedFilesDroppedAtDestination:",uVar2);
  return IVar3;
}



// Function Stack Size: 0x30 bytes

void CustomOutlineView::draggedImage_endedAt_operation_
               (ID param_1,SEL param_2,ID param_3,CGPoint param_4,unsigned_long_long param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::CustomOutlineView;
  local_40 = param_1;
  __stubs::_objc_msgSendSuper2(&local_40,"draggedImage:endedAt:operation:");
  lVar3 = lastDropDestination_;
  if (param_5 != 0) {
    if (param_5 == 0x20) {
      uVar2 = (*(code *)0x10002f0f0)(param_1,"delegate");
      lVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
      if (lVar3 != 0) {
        cVar1 = (*(code *)0x10002f0f0)
                          (lVar3,"respondsToSelector:","outlineView:itemsWereDraggedToTrash:");
        if (cVar1 != '\0') {
          uVar2 = (*(code *)0x10002f0f0)
                            (&_OBJC_CLASS___NSPasteboard,"pasteboardWithName:",
                             *(undefined8 *)__got::_NSDragPboard);
          uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
          (*(code *)0x10002f0f0)(lVar3,"outlineView:itemsWereDraggedToTrash:",param_1,uVar2);
          (*(code *)0x10002f0f8)(uVar2);
        }
      }
      (*(code *)0x10002f0f8)(lVar3);
    }
    else if (*(long *)(param_1 + lastDropDestination_) != 0) {
      uVar2 = (*(code *)0x10002f0f0)(param_1,"delegate");
      lVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
      if (lVar4 != 0) {
        cVar1 = (*(code *)0x10002f0f0)
                          (lVar4,"respondsToSelector:",
                           "outlineView:startPromiseFileCopy:dropDestination:");
        if (cVar1 != '\0') {
          uVar2 = (*(code *)0x10002f0f0)
                            (&_OBJC_CLASS___NSPasteboard,"pasteboardWithName:",
                             *(undefined8 *)__got::_NSDragPboard);
          uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
          (*(code *)0x10002f0f0)
                    (lVar4,"outlineView:startPromiseFileCopy:dropDestination:",param_1,uVar2,
                     *(undefined8 *)(param_1 + lVar3));
          (*(code *)0x10002f0f8)(uVar2);
        }
      }
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      (*(code *)0x10002f0f8)(uVar2);
      (*(code *)0x10002f0f8)(lVar4);
    }
  }
  return;
}



// Function Stack Size: 0x14 bytes

unsigned_long_long
CustomOutlineView::draggingSourceOperationMaskForLocal_(ID param_1,SEL param_2,char param_3)

{
  return 0x21;
}



// Function Stack Size: 0x10 bytes

ID CustomOutlineView::menu(ID param_1,SEL param_2)

{
  char cVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_30;
  class_t *local_28;
  
  uVar2 = (*(code *)0x10002f0f0)
                    (&objc::class_t::StatusWindowController,"sharedStatusWindowController");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = (*(code *)0x10002f0f0)(uVar2,"allowMoreOperations");
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_28 = &objc::class_t::CustomOutlineView;
    local_30 = param_1;
    uVar2 = __stubs::_objc_msgSendSuper2(&local_30,"menu");
    uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  }
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

void CustomOutlineView::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_storeStrong(param_1 + lastDropDestination_,0);
  return;
}



// Function Stack Size: 0x18 bytes

ID FirstRunWindowController::initWithDelegate_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID local_28;
  class_t *local_20;
  
  uVar1 = (*(code *)__got::_objc_retain)(param_3);
  local_20 = &objc::class_t::FirstRunWindowController;
  local_28 = param_1;
  IVar2 = __stubs::_objc_msgSendSuper2(&local_28,"initWithWindowNibName:",&cf_FirstRunWindow);
  if (IVar2 != 0) {
    __stubs::_objc_storeWeak(_delegate + IVar2,uVar1);
  }
  (*(code *)0x10002f0f8)(uVar1);
  return IVar2;
}



// Function Stack Size: 0x10 bytes

void FirstRunWindowController::windowDidLoad(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSImage,"imageNamed:",&cf_aft_welcome_bg);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSColor,"colorWithPatternImage:",uVar1);
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)0x10002f0f0)(uVar2,"setBackgroundColor:",uVar3);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar2,"orderFront:",0);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

ID FirstRunWindowController::buttonTitle(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_welcomeDoneButtonLabel,&cf___,0)
  ;
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(0x4032000000000000,&_OBJC_CLASS___NSFont,"systemFontOfSize:");
  uVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSParagraphStyle,"defaultParagraphStyle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar4 = (*(code *)0x10002f0f0)(uVar1,"mutableCopy");
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f0)(uVar4,"setAlignment:",2);
  uVar1 = *(undefined8 *)__got::_NSFontAttributeName;
  uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSColor,"whiteColor");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
  uVar1 = (*(code *)0x10002f0f0)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar3,uVar1,uVar5,
                     *(undefined8 *)__got::_NSForegroundColorAttributeName,uVar4,
                     *(undefined8 *)__got::_NSParagraphStyleAttributeName,0);
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f8)(uVar5);
  uVar5 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSAttributedString,"alloc");
  uVar5 = (*(code *)0x10002f0f0)(uVar5,"initWithString:attributes:",uVar2,uVar1);
  (*(code *)0x10002f0f8)(uVar1);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f8)(uVar3);
  (*(code *)0x10002f0f8)(uVar2);
  IVar6 = __stubs::_objc_autoreleaseReturnValue(uVar5);
  return IVar6;
}



// Function Stack Size: 0x18 bytes

void FirstRunWindowController::windowWillClose_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"delegate");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"firstRunWindowControllerWindowWillClose:",param_1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

ID FirstRunWindowController::welcomeTitleText(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_welcomeTitleText,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x10 bytes

ID FirstRunWindowController::welcomeBodyText(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)0x10002f0f0)
                    (uVar1,"localizedStringForKey:value:table:",&cf_welcomeBodyText,&cf___,0);
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f8)(uVar1);
  IVar3 = __stubs::_objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}



// Function Stack Size: 0x18 bytes

void FirstRunWindowController::closeButtonClicked_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"window");
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)0x10002f0f0)(uVar1,"close");
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// Function Stack Size: 0x10 bytes

ID FirstRunWindowController::delegate(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = __stubs::_objc_loadWeakRetained(param_1 + _delegate);
  IVar2 = __stubs::_objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// Function Stack Size: 0x18 bytes

void FirstRunWindowController::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_storeWeak(param_1 + _delegate,param_3);
  return;
}



// Function Stack Size: 0x10 bytes

void FirstRunWindowController::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_destroyWeak(param_1 + _delegate);
  return;
}



// Function Stack Size: 0x44 bytes

ID BorderlessWindow::initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,char param_6)

{
  ID IVar1;
  undefined8 in_R9;
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::BorderlessWindow;
  local_20 = param_1;
  IVar1 = __stubs::_objc_msgSendSuper2
                    (&local_20,"initWithContentRect:styleMask:backing:defer:",0,2,0,in_R9,
                     param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  if (IVar1 != 0) {
    (*(code *)0x10002f0f0)(IVar1,"setMovableByWindowBackground:",1);
  }
  return IVar1;
}



// Function Stack Size: 0x10 bytes

char BorderlessWindow::canBecomeKeyWindow(ID param_1,SEL param_2)

{
  return '\x01';
}



// Function Stack Size: 0x10 bytes

void RecessedButtonMatrix::awakeFromNib(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"alloc");
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"init");
  uVar1 = *(undefined8 *)(param_1 + buttons_);
  *(undefined8 *)(param_1 + buttons_) = uVar2;
  (*(code *)0x10002f0f8)(uVar1);
  uVar1 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSMutableArray,"alloc");
  uVar2 = (*(code *)0x10002f0f0)(uVar1,"init");
  uVar1 = *(undefined8 *)(param_1 + identifiers_);
  *(undefined8 *)(param_1 + identifiers_) = uVar2;
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar1);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x10 bytes

void RecessedButtonMatrix::performLayout(ID param_1,SEL param_2)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  void *pvVar8;
  size_t sVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double local_b8;
  double local_98;
  undefined local_58 [16];
  undefined local_48 [16];
  
  sVar2 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + buttons_),"count");
  if (sVar2 != 0) {
    pvVar3 = __stubs::_calloc(sVar2,0x10);
    uVar1 = sVar2 * 8 - 8;
    local_98 = ((double)(uVar1 & 0xffffffff | 0x4330000000000000) - 4503599627370496.0) +
               (SUB168(CONCAT412(0x45300000,CONCAT48(SUB124(ZEXT812(uVar1) >> 0x20,0),uVar1)) >>
                       0x40,0) - 1.934281311383407e+25);
    local_b8 = 0.0;
    sVar9 = 0;
    lVar10 = 8;
    do {
      uVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + buttons_),"objectAtIndex:",sVar9);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      uVar5 = (*(code *)0x10002f0f0)(uVar4,"cell");
      uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
      dVar11 = (double)(*(code *)0x10002f0f0)(uVar5,"cellSize");
      *(double *)((long)pvVar3 + lVar10 + -8) = dVar11;
      (*(code *)0x10002f0f8)(uVar5);
      lVar6 = (*(code *)0x10002f0f0)(uVar4,"state");
      if ((lVar6 == 1) || (dVar11 < 40.0)) {
        *(undefined *)((long)pvVar3 + lVar10) = 0;
      }
      else {
        *(undefined *)((long)pvVar3 + lVar10) = 1;
        local_b8 = local_b8 + dVar11 + -40.0;
        dVar11 = 40.0;
      }
      local_98 = local_98 + dVar11;
      (*(code *)0x10002f0f8)(uVar4);
      sVar9 = sVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while (sVar2 != sVar9);
    if (param_1 == 0) {
      local_58 = ZEXT816(0);
      local_48._0_8_ = 0.0;
      local_48 = local_58;
    }
    else {
      __stubs::_objc_msgSend_stret(local_58,param_1,"frame");
    }
    local_48._0_8_ = (local_98 + local_b8) - local_48._0_8_;
    if (0.0 < local_48._0_8_) {
      puVar7 = (undefined *)((long)pvVar3 + 9);
      sVar9 = sVar2;
      do {
        if (puVar7[-1] != '\0') {
          *puVar7 = 1;
          dVar12 = (*(double *)(puVar7 + -9) + -40.0) * ((local_b8 - local_48._0_8_) / local_b8);
          dVar11 = 40.0;
          if (0.0 <= dVar12) {
            dVar11 = dVar12 + 40.0;
          }
          *(double *)(puVar7 + -9) = dVar11;
        }
        puVar7 = puVar7 + 0x10;
        sVar9 = sVar9 - 1;
      } while (sVar9 != 0);
    }
    sVar9 = 0;
    pvVar8 = pvVar3;
    do {
      uVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + buttons_),"objectAtIndex:",sVar9);
      uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)0x10002f0f0)(uVar4,"setFrame:");
      if (*(char *)((long)pvVar8 + 9) == '\0') {
        (*(code *)0x10002f0f0)(uVar4,"setToolTip:",0);
      }
      else {
        uVar5 = (*(code *)0x10002f0f0)(uVar4,"title");
        uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)0x10002f0f0)(uVar4,"setToolTip:",uVar5);
        (*(code *)0x10002f0f8)(uVar5);
      }
      (*(code *)0x10002f0f8)(uVar4);
      sVar9 = sVar9 + 1;
      pvVar8 = (void *)((long)pvVar8 + 0x10);
    } while (sVar2 != sVar9);
    __stubs::_free(pvVar3);
  }
  return;
}



// Function Stack Size: 0x20 bytes

void RecessedButtonMatrix::setFrameSize_(ID param_1,SEL param_2,CGSize param_3)

{
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::RecessedButtonMatrix;
  local_20 = param_1;
  __stubs::_objc_msgSendSuper2(&local_20,"setFrameSize:");
  (*(code *)0x10002f0f0)(param_1,"performLayout");
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void RecessedButtonMatrix::buttonPressed_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  plVar7 = (long *)__got::___stack_chk_guard;
  local_38 = *(long *)__got::___stack_chk_guard;
  lVar2 = (*(code *)__got::_objc_retain)(param_3);
  lVar3 = (*(code *)0x10002f0f0)(lVar2,"state");
  if (lVar3 == 0) {
    (*(code *)0x10002f0f0)(lVar2,"setState:",1);
  }
  else {
    lVar9 = delegate_ + param_1;
    lVar3 = __stubs::_objc_loadWeakRetained(lVar9);
    (*(code *)0x10002f0f8)(lVar3);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + identifiers_);
      uVar4 = (*(code *)0x10002f0f0)
                        (*(undefined8 *)(param_1 + buttons_),"indexOfObjectIdenticalTo:",lVar2);
      uVar5 = (*(code *)0x10002f0f0)(uVar5,"objectAtIndex:",uVar4);
      uVar5 = __stubs::_objc_retainAutoreleasedReturnValue(uVar5);
      uVar4 = __stubs::_objc_loadWeakRetained(lVar9);
      uVar1 = (*(code *)0x10002f0f0)(uVar5,"unsignedIntValue");
      (*(code *)0x10002f0f0)(uVar4,"matrixButtonPressed:",uVar1);
      (*(code *)0x10002f0f8)(uVar4);
      (*(code *)0x10002f0f8)(uVar5);
    }
    local_c8 = ZEXT816(0);
    local_d8 = ZEXT816(0);
    local_e8 = ZEXT816(0);
    local_f8 = ZEXT816(0);
    uVar5 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + buttons_));
    uVar6 = (*(code *)0x10002f0f0)
                      (uVar5,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
    if (uVar6 != 0) {
      lVar3 = *local_e8._0_8_;
      do {
        uVar8 = 0;
        do {
          if (*local_e8._0_8_ != lVar3) {
            __stubs::_objc_enumerationMutation(uVar5);
          }
          lVar9 = *(long *)(local_f8._8_8_ + uVar8 * 8);
          if (lVar9 != lVar2) {
            (*(code *)0x10002f0f0)(lVar9,"setState:",0);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
        uVar6 = (*(code *)0x10002f0f0)
                          (uVar5,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10
                          );
      } while (uVar6 != 0);
    }
    (*(code *)0x10002f0f8)(uVar5);
    (*(code *)0x10002f0f0)(param_1,"performLayout");
    plVar7 = (long *)__got::___stack_chk_guard;
  }
  (*(code *)0x10002f0f8)(lVar2);
  if (*plVar7 == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



void RecessedButtonMatrix::addButton_identifier_
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = (*(code *)__got::_objc_retain)(param_3);
  uVar3 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSButton,"alloc");
  uVar3 = (*(code *)0x10002f0f0)(uVar3,"init");
  (*(code *)0x10002f0f0)(uVar3,"setTitle:",uVar2);
  (*(code *)0x10002f0f0)(uVar3,"setButtonType:",1);
  (*(code *)0x10002f0f0)(uVar3,"setBezelStyle:",0xd);
  (*(code *)0x10002f0f0)(uVar3,"setBordered:",1);
  (*(code *)0x10002f0f0)(uVar3,"setShowsBorderOnlyWhileMouseInside:",1);
  uVar4 = (*(code *)0x10002f0f0)(0x4028000000000000,&_OBJC_CLASS___NSFont,"boldSystemFontOfSize:");
  uVar4 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)0x10002f0f0)(uVar3,"setFont:",uVar4);
  (*(code *)0x10002f0f8)(uVar4);
  (*(code *)0x10002f0f0)(uVar3,"setToolTip:",uVar2);
  (*(code *)0x10002f0f8)(uVar2);
  uVar2 = (*(code *)0x10002f0f0)(uVar3,"cell");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)0x10002f0f0)(uVar2,"setControlSize:",1);
  (*(code *)0x10002f0f0)(uVar2,"setTarget:",param_1);
  (*(code *)0x10002f0f0)(uVar2,"setAction:","buttonPressed:");
  (*(code *)0x10002f0f0)(uVar2,"setLineBreakMode:",4);
  lVar1 = buttons_;
  lVar5 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + buttons_),"count");
  if (lVar5 == 0) {
    (*(code *)0x10002f0f0)(uVar3,"setState:",1);
  }
  (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + lVar1),"addObject:",uVar3);
  uVar4 = *(undefined8 *)(param_1 + identifiers_);
  uVar6 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:",param_4);
  uVar6 = __stubs::_objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)0x10002f0f0)(uVar4,"addObject:",uVar6);
  (*(code *)0x10002f0f8)(uVar6);
  (*(code *)0x10002f0f0)(param_1,"addSubview:",uVar3);
  (*(code *)0x10002f0f8)(uVar2);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f8)(uVar3);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// Function Stack Size: 0x18 bytes

void RecessedButtonMatrix::selectButtonWithIdentifier_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [128];
  long local_38;
  
  plVar7 = (long *)__got::___stack_chk_guard;
  local_38 = *(long *)__got::___stack_chk_guard;
  uVar2 = (*(code *)0x10002f0f0)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:");
  uVar2 = __stubs::_objc_retainAutoreleasedReturnValue(uVar2);
  lVar3 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + identifiers_),"indexOfObject:",uVar2);
  lVar1 = buttons_;
  if (lVar3 != 0x7fffffffffffffff) {
    uVar4 = (*(code *)0x10002f0f0)(*(undefined8 *)(param_1 + buttons_),"objectAtIndex:",lVar3);
    lVar3 = __stubs::_objc_retainAutoreleasedReturnValue(uVar4);
    lVar5 = (*(code *)0x10002f0f0)(lVar3,"state");
    if (lVar5 != 1) {
      (*(code *)0x10002f0f0)(lVar3,"setState:",1);
      local_c8 = ZEXT816(0);
      local_d8 = ZEXT816(0);
      local_e8 = ZEXT816(0);
      local_f8 = ZEXT816(0);
      uVar4 = (*(code *)__got::_objc_retain)(*(undefined8 *)(param_1 + lVar1));
      uVar6 = (*(code *)0x10002f0f0)
                        (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,0x10);
      if (uVar6 != 0) {
        lVar1 = *local_e8._0_8_;
        do {
          uVar8 = 0;
          do {
            if (*local_e8._0_8_ != lVar1) {
              __stubs::_objc_enumerationMutation(uVar4);
            }
            lVar5 = *(long *)(local_f8._8_8_ + uVar8 * 8);
            if (lVar3 != lVar5) {
              (*(code *)0x10002f0f0)(lVar5,"setState:",0);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar6);
          uVar6 = (*(code *)0x10002f0f0)
                            (uVar4,"countByEnumeratingWithState:objects:count:",local_f8,local_b8,
                             0x10);
        } while (uVar6 != 0);
      }
      (*(code *)0x10002f0f8)(uVar4);
      (*(code *)0x10002f0f0)(param_1,"performLayout");
      plVar7 = (long *)__got::___stack_chk_guard;
    }
    (*(code *)0x10002f0f8)(lVar3);
  }
  (*(code *)0x10002f0f8)(uVar2);
  if (*plVar7 == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



void RecessedButtonMatrix::delegate(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = __stubs::_objc_loadWeakRetained(param_1 + delegate_);
  __stubs::_objc_autoreleaseReturnValue(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void RecessedButtonMatrix::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  __stubs::_objc_storeWeak(param_1 + delegate_,param_3);
  return;
}



// Function Stack Size: 0x10 bytes

void RecessedButtonMatrix::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_destroyWeak(delegate_ + param_1);
  __stubs::_objc_storeStrong(identifiers_ + param_1,0);
  __stubs::_objc_storeStrong(param_1 + buttons_,0);
  return;
}


/*
Unable to decompile 'Cache'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Cache'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile '~Cache'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile '~Cache'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile '~Cache'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Set'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Get'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'List'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Delete'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Rename'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'dump'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Dump'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/


// WARNING: Could not reconcile some variable overlaps
// std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, CacheNode,
// std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::operator[](std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const&)

map_std__basic_string_char_std__char_traits_char__std__allocator_char___CacheNode_std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
* __thiscall
std::
map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::operator__(map_std__basic_string_char_std__char_traits_char__std__allocator_char___CacheNode_std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
             *this,basic_string *param_1)

{
  int *piVar1;
  int iVar2;
  map_std__basic_string_char_std__char_traits_char__std__allocator_char___CacheNode_std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *pmVar3;
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined8 local_d8;
  _Rb_tree_node *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  local_80 [16];
  _Rb_tree_node *local_70;
  undefined local_30 [8];
  undefined local_28 [8];
  
  pmVar3 = (map_std__basic_string_char_std__char_traits_char__std__allocator_char___CacheNode_std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *)_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
              ::lower_bound((_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                             *)this,param_1);
  if (pmVar3 != this + 8) {
    iVar2 = __stubs::__ZNKSs7compareERKSs(param_1,pmVar3 + 0x20);
    if (-1 < iVar2) goto LAB_100014a48;
  }
  local_e8 = ZEXT816(0) & (undefined  [16])0xffffff0000000000;
  local_f8 = ZEXT816(0);
  local_108 = ZEXT816(__got::__ZNSs4_Rep20_S_empty_rep_storageE + 0x18);
  local_c8 = &local_d8;
  local_b8 = 0;
  local_d0 = (_Rb_tree_node *)0x0;
  local_d8 = 0;
  local_c0 = local_c8;
  pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>::pair
            ((pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode_
              *)&local_b0,param_1,(CacheNode *)local_108);
  pmVar3 = (map_std__basic_string_char_std__char_traits_char__std__allocator_char___CacheNode_std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *)_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
              ::_M_insert_unique((_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                                  *)this,(_Rb_tree_iterator)pmVar3,(pair *)&local_b0);
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
  ::_M_erase(local_80,local_70);
  if ((undefined *)(local_a8 + -0x18) != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar1 = (int *)(local_a8 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (iVar2 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_a8 + -0x18),local_30);
    }
  }
  if ((undefined *)(local_b0 + -0x18) != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar1 = (int *)(local_b0 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (iVar2 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_b0 + -0x18),local_30);
    }
  }
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
  ::_M_erase((_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
              *)(local_e8 + 8),local_d0);
  if ((undefined *)(local_108._0_8_ + -0x18) != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar1 = (int *)(local_108._0_8_ + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (iVar2 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_108._0_8_ + -0x18),local_28);
    }
  }
LAB_100014a48:
  return pmVar3 + 0x28;
}



// std::vector<Resource, std::allocator<Resource> >::push_back(Resource const&)

void __thiscall
std::vector<Resource,std::allocator<Resource>>::push_back
          (vector_Resource_std__allocator_Resource__ *this,Resource *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != *(long *)(this + 0x10)) {
    lVar3 = 0;
    if (lVar1 != 0) {
      __stubs::__ZNSsC1ERKSs(lVar1,param_1);
      *(Resource *)(lVar1 + 0x24) = param_1[0x24];
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(lVar1 + 8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar3 + 0x28;
    return;
  }
  _M_insert_aux(this,(__normal_iterator)lVar1,param_1);
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::erase(std::basic_string<char, std::char_traits<char>, std::allocator<char>
// > const&)

long __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::erase(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
        *this,basic_string *param_1)

{
  long lVar1;
  _Rb_tree_iterator _Var2;
  _Rb_tree_iterator _Var3;
  
  _Var2 = lower_bound(this,param_1);
  _Var3 = upper_bound(this,param_1);
  lVar1 = *(long *)(this + 0x28);
  erase(this,_Var2,_Var3);
  return lVar1 - *(long *)(this + 0x28);
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::erase(std::_Rb_tree_iterator<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> >,
// std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >)

void __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::erase(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
        *this,_Rb_tree_iterator param_1,_Rb_tree_iterator param_2)

{
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var1;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var2;
  _Rb_tree_node *p_Var3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var4;
  
  p_Var4 = (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *)CONCAT44(in_register_00000034,param_1);
  p_Var1 = (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *)CONCAT44(in_register_00000014,param_2);
  if ((*(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
         **)(this + 0x18) == p_Var4) && (this + 8 == p_Var1)) {
    _M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
      **)(this + 0x18) = p_Var1;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
      **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (p_Var4 != p_Var1) {
      p_Var2 = (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                *)__stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(p_Var4);
      p_Var3 = (_Rb_tree_node *)
               __stubs::__ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_
                         (p_Var4,this + 8);
      _M_destroy_node(this,p_Var3);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      p_Var4 = p_Var2;
    }
  }
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_destroy_node(std::_Rb_tree_node<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> >*)

void __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_destroy_node(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                  *this,_Rb_tree_node *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined local_38 [24];
  undefined local_20 [8];
  
  _M_erase((_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *)(param_1 + 0x50),*(_Rb_tree_node **)(param_1 + 0x60));
  puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)(param_1 + 0x28) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_20);
    }
  }
  puVar1 = (undefined *)(*(long *)(param_1 + 0x20) + -0x18);
  if (puVar1 != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
    LOCK();
    piVar2 = (int *)(*(long *)(param_1 + 0x20) + -8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    if (iVar3 < 1) {
      __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar1,local_38);
    }
  }
  __stubs::__ZdlPv(param_1);
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> >*)

void __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_erase(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
      p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
      _M_destroy_node(this,param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node *)0x0);
  }
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::lower_bound(std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const&)

_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
* __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::lower_bound(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
              *this,basic_string *param_1)

{
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var1;
  int iVar2;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var3;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var4;
  
  p_Var1 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
             **)(this + 0x10);
  p_Var4 = this + 8;
  while (p_Var3 = p_Var1,
        p_Var3 != (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                   *)0x0) {
    iVar2 = __stubs::__ZNKSs7compareERKSs(p_Var3 + 0x20,param_1);
    if (iVar2 < 0) {
      p_Var1 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 **)(p_Var3 + 0x18);
    }
    else {
      p_Var1 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 **)(p_Var3 + 0x10);
      p_Var4 = p_Var3;
    }
  }
  return p_Var4;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::upper_bound(std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const&)

_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
* __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::upper_bound(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
              *this,basic_string *param_1)

{
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var1;
  int iVar2;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var3;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var4;
  
  p_Var1 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
             **)(this + 0x10);
  p_Var4 = this + 8;
  while (p_Var3 = p_Var1,
        p_Var3 != (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                   *)0x0) {
    iVar2 = __stubs::__ZNKSs7compareERKSs(param_1,p_Var3 + 0x20);
    if (iVar2 < 0) {
      p_Var1 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 **)(p_Var3 + 0x10);
      p_Var4 = p_Var3;
    }
    else {
      p_Var1 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 **)(p_Var3 + 0x18);
    }
  }
  return p_Var4;
}



// std::vector<Resource, std::allocator<Resource>
// >::_M_insert_aux(__gnu_cxx::__normal_iterator<Resource*, std::vector<Resource,
// std::allocator<Resource> > >, Resource const&)

void __thiscall
std::vector<Resource,std::allocator<Resource>>::_M_insert_aux
          (vector_Resource_std__allocator_Resource__ *this,__normal_iterator param_1,
          Resource *param_2)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 in_register_00000034;
  long *unaff_R12;
  long *plVar14;
  long *local_a0;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  Resource local_4c;
  undefined local_48 [16];
  undefined local_38 [8];
  
  plVar13 = (long *)CONCAT44(in_register_00000034,param_1);
  lVar11 = *(long *)(this + 8);
  if (lVar11 != *(long *)(this + 0x10)) {
    lVar8 = 0;
    if (lVar11 != 0) {
      __stubs::__ZNSsC1ERKSs(lVar11,lVar11 + -0x28);
      *(undefined *)(lVar11 + 0x24) = *(undefined *)(lVar11 + -4);
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar11 + -8);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + -0x10);
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + -0x18);
      *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar11 + -0x20);
      lVar8 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar8 + 0x28;
    __stubs::__ZNSsC1ERKSs(&local_70,param_2);
    local_4c = param_2[0x24];
    local_50 = *(undefined4 *)(param_2 + 0x20);
    local_58 = *(long *)(param_2 + 0x18);
    local_68 = *(long *)(param_2 + 8);
    local_60 = *(long *)(param_2 + 0x10);
    __copy_backward<false,std::random_access_iterator_tag>::__copy_b_Resource__Resource__
              ((Resource *)plVar13,(Resource *)(*(long *)(this + 8) + -0x50),
               (Resource *)(*(long *)(this + 8) + -0x28));
    __stubs::__ZNSs6assignERKSs(plVar13,&local_70);
    *(Resource *)((long)plVar13 + 0x24) = local_4c;
    *(undefined4 *)(plVar13 + 4) = local_50;
    plVar13[3] = local_58;
    plVar13[2] = local_60;
    plVar13[1] = local_68;
    if ((undefined *)(local_70 + -0x18) == __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
      return;
    }
    LOCK();
    piVar1 = (int *)(local_70 + -8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (0 < iVar5) {
      return;
    }
    __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_70 + -0x18),local_48);
    return;
  }
  lVar11 = lVar11 - *(long *)this >> 3;
  uVar7 = lVar11 * -0x3333333333333333;
  uVar10 = 1;
  if (uVar7 != 0) {
    if (uVar7 == 0x666666666666666) goto LAB_1000154ba;
    uVar10 = lVar11 * -0x6666666666666666;
  }
  if (uVar10 < uVar7) {
    uVar10 = 0x666666666666666;
  }
  else if (0x666666666666666 < uVar10) {
    do {
      uVar9 = __stubs::__ZSt17__throw_bad_allocv();
      uVar9 = ___clang_call_terminate(uVar9);
      __stubs::___cxa_begin_catch(uVar9);
      puVar6 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
      if (local_a0 != unaff_R12) {
        plVar13 = local_a0;
        do {
          puVar2 = (undefined *)(*plVar13 + -0x18);
          if (puVar2 != puVar6) {
            LOCK();
            piVar1 = (int *)(*plVar13 + -8);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            if (iVar5 < 1) {
              __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
            }
          }
          plVar13 = plVar13 + 5;
        } while (unaff_R12 != plVar13);
      }
      if (local_a0 != (long *)0x0) {
        __stubs::__ZdlPv();
      }
      __stubs::___cxa_rethrow();
LAB_1000154ba:
      __stubs::__ZSt20__throw_length_errorPKc("vector::_M_insert_aux");
    } while( true );
  }
  lVar8 = __stubs::__Znwm(uVar10 * 0x28);
  lVar11 = *(long *)this;
  if (lVar11 - (long)plVar13 == 0) {
    lVar12 = 0;
    lVar11 = lVar8;
    if (lVar8 == 0) goto LAB_100015267;
  }
  else {
    lVar12 = 8;
    do {
      if (lVar8 + lVar12 != 8) {
        __stubs::__ZNSsC1ERKSs(lVar8 + -8 + lVar12,lVar11 + -8 + lVar12);
        *(undefined *)(lVar8 + 0x1c + lVar12) = *(undefined *)(lVar11 + 0x1c + lVar12);
        *(undefined4 *)(lVar8 + 0x18 + lVar12) = *(undefined4 *)(lVar11 + 0x18 + lVar12);
        *(undefined8 *)(lVar8 + 0x10 + lVar12) = *(undefined8 *)(lVar11 + 0x10 + lVar12);
        uVar9 = *(undefined8 *)(lVar11 + lVar12);
        *(undefined8 *)(lVar8 + 8 + lVar12) = *(undefined8 *)(lVar11 + 8 + lVar12);
        *(undefined8 *)(lVar8 + lVar12) = uVar9;
      }
      lVar4 = (lVar11 - (long)plVar13) + 0x28 + lVar12;
      lVar12 = lVar12 + 0x28;
    } while (lVar4 != 8);
    lVar11 = lVar8 + -8 + lVar12;
  }
  lVar12 = lVar11;
  __stubs::__ZNSsC1ERKSs(lVar12,param_2);
  *(Resource *)(lVar12 + 0x24) = param_2[0x24];
  *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar12 + 8) = uVar9;
LAB_100015267:
  lVar11 = lVar12 + 0x28;
  plVar14 = *(long **)(this + 8);
  if (plVar14 != plVar13) {
    lVar11 = 0;
    do {
      lVar4 = lVar12 + 0x28 + lVar11;
      lVar3 = (long)plVar13 + lVar11;
      __stubs::__ZNSsC1ERKSs(lVar4,lVar3);
      *(undefined *)(lVar4 + 0x24) = *(undefined *)(lVar3 + 0x24);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      uVar9 = *(undefined8 *)(lVar3 + 8);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      *(undefined8 *)(lVar4 + 8) = uVar9;
      lVar11 = lVar11 + 0x28;
    } while ((long *)(lVar3 + 0x28) != plVar14);
    plVar13 = *(long **)(this + 8);
    lVar11 = lVar12 + 0x28 + lVar11;
  }
  puVar6 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  plVar14 = *(long **)this;
  if (plVar14 != plVar13) {
    do {
      puVar2 = (undefined *)(*plVar14 + -0x18);
      if (puVar2 != puVar6) {
        LOCK();
        piVar1 = (int *)(*plVar14 + -8);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar5 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
        }
      }
      plVar14 = plVar14 + 5;
    } while (plVar13 != plVar14);
    plVar13 = *(long **)this;
  }
  if (plVar13 != (long *)0x0) {
    __stubs::__ZdlPv(plVar13);
  }
  *(long *)this = lVar8;
  *(long *)(this + 8) = lVar11;
  *(ulong *)(this + 0x10) = lVar8 + uVar10 * 0x28;
  return;
}



// Resource* std::__copy_backward<false, std::random_access_iterator_tag>::__copy_b<Resource*,
// Resource*>(Resource*, Resource*, Resource*)

Resource *
std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b_Resource__Resource__
          (Resource *param_1,Resource *param_2,Resource *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Resource *pRVar3;
  long lVar4;
  ulong uVar5;
  Resource *pRVar7;
  long lVar6;
  
  if (0 < (long)param_2 - (long)param_1) {
    lVar2 = (long)param_2 - (long)param_1 >> 3;
    lVar4 = lVar2 * -0x3333333333333333;
    lVar2 = lVar2 * 0x3333333333333333;
    lVar6 = -1;
    if (lVar4 != 2 && -3 < lVar2) {
      lVar6 = lVar2;
    }
    uVar5 = lVar6 + lVar4;
    pRVar3 = param_3 + -0x28;
    pRVar7 = param_2 + -0x28;
    do {
      __stubs::__ZNSs6assignERKSs(pRVar3,pRVar7);
      pRVar3[0x24] = pRVar7[0x24];
      *(undefined4 *)(pRVar3 + 0x20) = *(undefined4 *)(pRVar7 + 0x20);
      *(undefined8 *)(pRVar3 + 0x18) = *(undefined8 *)(pRVar7 + 0x18);
      uVar1 = *(undefined8 *)(pRVar7 + 8);
      *(undefined8 *)(pRVar3 + 0x10) = *(undefined8 *)(pRVar7 + 0x10);
      *(undefined8 *)(pRVar3 + 8) = uVar1;
      lVar4 = lVar4 + -1;
      pRVar3 = pRVar3 + -0x28;
      pRVar7 = pRVar7 + -0x28;
    } while (0 < lVar4);
    param_3 = param_3 + ~uVar5 * 0x28;
  }
  return param_3;
}



// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>::pair(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&,
// CacheNode const&)

void __thiscall
std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>::pair
          (pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode_
           *this,basic_string *param_1,CacheNode *param_2)

{
  undefined8 uVar1;
  
  __stubs::__ZNSsC1ERKSs();
  __stubs::__ZNSsC1ERKSs(this + 8,param_2);
  *(CacheNode *)(this + 0x2c) = param_2[0x24];
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x10) = uVar1;
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
  ::_Rb_tree((_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
              *)(this + 0x30),(_Rb_tree *)(param_2 + 0x28));
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_insert_unique(std::_Rb_tree_iterator<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode> const&)

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_insert_unique(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                   *this,_Rb_tree_iterator param_1,pair *param_2)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  undefined4 in_register_00000034;
  _Rb_tree_node_base *p_Var4;
  
  p_Var3 = (_Rb_tree_node_base *)CONCAT44(in_register_00000034,param_1);
  if ((_Rb_tree_node_base *)(this + 8) != p_Var3) {
    iVar1 = __stubs::__ZNKSs7compareERKSs(param_2,p_Var3 + 0x20);
    p_Var2 = p_Var3;
    if (iVar1 < 0) {
      p_Var4 = p_Var3;
      if (*(_Rb_tree_node_base **)(this + 0x18) != p_Var3) {
        p_Var3 = (_Rb_tree_node_base *)
                 __stubs::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(p_Var3);
        iVar1 = __stubs::__ZNKSs7compareERKSs(p_Var3 + 0x20);
        if (-1 < iVar1) goto LAB_10001572d;
        if (*(long *)(p_Var3 + 0x18) == 0) {
          p_Var2 = p_Var3;
          p_Var4 = (_Rb_tree_node_base *)0x0;
        }
      }
    }
    else {
      iVar1 = __stubs::__ZNKSs7compareERKSs(p_Var3 + 0x20);
      if (-1 < iVar1) {
        return p_Var3;
      }
      if (*(_Rb_tree_node_base **)(this + 0x20) != p_Var3) {
        p_Var2 = (_Rb_tree_node_base *)
                 __stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(p_Var3);
        iVar1 = __stubs::__ZNKSs7compareERKSs(param_2);
        if (-1 < iVar1) goto LAB_10001572d;
        p_Var4 = p_Var2;
        if (*(long *)(p_Var3 + 0x18) != 0) goto LAB_10001576f;
      }
      p_Var2 = p_Var3;
      p_Var4 = (_Rb_tree_node_base *)0x0;
    }
LAB_10001576f:
    p_Var3 = (_Rb_tree_node_base *)_M_insert(this,p_Var4,p_Var2,param_2);
    return p_Var3;
  }
  if (*(long *)(this + 0x28) != 0) {
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x20);
    iVar1 = __stubs::__ZNKSs7compareERKSs(p_Var2 + 0x20);
    if (iVar1 < 0) {
      p_Var4 = (_Rb_tree_node_base *)0x0;
      goto LAB_10001576f;
    }
  }
LAB_10001572d:
  p_Var3 = (_Rb_tree_node_base *)_M_insert_unique(this,param_2);
  return p_Var3;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_insert(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode> const&)

undefined8 __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_insert(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && ((_Rb_tree_node_base *)(this + 8) != param_2)) {
    uVar1 = __stubs::__ZNKSs7compareERKSs(param_3,param_2 + 0x20);
    uVar1 = uVar1 >> 0x1f;
  }
  uVar2 = _M_create_node(this,param_3);
  __stubs::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
            (uVar1,uVar2,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return uVar2;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_insert_unique(std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> const&)

undefined  [16] __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_insert_unique(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                   *this,pair *param_1)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base **pp_Var3;
  undefined8 uVar4;
  _Rb_tree_node_base *p_Var5;
  undefined auVar6 [16];
  
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var5 = (_Rb_tree_node_base *)(this + 8);
LAB_100015844:
    if (p_Var5 != *(_Rb_tree_node_base **)(this + 0x18)) {
      p_Var2 = (_Rb_tree_node_base *)
               __stubs::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(p_Var5);
      goto LAB_100015855;
    }
  }
  else {
    do {
      p_Var5 = p_Var2;
      iVar1 = __stubs::__ZNKSs7compareERKSs(param_1);
      pp_Var3 = (_Rb_tree_node_base **)(p_Var5 + 0x18);
      if (iVar1 < 0) {
        pp_Var3 = (_Rb_tree_node_base **)(p_Var5 + 0x10);
      }
      p_Var2 = *pp_Var3;
    } while (*pp_Var3 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var5;
    if (iVar1 < 0) goto LAB_100015844;
LAB_100015855:
    iVar1 = __stubs::__ZNKSs7compareERKSs(p_Var2 + 0x20);
    if (-1 < iVar1) {
      uVar4 = 0;
      goto LAB_10001587f;
    }
  }
  auVar6 = _M_insert(this,(_Rb_tree_node_base *)0x0,p_Var5,param_1);
  p_Var2 = SUB168(auVar6,0);
  uVar4 = CONCAT71(SUB167(auVar6 >> 0x48,0),1);
LAB_10001587f:
  return CONCAT88(uVar4,p_Var2);
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_create_node(std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> const&)

long __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_create_node(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 *this,pair *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = __stubs::__Znwm(0x80);
  __stubs::__ZNSsC1ERKSs(lVar2 + 0x20,param_1);
  __stubs::__ZNSsC1ERKSs(lVar2 + 0x28,param_1 + 8);
  *(pair *)(lVar2 + 0x4c) = param_1[0x2c];
  *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  _Rb_tree((_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *)(lVar2 + 0x50),(_Rb_tree *)(param_1 + 0x30));
  return lVar2;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::find(std::basic_string<char, std::char_traits<char>, std::allocator<char>
// > const&)

_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
* __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::find(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
       *this,basic_string *param_1)

{
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var1;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var2;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var3;
  int iVar4;
  _Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
  *p_Var5;
  
  p_Var5 = this + 8;
  p_Var3 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
             **)(this + 0x10);
  p_Var2 = p_Var5;
  while (p_Var1 = p_Var3,
        p_Var1 != (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                   *)0x0) {
    iVar4 = __stubs::__ZNKSs7compareERKSs(p_Var1 + 0x20,param_1);
    if (iVar4 < 0) {
      p_Var3 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 **)(p_Var1 + 0x18);
    }
    else {
      p_Var3 = *(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
                 **)(p_Var1 + 0x10);
      p_Var2 = p_Var1;
    }
  }
  if ((p_Var2 != p_Var5) &&
     (iVar4 = __stubs::__ZNKSs7compareERKSs(param_1,p_Var2 + 0x20), -1 < iVar4)) {
    p_Var5 = p_Var2;
  }
  return p_Var5;
}



// std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >
// >::~vector()

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
::_vector(vector_std__basic_string_char_std__char_traits_char__std__allocator_char___std__allocator_std__basic_string_char_std__char_traits_char__std__allocator_char____
          *this)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  undefined local_38 [8];
  
  puVar5 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  plVar6 = *(long **)this;
  plVar4 = *(long **)(this + 8);
  if (plVar6 != plVar4) {
    do {
      puVar2 = (undefined *)(*plVar6 + -0x18);
      if (puVar2 != puVar5) {
        LOCK();
        piVar1 = (int *)(*plVar6 + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar3 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar4 != plVar6);
    plVar6 = *(long **)this;
  }
  if (plVar6 != (long *)0x0) {
    __stubs::__ZdlPv(plVar6);
  }
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_Rb_tree(std::_Rb_tree<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode>, std::_Select1st<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> >,
// std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > > const&)

void __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_Rb_tree(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
           *this,_Rb_tree *param_1)

{
  _Rb_tree_node *p_Var1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  p_Var1 = (_Rb_tree_node *)(this + 8);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(_Rb_tree_node **)(this + 0x18) = p_Var1;
  *(_Rb_tree_node **)(this + 0x20) = p_Var1;
  if (*(_Rb_tree_node **)(param_1 + 0x10) != (_Rb_tree_node *)0x0) {
    lVar2 = _M_copy(this,*(_Rb_tree_node **)(param_1 + 0x10),p_Var1);
    *(long *)(this + 0x10) = lVar2;
    lVar3 = lVar2;
    do {
      lVar4 = lVar3;
      lVar3 = *(long *)(lVar4 + 0x10);
    } while (lVar3 != 0);
    *(long *)(this + 0x18) = lVar4;
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x18);
    } while (lVar2 != 0);
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::_M_copy(std::_Rb_tree_node<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> > const*,
// std::_Rb_tree_node<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char>
// > const, CacheNode> >*)

undefined4 * __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::_M_copy(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
          *this,_Rb_tree_node *param_1,_Rb_tree_node *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)_M_create_node(this,(pair *)(param_1 + 0x20));
  *puVar3 = *(undefined4 *)param_1;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(_Rb_tree_node **)(puVar3 + 2) = param_2;
  if (*(_Rb_tree_node **)(param_1 + 0x18) != (_Rb_tree_node *)0x0) {
    uVar4 = _M_copy(this,*(_Rb_tree_node **)(param_1 + 0x18),(_Rb_tree_node *)puVar3);
    *(undefined8 *)(puVar3 + 6) = uVar4;
  }
  puVar2 = puVar3;
  for (puVar1 = *(undefined4 **)(param_1 + 0x10); puVar1 != (undefined4 *)0x0;
      puVar1 = *(undefined4 **)(puVar1 + 4)) {
    puVar5 = (undefined4 *)_M_create_node(this,(pair *)(puVar1 + 8));
    *puVar5 = *puVar1;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined4 **)(puVar2 + 4) = puVar5;
    *(undefined4 **)(puVar5 + 2) = puVar2;
    if (*(_Rb_tree_node **)(puVar1 + 6) != (_Rb_tree_node *)0x0) {
      uVar4 = _M_copy(this,*(_Rb_tree_node **)(puVar1 + 6),(_Rb_tree_node *)puVar5);
      *(undefined8 *)(puVar5 + 6) = uVar4;
    }
    puVar2 = puVar5;
  }
  return puVar3;
}



// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
// CacheNode>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const, CacheNode> >, std::less<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> > >::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode>,
// std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const, CacheNode> >, std::less<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> > const, CacheNode> > > const&)

_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
* __thiscall
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>
::operator_(_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
            *this,_Rb_tree *param_1)

{
  _Rb_tree_node *p_Var1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (this != (_Rb_tree_std__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode__std___Select1st_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___std__less_std__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char__const_CacheNode___
               *)param_1) {
    p_Var1 = (_Rb_tree_node *)(this + 8);
    _M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    *(_Rb_tree_node **)(this + 0x18) = p_Var1;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree_node **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
    if (*(_Rb_tree_node **)(param_1 + 0x10) != (_Rb_tree_node *)0x0) {
      lVar2 = _M_copy(this,*(_Rb_tree_node **)(param_1 + 0x10),p_Var1);
      *(long *)(this + 0x10) = lVar2;
      lVar3 = lVar2;
      do {
        lVar4 = lVar3;
        lVar3 = *(long *)(lVar4 + 0x10);
      } while (lVar3 != 0);
      *(long *)(this + 0x18) = lVar4;
      do {
        lVar3 = lVar2;
        lVar2 = *(long *)(lVar3 + 0x18);
      } while (lVar2 != 0);
      *(long *)(this + 0x20) = lVar3;
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    }
  }
  return this;
}



undefined8 _InitLog(char *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  __stubs::_strncpy(&sLogFileName,param_1,0x401);
  sMaxFileSize = param_3;
  setupStderrFileDescriptor();
  uVar3 = 0xffffffff;
  if (param_2 != (char *)0x0) {
    iVar1 = __stubs::_strcmp(param_2,"ERROR");
    uVar2 = 3;
    if (iVar1 != 0) {
      iVar1 = __stubs::_strcmp(param_2,"WARNING");
      uVar2 = 2;
      if (iVar1 != 0) {
        iVar1 = __stubs::_strcmp(param_2,"INFO");
        uVar2 = 1;
        if (iVar1 != 0) {
          iVar1 = __stubs::_strcmp(param_2,"DEBUG");
          if (iVar1 != 0) {
            return 0xffffffff;
          }
          uVar2 = (uint)(iVar1 != 0);
        }
      }
    }
    __stubs::_pthread_mutex_lock((pthread_mutex_t *)&_sLogLock);
    sLogLevel = uVar2;
    __stubs::_pthread_mutex_unlock((pthread_mutex_t *)&_sLogLock);
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// setupStderrFileDescriptor()

void setupStderrFileDescriptor(void)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  
  pFVar3 = __stubs::_fopen(&sLogFileName,"a");
  if (pFVar3 != (FILE *)0x0) {
    iVar1 = __stubs::_fileno(pFVar3);
    iVar2 = __stubs::_fileno(*(FILE **)__got::___stderrp);
    __stubs::_dup2(iVar1,iVar2);
    __stubs::_fclose(pFVar3);
    return;
  }
  return;
}



void _trace(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  tm *ptVar3;
  pthread_t p_Var4;
  char *in_RDX;
  char *pcVar5;
  undefined local_dd8 [184];
  time_t local_d20;
  undefined local_d18 [96];
  long local_cb8;
  char local_c88 [32];
  char local_c68 [1024];
  char local_868 [1024];
  undefined4 local_468;
  undefined4 local_464;
  undefined *local_460;
  undefined *local_458;
  char local_448 [1040];
  long local_38;
  
  puVar1 = __got::___stack_chk_guard;
  local_38 = *(long *)__got::___stack_chk_guard;
  __stubs::_pthread_mutex_lock((pthread_mutex_t *)&_sLogLock);
  if (sLogLevel <= (int)param_1) {
    iVar2 = __stubs::_stat_INODE64(&sLogFileName,local_d18);
    if ((iVar2 == 0) && (sMaxFileSize < local_cb8)) {
      __stubs::_snprintf(local_448,0x401,"%s.1",&sLogFileName);
      __stubs::_remove(local_448);
      __stubs::_rename(&sLogFileName,local_448);
      setupStderrFileDescriptor();
    }
    local_458 = local_dd8;
    local_460 = &stack0x00000008;
    local_464 = 0x30;
    local_468 = 0x18;
    __stubs::_time(&local_d20);
    ptVar3 = __stubs::_localtime(&local_d20);
    __stubs::_sprintf(local_c88,"%0d-%0d %0d:%0d:%0d",(ulong)(ptVar3->tm_mon + 1),
                      (ulong)(uint)ptVar3->tm_mday,(ulong)(uint)ptVar3->tm_hour,
                      (ulong)(uint)ptVar3->tm_min,ptVar3->tm_sec);
    p_Var4 = __stubs::_pthread_self();
    __stubs::_snprintf(local_868,0x400,"TID[%p](%s)",p_Var4,local_c88);
    __stubs::_vsnprintf(local_c68,0x400,in_RDX,&local_468);
    if (param_1 < 4) {
      pcVar5 = (&PTR_s_DEBUG_10002f710)[(int)param_1];
    }
    else {
      pcVar5 = "DEBUG";
    }
    __stubs::_fprintf(*(FILE **)__got::___stderrp,"%s %s %s: %s\n",pcVar5,local_868);
  }
  __stubs::_pthread_mutex_unlock((pthread_mutex_t *)&_sLogLock);
  if (*(long *)puVar1 == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// PThreadMutex::~PThreadMutex()

void __thiscall PThreadMutex::_PThreadMutex(PThreadMutex *this)

{
  __stubs::_pthread_mutex_destroy((pthread_mutex_t *)this);
  return;
}



void __GLOBAL__I_a(void)

{
  undefined *puVar1;
  pthread_mutexattr_t local_38;
  long local_28;
  
  puVar1 = __got::___stack_chk_guard;
  local_28 = *(long *)__got::___stack_chk_guard;
  __stubs::_pthread_mutexattr_init(&local_38);
  __stubs::_pthread_mutexattr_settype(&local_38,2);
  __stubs::_pthread_mutex_init((pthread_mutex_t *)&_sLogLock,&local_38);
  __stubs::___cxa_atexit(PThreadMutex::_PThreadMutex,&_sLogLock,0x100000000);
  if (*(long *)puVar1 == local_28) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// MTPRepository::MTPRepository(DeviceID const&)

void __thiscall MTPRepository::MTPRepository(MTPRepository *this,DeviceID *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined *puVar2;
  pthread_mutexattr_t local_38;
  long local_28;
  
  puVar2 = __got::___stack_chk_guard;
  local_28 = *(long *)__got::___stack_chk_guard;
  *(undefined ***)this = &PTR_Load_10002f740;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(MTPRepository **)(this + 0x38) = this + 0x28;
  *(MTPRepository **)(this + 0x40) = this + 0x28;
  __stubs::_pthread_mutexattr_init(&local_38);
  __stubs::_pthread_mutexattr_settype(&local_38,2);
  ppVar1 = (pthread_mutex_t *)(this + 0x50);
  __stubs::_pthread_mutex_init(ppVar1,&local_38);
  __stubs::_pthread_mutex_lock(ppVar1);
  _trace(0);
  __stubs::_pthread_mutex_unlock(ppVar1);
  if (*(long *)puVar2 == local_28) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// MTPRepository::MTPRepository(DeviceID const&)

void __thiscall MTPRepository::MTPRepository(MTPRepository *this,DeviceID *param_1)

{
  MTPRepository(this,param_1);
  return;
}



// MTPRepository::~MTPRepository()

void __thiscall MTPRepository::_MTPRepository(MTPRepository *this)

{
  pthread_mutex_t *ppVar1;
  MTPRepository *pMVar2;
  
  *(undefined ***)this = &PTR_Load_10002f740;
  ppVar1 = (pthread_mutex_t *)(this + 0x50);
  __stubs::_pthread_mutex_lock(ppVar1);
  _trace(0);
  if (*(long *)(this + 8) != 0) {
    __stubs::_LIBMTP_Release_Device();
  }
  for (pMVar2 = *(MTPRepository **)(this + 0x38); pMVar2 != this + 0x28;
      pMVar2 = (MTPRepository *)__stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(pMVar2)) {
    if (*(long **)(pMVar2 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(pMVar2 + 0x28) + 8))();
    }
  }
  __stubs::_pthread_mutex_unlock(ppVar1);
  __stubs::_pthread_mutex_destroy(ppVar1);
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
  ::_M_erase((_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
              *)(this + 0x20),*(_Rb_tree_node **)(this + 0x30));
  return;
}



// MTPRepository::~MTPRepository()

void __thiscall MTPRepository::_MTPRepository(MTPRepository *this)

{
  _MTPRepository(this);
  return;
}



// MTPRepository::~MTPRepository()

void __thiscall MTPRepository::_MTPRepository(MTPRepository *this)

{
  _MTPRepository(this);
  __stubs::__ZdlPv(this);
  return;
}



// MTPRepository::GetDeviceInfo(DeviceInfo*)

undefined8 __thiscall MTPRepository::GetDeviceInfo(MTPRepository *this,DeviceInfo *param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *this_00;
  int *piVar7;
  int local_60 [2];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  long local_48;
  undefined local_40 [8];
  undefined local_38 [8];
  
  pcVar4 = (char *)__stubs::_LIBMTP_Get_Modelname(*(undefined8 *)(this + 8));
  if (pcVar4 == (char *)0x0) {
    _trace(2);
  }
  else {
    sVar5 = __stubs::_strlen(pcVar4);
    __stubs::__ZNSs6assignEPKcm(param_1,pcVar4,sVar5);
    __stubs::_free(pcVar4);
  }
  pcVar4 = (char *)__stubs::_LIBMTP_Get_Manufacturername(*(undefined8 *)(this + 8));
  if (pcVar4 == (char *)0x0) {
    _trace(2);
  }
  else {
    sVar5 = __stubs::_strlen(pcVar4);
    __stubs::__ZNSs6assignEPKcm(param_1 + 8,pcVar4,sVar5);
    __stubs::_free(pcVar4);
  }
  pcVar4 = (char *)__stubs::_LIBMTP_Get_Deviceversion(*(undefined8 *)(this + 8));
  if (pcVar4 == (char *)0x0) {
    _trace(2);
  }
  else {
    sVar5 = __stubs::_strlen(pcVar4);
    __stubs::__ZNSs6assignEPKcm(param_1 + 0x10,pcVar4,sVar5);
    __stubs::_free(pcVar4);
  }
  pcVar4 = (char *)__stubs::_LIBMTP_Get_Serialnumber(*(undefined8 *)(this + 8));
  if (pcVar4 == (char *)0x0) {
    _trace(2);
  }
  else {
    sVar5 = __stubs::_strlen(pcVar4);
    __stubs::__ZNSs6assignEPKcm(param_1 + 0x18,pcVar4,sVar5);
    __stubs::_free(pcVar4);
  }
  this_00 = (undefined8 *)(param_1 + 0x20);
  std::vector<Storage,std::allocator<Storage>>::_M_erase_at_end
            ((vector_Storage_std__allocator_Storage__ *)this_00,*(Storage **)(param_1 + 0x20));
  iVar3 = __stubs::_LIBMTP_Get_Storage(*(undefined8 *)(this + 8),0);
  if (iVar3 == -1) {
    _trace(2);
  }
  puVar2 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  piVar7 = *(int **)(*(long *)(this + 8) + 0x18);
  uVar6 = 5;
  if (piVar7 != (int *)0x0) {
    do {
      local_60[0] = *piVar7;
      local_58 = piVar7[4];
      iStack_54 = piVar7[5];
      iStack_50 = piVar7[6];
      iStack_4c = piVar7[7];
      __stubs::__ZNSsC1EPKcRKSaIcE(&local_48,*(undefined8 *)(piVar7 + 10),local_40);
      if (*piVar7 == 0x10001) {
        std::vector<Storage,std::allocator<Storage>>::insert
                  ((vector_Storage_std__allocator_Storage__ *)this_00,(__normal_iterator)*this_00,
                   (Storage *)local_60);
      }
      else {
        std::vector<Storage,std::allocator<Storage>>::push_back
                  ((vector_Storage_std__allocator_Storage__ *)this_00,(Storage *)local_60);
      }
      piVar7 = *(int **)(piVar7 + 0xe);
      if ((undefined *)(local_48 + -0x18) != puVar2) {
        LOCK();
        piVar1 = (int *)(local_48 + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar3 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_48 + -0x18),local_38);
        }
      }
      uVar6 = 0;
    } while (piVar7 != (int *)0x0);
  }
  return uVar6;
}



// MTPRepository::GetDeviceID()

MTPRepository * __thiscall MTPRepository::GetDeviceID(MTPRepository *this)

{
  return this + 0x10;
}


/*
Unable to decompile 'mtpOpenDevice'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/


// MTPRepository::Load()

undefined8 __thiscall MTPRepository::Load(MTPRepository *this)

{
  long lVar1;
  undefined8 uVar2;
  
  __stubs::_pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  uVar2 = 0;
  _trace(0);
  if (*(long *)(this + 8) == 0) {
    lVar1 = mtpOpenDevice();
    *(long *)(this + 8) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 1;
      _trace(3);
    }
  }
  __stubs::_pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return uVar2;
}


/*
Unable to decompile 'LookupNoLock'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'Lookup'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'mtpListFolder'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/


// MTPRepository::mtpDumpFileInfo(LIBMTP_file_struct*)

void MTPRepository::mtpDumpFileInfo(LIBMTP_file_struct *param_1)

{
  _trace(0);
  if (*(long *)(param_1 + 0x10) != 0) {
    _trace(0);
  }
  if (*(long *)(param_1 + 0x18) == -1) {
    _trace(0);
  }
  else {
    _trace(0);
  }
  _trace(0);
  _trace(0);
  _trace(0);
  __stubs::_LIBMTP_Get_Filetype_Description();
  _trace(0);
  return;
}



// MTPRepository::ListFolder(unsigned int, char const*, std::vector<Resource,
// std::allocator<Resource> >&)

undefined4 MTPRepository::ListFolder(uint param_1,char *param_2,vector *param_3)

{
  pthread_mutex_t *ppVar1;
  undefined4 uVar2;
  undefined4 in_register_0000003c;
  
  ppVar1 = (pthread_mutex_t *)(CONCAT44(in_register_0000003c,param_1) + 0x50);
  __stubs::_pthread_mutex_lock(ppVar1);
  _trace(0);
  uVar2 = mtpListFolder(param_1,(char *)((ulong)param_2 & 0xffffffff),param_3);
  __stubs::_pthread_mutex_unlock(ppVar1);
  return uVar2;
}


/*
Unable to decompile 'Send'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/


// MTPRepository::mtpSendFile(LIBMTP_mtpdevice_struct*, char const*, char const*, unsigned long
// long, unsigned int, unsigned int, unsigned int*, int (*)(unsigned long long, unsigned long long,
// void const*), void const*)

int MTPRepository::mtpSendFile
              (LIBMTP_mtpdevice_struct *param_1,char *param_2,char *param_3,ulonglong param_4,
              uint param_5,uint param_6,uint *param_7,
              _func_int_ulonglong_ulonglong_void_ptr *param_8,void *param_9)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  
  _trace(0);
  iVar2 = -1;
  if (param_1 != (LIBMTP_mtpdevice_struct *)0x0) {
    puVar3 = (uint *)__stubs::_LIBMTP_new_file_t();
    *(ulonglong *)(puVar3 + 6) = param_4;
    pcVar4 = __stubs::_strdup(param_3);
    *(char **)(puVar3 + 4) = pcVar4;
    uVar1 = mtpFindFileType(param_3);
    puVar3[10] = uVar1;
    puVar3[1] = param_5;
    puVar3[2] = param_6;
    _trace(0);
    iVar2 = __stubs::_LIBMTP_Send_File_From_File(param_1,param_2,puVar3,param_8,param_9);
    _trace(0);
    if (iVar2 == 0) {
      _trace(0);
      *param_7 = *puVar3;
    }
    else {
      _trace(3);
      __stubs::_LIBMTP_Dump_Errorstack(param_1);
      __stubs::_LIBMTP_Clear_Errorstack(param_1);
    }
    __stubs::_LIBMTP_destroy_file_t(puVar3);
  }
  return iVar2;
}


/*
Unable to decompile 'Receive'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/


// MTPRepository::mtpGetFile(LIBMTP_mtpdevice_struct*, unsigned int, char const*, int (*)(unsigned
// long long, unsigned long long, void const*), void const*)

undefined4
MTPRepository::mtpGetFile
          (LIBMTP_mtpdevice_struct *param_1,uint param_2,char *param_3,
          _func_int_ulonglong_ulonglong_void_ptr *param_4,void *param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (LIBMTP_mtpdevice_struct *)0x0) {
    _trace(0);
    uVar1 = __stubs::_LIBMTP_Get_File_To_File(param_1,param_2,param_3,param_4,param_5);
    _trace(0);
  }
  return uVar1;
}


/*
Unable to decompile 'Delete'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'MakeFolder'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/

/*
Unable to decompile 'SetName'
Cause: 
Low-level Error: Unable to resolve type: Cache
*/


// MTPRepository::Dump()

void __thiscall MTPRepository::Dump(MTPRepository *this)

{
  MTPRepository *pMVar1;
  
  __stubs::_pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  _trace(0);
  for (pMVar1 = *(MTPRepository **)(this + 0x38); pMVar1 != this + 0x28;
      pMVar1 = (MTPRepository *)__stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(pMVar1)) {
    Cache::Dump();
  }
  __stubs::_pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}



// MTPRepository::mtpFindFileType(char const*)

char MTPRepository::mtpFindFileType(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar2 = __stubs::_rindex(param_1,0x2e);
  pcVar4 = "";
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2 + 1;
  }
  iVar1 = __stubs::_strcasecmp(pcVar4,"wav");
  cVar3 = '\x01';
  if (iVar1 != 0) {
    iVar1 = __stubs::_strcasecmp(pcVar4,"mp3");
    cVar3 = '\x02';
    if (iVar1 != 0) {
      iVar1 = __stubs::_strcasecmp(pcVar4,"wma");
      cVar3 = '\x03';
      if (iVar1 != 0) {
        iVar1 = __stubs::_strcasecmp(pcVar4,"ogg");
        cVar3 = '\x04';
        if (iVar1 != 0) {
          iVar1 = __stubs::_strcasecmp(pcVar4,"mp4");
          cVar3 = '\x06';
          if (iVar1 != 0) {
            iVar1 = __stubs::_strcasecmp(pcVar4,"wmv");
            cVar3 = '\b';
            if (iVar1 != 0) {
              iVar1 = __stubs::_strcasecmp(pcVar4,"avi");
              cVar3 = '\t';
              if (iVar1 != 0) {
                iVar1 = __stubs::_strcasecmp(pcVar4,"mpeg");
                cVar3 = '\n';
                if ((iVar1 != 0) && (iVar1 = __stubs::_strcasecmp(pcVar4,"mpg"), iVar1 != 0)) {
                  iVar1 = __stubs::_strcasecmp(pcVar4,"asf");
                  cVar3 = '\v';
                  if (iVar1 != 0) {
                    iVar1 = __stubs::_strcasecmp(pcVar4,"qt");
                    cVar3 = '\f';
                    if (iVar1 != 0) {
                      iVar1 = __stubs::_strcasecmp(pcVar4,"mov");
                      if (iVar1 == 0) {
                        cVar3 = (iVar1 == 0) * '\t' + '\x03';
                      }
                      else {
                        iVar1 = __stubs::_strcasecmp(pcVar4,"jpg");
                        cVar3 = '\x0e';
                        if ((iVar1 != 0) &&
                           (iVar1 = __stubs::_strcasecmp(pcVar4,"jpeg"), iVar1 != 0)) {
                          iVar1 = __stubs::_strcasecmp(pcVar4,"jfif");
                          cVar3 = '\x0f';
                          if (iVar1 != 0) {
                            iVar1 = __stubs::_strcasecmp(pcVar4,"tif");
                            cVar3 = '\x10';
                            if ((iVar1 != 0) &&
                               (iVar1 = __stubs::_strcasecmp(pcVar4,"tiff"), iVar1 != 0)) {
                              iVar1 = __stubs::_strcasecmp(pcVar4,"bmp");
                              cVar3 = '\x11';
                              if (iVar1 != 0) {
                                iVar1 = __stubs::_strcasecmp(pcVar4,"gif");
                                cVar3 = '\x12';
                                if (iVar1 != 0) {
                                  iVar1 = __stubs::_strcasecmp(pcVar4,"pic");
                                  cVar3 = '\x13';
                                  if ((iVar1 != 0) &&
                                     (iVar1 = __stubs::_strcasecmp(pcVar4,"pict"), iVar1 != 0)) {
                                    iVar1 = __stubs::_strcasecmp(pcVar4,"png");
                                    cVar3 = '\x14';
                                    if (iVar1 != 0) {
                                      iVar1 = __stubs::_strcasecmp(pcVar4,"wmf");
                                      cVar3 = '\x19';
                                      if (iVar1 != 0) {
                                        iVar1 = __stubs::_strcasecmp(pcVar4,"ics");
                                        cVar3 = '\x16';
                                        if (iVar1 != 0) {
                                          iVar1 = __stubs::_strcasecmp(pcVar4,"exe");
                                          cVar3 = '\x1a';
                                          if ((((iVar1 != 0) &&
                                               (iVar1 = __stubs::_strcasecmp(pcVar4,"com"),
                                               iVar1 != 0)) &&
                                              (iVar1 = __stubs::_strcasecmp(pcVar4,"bat"),
                                              iVar1 != 0)) &&
                                             ((iVar1 = __stubs::_strcasecmp(pcVar4,"dll"),
                                              iVar1 != 0 &&
                                              (iVar1 = __stubs::_strcasecmp(pcVar4,"sys"),
                                              iVar1 != 0)))) {
                                            iVar1 = __stubs::_strcasecmp(pcVar4,"aac");
                                            cVar3 = '\x1e';
                                            if (iVar1 != 0) {
                                              iVar1 = __stubs::_strcasecmp(pcVar4,"mp2");
                                              cVar3 = '!';
                                              if (iVar1 != 0) {
                                                iVar1 = __stubs::_strcasecmp(pcVar4,"flac");
                                                cVar3 = ' ';
                                                if (iVar1 != 0) {
                                                  iVar1 = __stubs::_strcasecmp(pcVar4,"m4a");
                                                  cVar3 = '\"';
                                                  if (iVar1 != 0) {
                                                    iVar1 = __stubs::_strcasecmp(pcVar4,"doc");
                                                    cVar3 = '#';
                                                    if (iVar1 != 0) {
                                                      iVar1 = __stubs::_strcasecmp(pcVar4,"xml");
                                                      cVar3 = '$';
                                                      if (iVar1 != 0) {
                                                        iVar1 = __stubs::_strcasecmp(pcVar4,"xls");
                                                        cVar3 = '%';
                                                        if (iVar1 != 0) {
                                                          iVar1 = __stubs::_strcasecmp(pcVar4,"ppt")
                                                          ;
                                                          cVar3 = '&';
                                                          if (iVar1 != 0) {
                                                            iVar1 = __stubs::_strcasecmp
                                                                              (pcVar4,"mht");
                                                            cVar3 = '\'';
                                                            if (iVar1 != 0) {
                                                              iVar1 = __stubs::_strcasecmp
                                                                                (pcVar4,"jp2");
                                                              cVar3 = '(';
                                                              if (iVar1 != 0) {
                                                                iVar1 = __stubs::_strcasecmp
                                                                                  (pcVar4,"jpx");
                                                                cVar3 = ')';
                                                                if (iVar1 != 0) {
                                                                  iVar1 = __stubs::_strcasecmp
                                                                                    (pcVar4,"bin");
                                                                  cVar3 = '\x1d';
                                                                  if (iVar1 != 0) {
                                                                    iVar1 = __stubs::_strcasecmp
                                                                                      (pcVar4,"vcf")
                                                                    ;
                                                                    cVar3 = ',';
                                                                    if (iVar1 == 0) {
                                                                      cVar3 = '\x18';
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _trace(0);
  return cVar3;
}



// std::vector<Storage, std::allocator<Storage> >::insert(__gnu_cxx::__normal_iterator<Storage*,
// std::vector<Storage, std::allocator<Storage> > >, Storage const&)

long __thiscall
std::vector<Storage,std::allocator<Storage>>::insert
          (vector_Storage_std__allocator_Storage__ *this,__normal_iterator param_1,Storage *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 in_register_00000034;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  lVar1 = *(long *)this;
  if ((*(undefined8 **)(this + 8) == *(undefined8 **)(this + 0x10)) ||
     (*(undefined8 **)(this + 8) != puVar4)) {
    _M_insert_aux(this,param_1,param_2);
  }
  else {
    lVar3 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)param_2;
      puVar4[1] = *(undefined8 *)(param_2 + 8);
      *puVar4 = uVar2;
      __stubs::__ZNSsC1ERKSs(puVar4 + 3,param_2 + 0x18);
      lVar3 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar3 + 0x20;
  }
  return ((long)puVar4 - lVar1 >> 5) * 0x20 + *(long *)this;
}



// std::vector<Storage, std::allocator<Storage> >::push_back(Storage const&)

void __thiscall
std::vector<Storage,std::allocator<Storage>>::push_back
          (vector_Storage_std__allocator_Storage__ *this,Storage *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    lVar3 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)param_1;
      puVar1[1] = *(undefined8 *)(param_1 + 8);
      *puVar1 = uVar2;
      __stubs::__ZNSsC1ERKSs(puVar1 + 3,param_1 + 0x18);
      lVar3 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar3 + 0x20;
    return;
  }
  _M_insert_aux(this,(__normal_iterator)puVar1,param_1);
  return;
}



// std::map<unsigned int, Cache*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
// const, Cache*> > >::operator[](unsigned int const&)

map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
* __thiscall
std::
map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
::operator__(map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
             *this,uint *param_1)

{
  map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *pmVar1;
  map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *pmVar2;
  map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *pmVar3;
  map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *pmVar4;
  uint local_18 [2];
  undefined8 local_10;
  
  pmVar1 = this + 8;
  pmVar3 = pmVar1;
  if (*(map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
        **)(this + 0x10) !=
      (map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
       *)0x0) {
    pmVar2 = pmVar1;
    pmVar4 = *(map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
               **)(this + 0x10);
    do {
      pmVar3 = pmVar4;
      if (*(uint *)(pmVar3 + 0x20) < *param_1) {
        pmVar4 = *(map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                   **)(pmVar3 + 0x18);
        pmVar3 = pmVar2;
      }
      else {
        pmVar4 = *(map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                   **)(pmVar3 + 0x10);
      }
      pmVar2 = pmVar3;
    } while (pmVar4 != (map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                        *)0x0);
  }
  if (pmVar3 == pmVar1) {
    local_18[0] = *param_1;
  }
  else {
    local_18[0] = *param_1;
    if (*(uint *)(pmVar3 + 0x20) <= local_18[0]) goto LAB_100018af1;
  }
  local_10 = 0;
  pmVar3 = (map_unsigned_int_Cache__std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
            *)_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
              ::_M_insert_unique((_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                                  *)this,(_Rb_tree_iterator)pmVar3,(pair *)local_18);
LAB_100018af1:
  return pmVar3 + 0x28;
}



// std::_Rb_tree<unsigned int, std::pair<unsigned int const, Cache*>,
// std::_Select1st<std::pair<unsigned int const, Cache*> >, std::less<unsigned int>,
// std::allocator<std::pair<unsigned int const, Cache*> > >::find(unsigned int const&)

_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
* __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
::find(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
       *this,uint *param_1)

{
  _Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *p_Var1;
  _Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *p_Var2;
  _Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *p_Var3;
  _Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
  *p_Var4;
  
  p_Var1 = this + 8;
  p_Var3 = p_Var1;
  if (*(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
        **)(this + 0x10) !=
      (_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
       *)0x0) {
    p_Var2 = p_Var1;
    p_Var4 = *(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
               **)(this + 0x10);
    do {
      p_Var3 = p_Var4;
      if (*(uint *)(p_Var3 + 0x20) < *param_1) {
        p_Var4 = *(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                   **)(p_Var3 + 0x18);
        p_Var3 = p_Var2;
      }
      else {
        p_Var4 = *(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                   **)(p_Var3 + 0x10);
      }
      p_Var2 = p_Var3;
    } while (p_Var4 != (_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                        *)0x0);
  }
  if ((p_Var3 != p_Var1) && (*(uint *)(p_Var3 + 0x20) <= *param_1)) {
    p_Var1 = p_Var3;
  }
  return p_Var1;
}



// std::_Rb_tree<unsigned int, std::pair<unsigned int const, Cache*>,
// std::_Select1st<std::pair<unsigned int const, Cache*> >, std::less<unsigned int>,
// std::allocator<std::pair<unsigned int const, Cache*> >
// >::_M_insert_unique(std::_Rb_tree_iterator<std::pair<unsigned int const, Cache*> >,
// std::pair<unsigned int const, Cache*> const&)

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
::_M_insert_unique(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                   *this,_Rb_tree_iterator param_1,pair *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined4 in_register_00000034;
  _Rb_tree_node_base *p_Var3;
  
  p_Var1 = (_Rb_tree_node_base *)CONCAT44(in_register_00000034,param_1);
  if ((_Rb_tree_node_base *)(this + 8) == p_Var1) {
    if ((*(long *)(this + 0x28) == 0) ||
       (*(uint *)param_2 <= *(uint *)(*(_Rb_tree_node_base **)(this + 0x20) + 0x20))) {
LAB_100018bcc:
      p_Var1 = (_Rb_tree_node_base *)_M_insert_unique(this,param_2);
      return p_Var1;
    }
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x20);
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
  else {
    p_Var2 = p_Var1;
    if (*(uint *)param_2 < *(uint *)(p_Var1 + 0x20)) {
      p_Var3 = p_Var1;
      if (*(_Rb_tree_node_base **)(this + 0x18) != p_Var1) {
        p_Var1 = (_Rb_tree_node_base *)
                 __stubs::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(p_Var1);
        if (*(uint *)param_2 <= *(uint *)(p_Var1 + 0x20)) goto LAB_100018bcc;
        if (*(long *)(p_Var1 + 0x18) == 0) {
          p_Var2 = p_Var1;
          p_Var3 = (_Rb_tree_node_base *)0x0;
        }
      }
    }
    else {
      if (*(uint *)param_2 <= *(uint *)(p_Var1 + 0x20)) {
        return p_Var1;
      }
      if (*(_Rb_tree_node_base **)(this + 0x20) != p_Var1) {
        p_Var2 = (_Rb_tree_node_base *)
                 __stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(p_Var1);
        if (*(uint *)(p_Var2 + 0x20) <= *(uint *)param_2) goto LAB_100018bcc;
        p_Var3 = p_Var2;
        if (*(long *)(p_Var1 + 0x18) != 0) goto LAB_100018bfa;
      }
      p_Var2 = p_Var1;
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
  }
LAB_100018bfa:
  p_Var1 = (_Rb_tree_node_base *)_M_insert(this,p_Var3,p_Var2,param_2);
  return p_Var1;
}



// std::_Rb_tree<unsigned int, std::pair<unsigned int const, Cache*>,
// std::_Select1st<std::pair<unsigned int const, Cache*> >, std::less<unsigned int>,
// std::allocator<std::pair<unsigned int const, Cache*> > >::_M_insert(std::_Rb_tree_node_base*,
// std::_Rb_tree_node_base*, std::pair<unsigned int const, Cache*> const&)

long __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
::_M_insert(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
            *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((param_1 == (_Rb_tree_node_base *)0x0) && ((_Rb_tree_node_base *)(this + 8) != param_2)) {
    bVar3 = *(uint *)param_3 < *(uint *)(param_2 + 0x20);
  }
  lVar2 = __stubs::__Znwm(0x30);
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  __stubs::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
            (bVar3,lVar2,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return lVar2;
}



// std::_Rb_tree<unsigned int, std::pair<unsigned int const, Cache*>,
// std::_Select1st<std::pair<unsigned int const, Cache*> >, std::less<unsigned int>,
// std::allocator<std::pair<unsigned int const, Cache*> > >::_M_insert_unique(std::pair<unsigned int
// const, Cache*> const&)

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
::_M_insert_unique(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
                   *this,pair *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base **pp_Var3;
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 8);
LAB_100018cd7:
    if (p_Var2 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_100018ced;
    p_Var1 = (_Rb_tree_node_base *)__stubs::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(p_Var2)
    ;
  }
  else {
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var1 = p_Var2;
      pp_Var3 = (_Rb_tree_node_base **)(p_Var1 + 0x18);
      if (*(uint *)param_1 < *(uint *)(p_Var1 + 0x20)) {
        pp_Var3 = (_Rb_tree_node_base **)(p_Var1 + 0x10);
      }
      p_Var2 = *pp_Var3;
    } while (*pp_Var3 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var1;
    if (*(uint *)param_1 < *(uint *)(p_Var1 + 0x20)) goto LAB_100018cd7;
  }
  if (*(uint *)param_1 <= *(uint *)(p_Var1 + 0x20)) {
    return;
  }
LAB_100018ced:
  _M_insert(this,(_Rb_tree_node_base *)0x0,p_Var2,param_1);
  return;
}



// std::vector<Storage, std::allocator<Storage>
// >::_M_insert_aux(__gnu_cxx::__normal_iterator<Storage*, std::vector<Storage,
// std::allocator<Storage> > >, Storage const&)

void __thiscall
std::vector<Storage,std::allocator<Storage>>::_M_insert_aux
          (vector_Storage_std__allocator_Storage__ *this,__normal_iterator param_1,Storage *param_2)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined4 in_register_00000034;
  ulong uVar16;
  long unaff_R14;
  undefined8 *puVar17;
  long local_90;
  long local_50;
  undefined local_48 [16];
  undefined local_38 [8];
  
  puVar12 = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  puVar10 = *(undefined8 **)(this + 8);
  if (puVar10 != *(undefined8 **)(this + 0x10)) {
    lVar15 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[2] = puVar10[-2];
      puVar10[1] = puVar10[-3];
      *puVar10 = puVar10[-4];
      __stubs::__ZNSsC1ERKSs(puVar10 + 3,puVar10 + -1);
      lVar15 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar15 + 0x20;
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 8);
    __stubs::__ZNSsC1ERKSs(&local_50,param_2 + 0x18);
    __copy_backward<false,std::random_access_iterator_tag>::__copy_b_Storage__Storage__
              ((Storage *)puVar12,(Storage *)(*(long *)(this + 8) + -0x40),
               (Storage *)(*(long *)(this + 8) + -0x20));
    puVar12[2] = uVar11;
    puVar12[1] = uVar6;
    *puVar12 = uVar5;
    __stubs::__ZNSs6assignERKSs(puVar12 + 3,&local_50);
    if ((undefined *)(local_50 + -0x18) == __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
      return;
    }
    LOCK();
    piVar1 = (int *)(local_50 + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (0 < iVar4) {
      return;
    }
    __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_50 + -0x18),local_48);
    return;
  }
  uVar9 = (long)puVar10 - *(long *)this >> 5;
  uVar16 = 1;
  if (uVar9 != 0) {
    if (uVar9 == 0x7ffffffffffffff) goto LAB_1000191c6;
    uVar16 = (long)puVar10 - *(long *)this >> 4;
  }
  if (uVar16 < uVar9) {
    uVar16 = 0x7ffffffffffffff;
  }
  else if (0x7ffffffffffffff < uVar16) {
    do {
      uVar11 = __stubs::__ZSt17__throw_bad_allocv();
      uVar11 = ___clang_call_terminate(uVar11);
      __stubs::___cxa_begin_catch(uVar11);
      puVar8 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
      if (local_90 != unaff_R14) {
        lVar15 = local_90;
        do {
          puVar2 = (undefined *)(*(long *)(lVar15 + 0x18) + -0x18);
          if (puVar2 != puVar8) {
            LOCK();
            piVar1 = (int *)(*(long *)(lVar15 + 0x18) + -8);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            if (iVar4 < 1) {
              __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
            }
          }
          lVar15 = lVar15 + 0x20;
        } while (unaff_R14 != lVar15);
      }
      if (local_90 != 0) {
        __stubs::__ZdlPv(local_90);
      }
      __stubs::___cxa_rethrow();
LAB_1000191c6:
      __stubs::__ZSt20__throw_length_errorPKc("vector::_M_insert_aux");
    } while( true );
  }
  puVar10 = (undefined8 *)__stubs::__Znwm();
  lVar15 = *(long *)this;
  if (lVar15 - (long)puVar12 == 0) {
    puVar13 = (undefined8 *)0x0;
    puVar17 = puVar10;
    if (puVar10 == (undefined8 *)0x0) goto LAB_100018f6e;
  }
  else {
    lVar3 = 0x18;
    do {
      lVar14 = lVar3;
      if ((long)puVar10 + lVar14 != 0x18) {
        *(undefined8 *)((long)puVar10 + lVar14 + -8) = *(undefined8 *)(lVar15 + -8 + lVar14);
        uVar11 = *(undefined8 *)(lVar15 + -0x18 + lVar14);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x10) = *(undefined8 *)(lVar15 + -0x10 + lVar14);
        *(undefined8 *)((long)puVar10 + lVar14 + -0x18) = uVar11;
        __stubs::__ZNSsC1ERKSs((long)puVar10 + lVar14,lVar15 + lVar14);
      }
      lVar3 = lVar14 + 0x20;
    } while ((lVar15 - (long)puVar12) + 0x20 + lVar14 != 0x18);
    puVar17 = (undefined8 *)((long)puVar10 + lVar14 + 8);
  }
  puVar13 = puVar17;
  puVar13[2] = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)param_2;
  puVar13[1] = *(undefined8 *)(param_2 + 8);
  *puVar13 = uVar11;
  __stubs::__ZNSsC1ERKSs(puVar13 + 3,param_2 + 0x18);
LAB_100018f6e:
  puVar17 = puVar13 + 4;
  puVar7 = *(undefined8 **)(this + 8);
  if (puVar7 != puVar12) {
    lVar15 = 0;
    do {
      lVar14 = lVar15;
      *(undefined8 *)((long)puVar13 + lVar14 + 0x30) =
           *(undefined8 *)((long)puVar12 + lVar14 + 0x10);
      uVar11 = *(undefined8 *)((long)puVar12 + lVar14);
      *(undefined8 *)((long)puVar13 + lVar14 + 0x28) = *(undefined8 *)((long)puVar12 + lVar14 + 8);
      *(undefined8 *)((long)puVar13 + lVar14 + 0x20) = uVar11;
      lVar3 = (long)puVar12 + lVar14 + 0x18;
      __stubs::__ZNSsC1ERKSs((long)puVar13 + lVar14 + 0x38,lVar3);
      lVar15 = lVar14 + 0x20;
    } while ((undefined8 *)(lVar3 + 8) != puVar7);
    puVar12 = *(undefined8 **)(this + 8);
    puVar17 = (undefined8 *)((long)puVar13 + lVar14 + 0x40);
  }
  puVar8 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  puVar13 = *(undefined8 **)this;
  if (puVar13 != puVar12) {
    do {
      puVar2 = (undefined *)(puVar13[3] + -0x18);
      if (puVar2 != puVar8) {
        LOCK();
        piVar1 = (int *)(puVar13[3] + -8);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar4 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
        }
      }
      puVar13 = puVar13 + 4;
    } while (puVar12 != puVar13);
    puVar12 = *(undefined8 **)this;
  }
  if (puVar12 != (undefined8 *)0x0) {
    __stubs::__ZdlPv(puVar12);
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar17;
  *(undefined8 **)(this + 0x10) = puVar10 + uVar16 * 4;
  return;
}



// Storage* std::__copy_backward<false, std::random_access_iterator_tag>::__copy_b<Storage*,
// Storage*>(Storage*, Storage*, Storage*)

Storage * std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b_Storage__Storage__
                    (Storage *param_1,Storage *param_2,Storage *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar5;
  long lVar6;
  long lVar4;
  
  if (0 < (long)param_2 - (long)param_1) {
    lVar6 = (long)param_2 - (long)param_1 >> 5;
    lVar4 = -1;
    if (lVar6 != 2 && -3 < -lVar6) {
      lVar4 = -lVar6;
    }
    uVar3 = lVar4 + lVar6;
    puVar2 = (undefined8 *)(param_3 + -0x20);
    puVar5 = (undefined8 *)(param_2 + -0x20);
    do {
      puVar2[2] = puVar5[2];
      uVar1 = *puVar5;
      puVar2[1] = puVar5[1];
      *puVar2 = uVar1;
      __stubs::__ZNSs6assignERKSs(puVar2 + 3,puVar5 + 3);
      lVar6 = lVar6 + -1;
      puVar2 = puVar2 + -4;
      puVar5 = puVar5 + -4;
    } while (0 < lVar6);
    param_3 = param_3 + ~uVar3 * 0x20;
  }
  return param_3;
}



// std::vector<Storage, std::allocator<Storage> >::_M_erase_at_end(Storage*)

void __thiscall
std::vector<Storage,std::allocator<Storage>>::_M_erase_at_end
          (vector_Storage_std__allocator_Storage__ *this,Storage *param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  Storage *pSVar4;
  undefined *puVar5;
  Storage *pSVar6;
  undefined local_38 [8];
  
  puVar5 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  pSVar4 = *(Storage **)(this + 8);
  if (pSVar4 != param_1) {
    pSVar6 = param_1;
    do {
      puVar2 = (undefined *)(*(long *)(pSVar6 + 0x18) + -0x18);
      if (puVar2 != puVar5) {
        LOCK();
        piVar1 = (int *)(*(long *)(pSVar6 + 0x18) + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar3 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_38);
        }
      }
      pSVar6 = pSVar6 + 0x20;
    } while (pSVar4 != pSVar6);
  }
  *(Storage **)(this + 8) = param_1;
  return;
}



// std::_Rb_tree<unsigned int, std::pair<unsigned int const, Cache*>,
// std::_Select1st<std::pair<unsigned int const, Cache*> >, std::less<unsigned int>,
// std::allocator<std::pair<unsigned int const, Cache*> >
// >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, Cache*> >*)

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>
::_M_erase(_Rb_tree_unsigned_int_std__pair_unsigned_int_const_Cache___std___Select1st_std__pair_unsigned_int_const_Cache____std__less_unsigned_int__std__allocator_std__pair_unsigned_int_const_Cache____
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
      p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
      __stubs::__ZdlPv(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node *)0x0);
  }
  return;
}



// TokenizeString(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char>
// >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&,
// char const*, char)

void TokenizeString(vector *param_1,char *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined7 in_register_00000011;
  char *pcVar4;
  long lVar5;
  char cVar6;
  undefined local_70 [8];
  long local_68;
  undefined local_60 [8];
  long local_58;
  undefined local_50 [24];
  undefined local_38 [8];
  
  pcVar4 = param_2 + 1;
  if (*param_2 != param_3) {
    pcVar4 = param_2;
  }
  cVar6 = *pcVar4;
  if (cVar6 != '\0') {
    do {
      pcVar3 = __stubs::_strchr(pcVar4,(int)CONCAT71(in_register_00000011,param_3));
      if (pcVar3 == (char *)0x0) {
        if (cVar6 == '\0') {
          return;
        }
        __stubs::__ZNSsC1EPKcRKSaIcE(&local_68,pcVar4,local_70);
        std::
        vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
        ::push_back((vector_std__basic_string_char_std__char_traits_char__std__allocator_char___std__allocator_std__basic_string_char_std__char_traits_char__std__allocator_char____
                     *)param_1,(basic_string *)&local_68);
        if ((undefined *)(local_68 + -0x18) == __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
          return;
        }
        LOCK();
        piVar1 = (int *)(local_68 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (0 < iVar2) {
          return;
        }
        __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_68 + -0x18),local_38);
        return;
      }
      __stubs::__ZNSsC1EPKcmRKSaIcE
                (&local_58,pcVar4,(long)(int)((long)pcVar3 - (long)pcVar4),local_60);
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
      ::push_back((vector_std__basic_string_char_std__char_traits_char__std__allocator_char___std__allocator_std__basic_string_char_std__char_traits_char__std__allocator_char____
                   *)param_1,(basic_string *)&local_58);
      if ((undefined *)(local_58 + -0x18) != __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
        LOCK();
        piVar1 = (int *)(local_58 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar2 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_58 + -0x18),local_50);
        }
      }
      lVar5 = ((long)pcVar3 - (long)pcVar4 << 0x20) + 0x100000000 >> 0x20;
      cVar6 = pcVar4[lVar5];
      pcVar4 = pcVar4 + lVar5;
    } while (cVar6 != '\0');
  }
  return;
}



// SplitPath(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&,
// std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)

void SplitPath(char *param_1,basic_string *param_2,basic_string *param_3)

{
  char *pcVar1;
  size_t sVar2;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  __stubs::_strncpy(local_438,param_1,0x400);
  pcVar1 = __stubs::_basename(local_438);
  sVar2 = __stubs::_strlen(pcVar1);
  __stubs::__ZNSs6assignEPKcm(param_3,pcVar1,sVar2);
  __stubs::_strncpy(local_438,param_1,0x400);
  pcVar1 = __stubs::_dirname(local_438);
  sVar2 = __stubs::_strlen(pcVar1);
  __stubs::__ZNSs6assignEPKcm(param_2,pcVar1,sVar2);
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
  __stubs::___stack_chk_fail();
  return;
}



// AppendPath(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char const*)

void AppendPath(basic_string *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = __stubs::__ZNKSs7compareEPKc(param_1,"/");
  if (iVar1 != 0) {
    __stubs::__ZNSs6appendEPKcm(param_1,"/",1);
  }
  sVar2 = __stubs::_strlen(param_2);
  __stubs::__ZNSs6appendEPKcm(param_1,param_2,sVar2);
  return;
}



// std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >
// >::push_back(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
::push_back(vector_std__basic_string_char_std__char_traits_char__std__allocator_char___std__allocator_std__basic_string_char_std__char_traits_char__std__allocator_char____
            *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != *(long *)(this + 0x10)) {
    lVar2 = 0;
    if (lVar1 != 0) {
      __stubs::__ZNSsC1ERKSs(lVar1,param_1);
      lVar2 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar2 + 8;
    return;
  }
  _M_insert_aux(this,(__normal_iterator)lVar1,param_1);
  return;
}



// std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
// std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >
// >::_M_insert_aux(__gnu_cxx::__normal_iterator<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> >*, std::vector<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > > > >, std::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const&)

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
::_M_insert_aux(vector_std__basic_string_char_std__char_traits_char__std__allocator_char___std__allocator_std__basic_string_char_std__char_traits_char__std__allocator_char____
                *this,__normal_iterator param_1,basic_string *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 in_register_00000034;
  long *unaff_R12;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long local_68;
  undefined local_60 [16];
  long local_50;
  undefined local_48 [24];
  
  plVar8 = (long *)CONCAT44(in_register_00000034,param_1);
  lVar11 = *(long *)(this + 8);
  if (lVar11 != *(long *)(this + 0x10)) {
    lVar6 = 0;
    if (lVar11 != 0) {
      __stubs::__ZNSsC1ERKSs(lVar11,lVar11 + -8);
      lVar6 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar6 + 8;
    __stubs::__ZNSsC1ERKSs(&local_68,param_2);
    __copy_backward<false,std::random_access_iterator_tag>::
    __copy_b_std__basic_string_char_std__char_traits_char__std__allocator_char____std__basic_string_char_std__char_traits_char__std__allocator_char____
              ((basic_string *)plVar8,(basic_string *)(*(long *)(this + 8) + -0x10),
               (basic_string *)(*(long *)(this + 8) + -8));
    __stubs::__ZNSs6assignERKSs(plVar8,&local_68);
    if ((undefined *)(local_68 + -0x18) == __got::__ZNSs4_Rep20_S_empty_rep_storageE) {
      return;
    }
    LOCK();
    piVar1 = (int *)(local_68 + -8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (0 < iVar3) {
      return;
    }
    __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE((undefined *)(local_68 + -0x18),local_60);
    return;
  }
  uVar5 = lVar11 - *(long *)this >> 3;
  uVar9 = 1;
  if (uVar5 != 0) {
    if (uVar5 == 0x1fffffffffffffff) goto LAB_100019a22;
    uVar9 = lVar11 - *(long *)this >> 2;
  }
  if (uVar9 < uVar5) {
    uVar9 = 0x1fffffffffffffff;
  }
  else {
    plVar12 = (long *)param_2;
    if (0x1fffffffffffffff < uVar9) {
      do {
        uVar7 = __stubs::__ZSt17__throw_bad_allocv();
        uVar7 = ___clang_call_terminate(uVar7);
        __stubs::___cxa_begin_catch(uVar7);
        puVar4 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
        param_2 = (basic_string *)plVar12;
        if (plVar12 != unaff_R12) {
          param_2 = (basic_string *)&local_50;
          plVar8 = plVar12;
          do {
            puVar2 = (undefined *)(*plVar8 + -0x18);
            if (puVar2 != puVar4) {
              LOCK();
              piVar1 = (int *)(*plVar8 + -8);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              if (iVar3 < 1) {
                __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,param_2);
              }
            }
            plVar8 = plVar8 + 1;
          } while (unaff_R12 != plVar8);
        }
        if (plVar12 != (long *)0x0) {
          __stubs::__ZdlPv();
        }
        __stubs::___cxa_rethrow();
LAB_100019a22:
        __stubs::__ZSt20__throw_length_errorPKc("vector::_M_insert_aux");
        plVar12 = (long *)param_2;
      } while( true );
    }
  }
  lVar6 = __stubs::__Znwm(uVar9 * 8);
  lVar11 = *(long *)this;
  lVar13 = lVar11 - (long)plVar8;
  if (lVar13 == 0) {
    lVar13 = 0;
    lVar11 = lVar6;
    if (lVar6 == 0) goto LAB_1000197e4;
  }
  else {
    lVar10 = 0;
    do {
      if (lVar6 + lVar10 != 0) {
        __stubs::__ZNSsC1ERKSs(lVar6 + lVar10,lVar11 + lVar10);
      }
      lVar10 = lVar10 + 8;
    } while (lVar13 + lVar10 != 0);
    lVar11 = lVar10 + lVar6;
  }
  lVar13 = lVar11;
  __stubs::__ZNSsC1ERKSs(lVar13,param_2);
LAB_1000197e4:
  lVar11 = lVar13 + 8;
  plVar12 = *(long **)(this + 8);
  if (plVar12 != plVar8) {
    lVar11 = 0;
    do {
      __stubs::__ZNSsC1ERKSs(lVar13 + 8 + lVar11,(long)plVar8 + lVar11);
      lVar11 = lVar11 + 8;
    } while ((long)plVar8 + (lVar11 - (long)plVar12) != 0);
    plVar8 = *(long **)(this + 8);
    lVar11 = lVar13 + 8 + lVar11;
  }
  puVar4 = __got::__ZNSs4_Rep20_S_empty_rep_storageE;
  plVar12 = *(long **)this;
  if (plVar12 != plVar8) {
    do {
      puVar2 = (undefined *)(*plVar12 + -0x18);
      if (puVar2 != puVar4) {
        LOCK();
        piVar1 = (int *)(*plVar12 + -8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar3 < 1) {
          __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(puVar2,local_48);
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar8 != plVar12);
    plVar8 = *(long **)this;
  }
  if (plVar8 != (long *)0x0) {
    __stubs::__ZdlPv();
  }
  *(long *)this = lVar6;
  *(long *)(this + 8) = lVar11;
  *(ulong *)(this + 0x10) = lVar6 + uVar9 * 8;
  return;
}



// std::basic_string<char, std::char_traits<char>, std::allocator<char> >*
// std::__copy_backward<false, std::random_access_iterator_tag>::__copy_b<std::basic_string<char,
// std::char_traits<char>, std::allocator<char> >*, std::basic_string<char, std::char_traits<char>,
// std::allocator<char> >*>(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*,
// std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::basic_string<char,
// std::char_traits<char>, std::allocator<char> >*)

basic_string *
std::__copy_backward<false,std::random_access_iterator_tag>::
__copy_b_std__basic_string_char_std__char_traits_char__std__allocator_char____std__basic_string_char_std__char_traits_char__std__allocator_char____
          (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  long lVar2;
  ulong uVar3;
  basic_string *pbVar5;
  long lVar4;
  
  if (0 < (long)param_2 - (long)param_1) {
    lVar2 = (long)param_2 - (long)param_1 >> 3;
    lVar4 = -1;
    if (lVar2 != 2 && -3 < -lVar2) {
      lVar4 = -lVar2;
    }
    uVar3 = lVar4 + lVar2;
    pbVar1 = param_3 + -8;
    pbVar5 = param_2 + -8;
    do {
      __stubs::__ZNSs6assignERKSs(pbVar1,pbVar5);
      lVar2 = lVar2 + -1;
      pbVar1 = pbVar1 + -8;
      pbVar5 = pbVar5 + -8;
    } while (0 < lVar2);
    param_3 = param_3 + ~uVar3 * 8;
  }
  return param_3;
}



// MTPFactory::CreateRepository(DeviceID const&)

MTPRepository * MTPFactory::CreateRepository(DeviceID *param_1)

{
  MTPRepository *this;
  
  _trace(0);
  this = (MTPRepository *)__stubs::__Znwm(0x90);
  MTPRepository::MTPRepository(this,param_1);
  return this;
}



// MTPFactory::Init()

void MTPFactory::Init(void)

{
  _trace(0);
  __stubs::_LIBMTP_Init();
  __stubs::_LIBMTP_Set_Load_Cache_On_Demand(1);
  return;
}



// MTPFactory::GetConnectedDeviceIDs(std::vector<DeviceID, std::allocator<DeviceID> >&)

ulong MTPFactory::GetConnectedDeviceIDs(vector *param_1)

{
  int iVar1;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  void *local_30;
  
  local_30 = (void *)0x0;
  local_34 = 0;
  iVar1 = __stubs::_LIBMTP_Detect_Raw_Devices(&local_30,&local_34);
  if ((((iVar1 == 5) || (local_30 == (void *)0x0)) || (local_34 == 0)) || (iVar1 != 0)) {
    bVar3 = 0;
    _trace(3);
    uVar2 = extraout_RAX;
  }
  else {
    if (0 < local_34) {
      iVar1 = 0;
      lVar4 = 0x20;
      do {
        local_40 = (uint)*(ushort *)((long)local_30 + lVar4 + -0x18);
        local_3c = (uint)*(ushort *)((long)local_30 + lVar4 + -8);
        local_38 = *(undefined4 *)((long)local_30 + lVar4);
        std::vector<DeviceID,std::allocator<DeviceID>>::push_back
                  ((vector_DeviceID_std__allocator_DeviceID__ *)param_1,(DeviceID *)&local_40);
        lVar4 = lVar4 + 0x28;
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_34);
    }
    __stubs::_free(local_30);
    bVar3 = 1;
    uVar2 = extraout_RAX_00;
  }
  return uVar2 & 0xffffffffffffff00 | (ulong)bVar3;
}



// std::vector<DeviceID, std::allocator<DeviceID> >::push_back(DeviceID const&)

void __thiscall
std::vector<DeviceID,std::allocator<DeviceID>>::push_back
          (vector_DeviceID_std__allocator_DeviceID__ *this,DeviceID *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != *(undefined8 **)(this + 0x10)) {
    lVar2 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
      *puVar1 = *(undefined8 *)param_1;
      lVar2 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar2 + 0xc;
    return;
  }
  _M_insert_aux(this,(__normal_iterator)puVar1,param_1);
  return;
}



// std::vector<DeviceID, std::allocator<DeviceID>
// >::_M_insert_aux(__gnu_cxx::__normal_iterator<DeviceID*, std::vector<DeviceID,
// std::allocator<DeviceID> > >, DeviceID const&)

void __thiscall
std::vector<DeviceID,std::allocator<DeviceID>>::_M_insert_aux
          (vector_DeviceID_std__allocator_DeviceID__ *this,__normal_iterator param_1,
          DeviceID *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  objc_class *poVar8;
  objc_class *poVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 in_register_00000034;
  undefined8 *puVar13;
  code *pcVar14;
  undefined auVar15 [16];
  
  puVar13 = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar4 != *(undefined8 **)(this + 0x10)) {
    lVar10 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar4 + -4);
      *puVar4 = *(undefined8 *)((long)puVar4 + -0xc);
      lVar10 = *(long *)(this + 8);
    }
    *(long *)(this + 8) = lVar10 + 0xc;
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar6 = *(undefined8 *)param_2;
    puVar4 = (undefined8 *)(lVar10 + -0xc);
    if (0 < (long)puVar4 - (long)puVar13) {
      lVar10 = ((long)puVar4 - (long)puVar13 >> 2) * -0x5555555555555555;
      do {
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar4 + -4);
        *puVar4 = *(undefined8 *)((long)puVar4 + -0xc);
        puVar4 = (undefined8 *)((long)puVar4 + -0xc);
        lVar10 = lVar10 + -1;
      } while (0 < lVar10);
    }
    *(undefined4 *)(puVar13 + 1) = uVar1;
    *puVar13 = uVar6;
    return;
  }
  lVar10 = (long)puVar4 - *(long *)this >> 2;
  uVar11 = lVar10 * -0x5555555555555555;
  uVar12 = 1;
  if (uVar11 == 0) {
LAB_100019d14:
    if (uVar12 < uVar11) {
      uVar12 = 0x1555555555555555;
LAB_100019d31:
      puVar5 = (undefined8 *)__stubs::__Znwm(uVar12 * 0xc);
      puVar2 = *(undefined8 **)this;
      puVar4 = puVar5;
      if (puVar2 != puVar13) {
        lVar10 = 0;
        do {
          if ((long)puVar5 + lVar10 != 0) {
            *(undefined4 *)((long)puVar5 + lVar10 + 8) = *(undefined4 *)((long)puVar2 + lVar10 + 8);
            *(undefined8 *)((long)puVar5 + lVar10) = *(undefined8 *)((long)puVar2 + lVar10);
          }
          lVar10 = lVar10 + 0xc;
        } while ((long)puVar13 - (long)puVar2 != lVar10);
        puVar4 = (undefined8 *)
                 ((long)puVar5 + ((ulong)((long)puVar13 + (-0xc - (long)puVar2)) / 0xc) * 0xc + 0xc)
        ;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 8);
        *puVar4 = *(undefined8 *)param_2;
      }
      puVar2 = *(undefined8 **)(this + 8);
      if (puVar2 == puVar13) {
        lVar10 = (long)puVar4 + 0xc;
      }
      else {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puVar4 + lVar10 + 0x14) =
               *(undefined4 *)((long)puVar13 + lVar10 + 8);
          *(undefined8 *)((long)puVar4 + lVar10 + 0xc) = *(undefined8 *)((long)puVar13 + lVar10);
          lVar10 = lVar10 + 0xc;
        } while ((long)puVar2 - (long)puVar13 != lVar10);
        lVar10 = (long)puVar4 + ((ulong)((long)puVar2 + (-0xc - (long)puVar13)) / 0xc) * 0xc + 0x18;
      }
      if (*(long *)this != 0) {
        __stubs::__ZdlPv();
      }
      *(undefined8 **)this = puVar5;
      *(long *)(this + 8) = lVar10;
      *(ulong *)(this + 0x10) = (long)puVar5 + uVar12 * 0xc;
      return;
    }
    if (uVar12 < 0x1555555555555556) goto LAB_100019d31;
    __stubs::__ZSt17__throw_bad_allocv();
  }
  else if (uVar11 != 0x1555555555555555) {
    uVar12 = lVar10 * 0x5555555555555556;
    goto LAB_100019d14;
  }
  __stubs::__ZSt20__throw_length_errorPKc("vector::_M_insert_aux");
  cVar3 = __stubs::_objc_collectingEnabled();
  if (cVar3 == '\0') {
    if (__got::_objc_retain != (undefined *)0x0) goto LAB_100019e94;
    pcVar14 = add_image_hook_ARC;
  }
  else {
    if (__got::_objc_autoreleasePoolPush != (undefined *)0x0) goto LAB_100019e94;
    pcVar14 = add_image_hook_GC;
  }
  __stubs::__dyld_register_func_for_add_image(pcVar14);
LAB_100019e94:
  uVar6 = __stubs::_objc_getClass("NSArray");
  cVar3 = __stubs::_class_respondsToSelector(uVar6,"objectAtIndexedSubscript:");
  if (cVar3 == '\0') {
    auVar15 = __stubs::_protocol_getMethodDescription
                        (&objc::protocol_t::__ARCLiteIndexedSubscripting__,
                         "objectAtIndexedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar6,SUB168(auVar15,0),__arclite_NSArray_objectAtIndexedSubscript,
               SUB168(auVar15 >> 0x40,0));
  }
  uVar6 = __stubs::_objc_getClass("NSMutableArray");
  cVar3 = __stubs::_class_respondsToSelector(uVar6,"setObject:atIndexedSubscript:");
  if (cVar3 == '\0') {
    auVar15 = __stubs::_protocol_getMethodDescription
                        (&objc::protocol_t::__ARCLiteIndexedSubscripting__,
                         "setObject:atIndexedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar6,SUB168(auVar15,0),__arclite_NSMutableArray_setObject_atIndexedSubscript,
               SUB168(auVar15 >> 0x40,0));
  }
  uVar6 = __stubs::_objc_getClass("NSDictionary");
  cVar3 = __stubs::_class_respondsToSelector(uVar6,"objectForKeyedSubscript:");
  if (cVar3 == '\0') {
    auVar15 = __stubs::_protocol_getMethodDescription
                        (&objc::protocol_t::__ARCLiteKeyedSubscripting__,"objectForKeyedSubscript:",
                         1,1);
    __stubs::_class_addMethod
              (uVar6,SUB168(auVar15,0),__arclite_NSDictionary_objectForKeyedSubscript,
               SUB168(auVar15 >> 0x40,0));
  }
  uVar6 = __stubs::_objc_getClass("NSMutableDictionary");
  cVar3 = __stubs::_class_respondsToSelector(uVar6,"setObject:forKeyedSubscript:");
  if (cVar3 == '\0') {
    auVar15 = __stubs::_protocol_getMethodDescription
                        (&objc::protocol_t::__ARCLiteKeyedSubscripting__,
                         "setObject:forKeyedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar6,SUB168(auVar15,0),__arclite_NSMutableDictionary__setObject_forKeyedSubscript,
               SUB168(auVar15 >> 0x40,0));
  }
  uVar6 = __stubs::_objc_getClass("NSOrderedSet");
  cVar3 = __stubs::_class_respondsToSelector(uVar6,"objectAtIndexedSubscript:");
  if (cVar3 == '\0') {
    auVar15 = __stubs::_protocol_getMethodDescription
                        (&objc::protocol_t::__ARCLiteIndexedSubscripting__,
                         "objectAtIndexedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar6,SUB168(auVar15,0),__arclite_NSOrderedSet_objectAtIndexedSubscript,
               SUB168(auVar15 >> 0x40,0));
  }
  uVar6 = __stubs::_objc_getClass("NSMutableOrderedSet");
  cVar3 = __stubs::_class_respondsToSelector(uVar6,"setObject:atIndexedSubscript:");
  if (cVar3 == '\0') {
    auVar15 = __stubs::_protocol_getMethodDescription
                        (&objc::protocol_t::__ARCLiteIndexedSubscripting__,
                         "setObject:atIndexedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar6,SUB168(auVar15,0),__arclite_NSMutableOrderedSet_setObject_atIndexedSubscript,
               SUB168(auVar15 >> 0x40,0));
  }
  lVar10 = __stubs::_dlopen("/usr/lib/libobjc.A.dylib",0x111);
  if (lVar10 != 0) {
    lVar7 = __stubs::_dlsym(lVar10,"objc_readClassPair");
    __stubs::_dlclose(lVar10);
    if (lVar7 == 0) {
      __stubs::__dyld_register_func_for_add_image(add_image_hook_swiftV1);
      lVar10 = __stubs::_objc_getClass("NSUndoManagerProxy");
      if ((lVar10 != 0) &&
         (NSUndoManagerProxy_targetClass =
               __stubs::_class_getInstanceVariable(lVar10,"_targetClass"),
         NSUndoManagerProxy_targetClass != 0)) {
        __stubs::_class_addMethod
                  (lVar10,"isKindOfClass:",__arclite_NSUndoManagerProxy_isKindOfClass,"@:#");
      }
      poVar8 = (objc_class *)__stubs::_objc_getClass("NSManagedObject");
      if (poVar8 != (objc_class *)0x0) {
        poVar9 = (objc_class *)__stubs::_object_getClass(poVar8);
        replaceMethod(poVar8,(objc_selector *)"init",__arclite_NSManagedObject_init,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSManagedObject_init);
        replaceMethod(poVar9,(objc_selector *)"allocWithEntity:",
                      __arclite_NSManagedObject_allocWithEntity,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSManagedObject_allocWithEntity);
        replaceMethod(poVar9,(objc_selector *)"allocBatch:withEntity:count:",
                      __arclite_NSManagedObject_allocBatch,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSManagedObject_allocBatch);
      }
      NSMutableDictionary_class = __stubs::_objc_getClass("NSMutableDictionary");
      NSConstantString_class = __stubs::_objc_getClass("NSConstantString");
      NSString_class = __stubs::_objc_getClass("NSString");
      CFStringGetCStringPtr_fn = __stubs::_dlsym(0xffffffffffffffff,"CFStringGetCStringPtr");
      poVar8 = (objc_class *)__stubs::_objc_getClass("NSKnownKeysMappingStrategy1");
      if (poVar8 != (objc_class *)0x0) {
        replaceMethod(poVar8,(objc_selector *)"fastIndexForKnownKey:",
                      __arclite_NSKKMS_fastIndexForKnownKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKMS_fastIndexForKnownKey);
        replaceMethod(poVar8,(objc_selector *)"indexForKey:",__arclite_NSKKMS_indexForKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKMS_indexForKey);
      }
      poVar8 = (objc_class *)__stubs::_objc_getClass("NSKnownKeysDictionary1");
      if (poVar8 != (objc_class *)0x0) {
        replaceMethod(poVar8,(objc_selector *)"objectForKey:",__arclite_NSKKsD_objectForKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_objectForKey);
        replaceMethod(poVar8,(objc_selector *)"removeObjectForKey:",
                      __arclite_NSKKsD_removeObjectForKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_removeObjectForKey);
        replaceMethod(poVar8,(objc_selector *)"setObject:forKey:",__arclite_NSKKsD_setObject_forKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_setObject_forKey);
        replaceMethod(poVar8,(objc_selector *)"addEntriesFromDictionary:",
                      __arclite_NSKKsD_addEntriesFromDictionary,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_addEntriesFromDictionary);
        return;
      }
    }
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// __ARCLite__load()

void __ARCLite__load(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  objc_class *poVar4;
  objc_class *poVar5;
  char cVar6;
  undefined extraout_AL;
  undefined extraout_AL_00;
  undefined extraout_AL_01;
  undefined extraout_AL_02;
  undefined extraout_AL_03;
  undefined extraout_AL_04;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  code *pcVar7;
  
  cVar6 = __stubs::_objc_collectingEnabled();
  if (cVar6 == '\0') {
    if (__got::_objc_retain != (undefined *)0x0) goto LAB_100019e94;
    pcVar7 = add_image_hook_ARC;
  }
  else {
    if (__got::_objc_autoreleasePoolPush != (undefined *)0x0) goto LAB_100019e94;
    pcVar7 = add_image_hook_GC;
  }
  __stubs::__dyld_register_func_for_add_image(pcVar7);
LAB_100019e94:
  uVar1 = __stubs::_objc_getClass("NSArray");
  cVar6 = __stubs::_class_respondsToSelector(uVar1,"objectAtIndexedSubscript:");
  if (cVar6 == '\0') {
    __stubs::_protocol_getMethodDescription
              (&objc::protocol_t::__ARCLiteIndexedSubscripting__,"objectAtIndexedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar1,CONCAT71(extraout_var,extraout_AL),__arclite_NSArray_objectAtIndexedSubscript,
               extraout_RDX);
  }
  uVar1 = __stubs::_objc_getClass("NSMutableArray");
  cVar6 = __stubs::_class_respondsToSelector(uVar1,"setObject:atIndexedSubscript:");
  if (cVar6 == '\0') {
    __stubs::_protocol_getMethodDescription
              (&objc::protocol_t::__ARCLiteIndexedSubscripting__,"setObject:atIndexedSubscript:",1,1
              );
    __stubs::_class_addMethod
              (uVar1,CONCAT71(extraout_var_00,extraout_AL_00),
               __arclite_NSMutableArray_setObject_atIndexedSubscript,extraout_RDX_00);
  }
  uVar1 = __stubs::_objc_getClass("NSDictionary");
  cVar6 = __stubs::_class_respondsToSelector(uVar1,"objectForKeyedSubscript:");
  if (cVar6 == '\0') {
    __stubs::_protocol_getMethodDescription
              (&objc::protocol_t::__ARCLiteKeyedSubscripting__,"objectForKeyedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar1,CONCAT71(extraout_var_01,extraout_AL_01),
               __arclite_NSDictionary_objectForKeyedSubscript,extraout_RDX_01);
  }
  uVar1 = __stubs::_objc_getClass("NSMutableDictionary");
  cVar6 = __stubs::_class_respondsToSelector(uVar1,"setObject:forKeyedSubscript:");
  if (cVar6 == '\0') {
    __stubs::_protocol_getMethodDescription
              (&objc::protocol_t::__ARCLiteKeyedSubscripting__,"setObject:forKeyedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar1,CONCAT71(extraout_var_02,extraout_AL_02),
               __arclite_NSMutableDictionary__setObject_forKeyedSubscript,extraout_RDX_02);
  }
  uVar1 = __stubs::_objc_getClass("NSOrderedSet");
  cVar6 = __stubs::_class_respondsToSelector(uVar1,"objectAtIndexedSubscript:");
  if (cVar6 == '\0') {
    __stubs::_protocol_getMethodDescription
              (&objc::protocol_t::__ARCLiteIndexedSubscripting__,"objectAtIndexedSubscript:",1,1);
    __stubs::_class_addMethod
              (uVar1,CONCAT71(extraout_var_03,extraout_AL_03),
               __arclite_NSOrderedSet_objectAtIndexedSubscript,extraout_RDX_03);
  }
  uVar1 = __stubs::_objc_getClass("NSMutableOrderedSet");
  cVar6 = __stubs::_class_respondsToSelector(uVar1,"setObject:atIndexedSubscript:");
  if (cVar6 == '\0') {
    __stubs::_protocol_getMethodDescription
              (&objc::protocol_t::__ARCLiteIndexedSubscripting__,"setObject:atIndexedSubscript:",1,1
              );
    __stubs::_class_addMethod
              (uVar1,CONCAT71(extraout_var_04,extraout_AL_04),
               __arclite_NSMutableOrderedSet_setObject_atIndexedSubscript,extraout_RDX_04);
  }
  lVar2 = __stubs::_dlopen("/usr/lib/libobjc.A.dylib",0x111);
  if (lVar2 != 0) {
    lVar3 = __stubs::_dlsym(lVar2,"objc_readClassPair");
    __stubs::_dlclose(lVar2);
    if (lVar3 == 0) {
      __stubs::__dyld_register_func_for_add_image(add_image_hook_swiftV1);
      lVar2 = __stubs::_objc_getClass("NSUndoManagerProxy");
      if (lVar2 != 0) {
        NSUndoManagerProxy_targetClass = __stubs::_class_getInstanceVariable(lVar2,"_targetClass");
        if (NSUndoManagerProxy_targetClass != 0) {
          __stubs::_class_addMethod
                    (lVar2,"isKindOfClass:",__arclite_NSUndoManagerProxy_isKindOfClass,"@:#");
        }
      }
      poVar4 = (objc_class *)__stubs::_objc_getClass("NSManagedObject");
      if (poVar4 != (objc_class *)0x0) {
        poVar5 = (objc_class *)__stubs::_object_getClass(poVar4);
        replaceMethod(poVar4,(objc_selector *)"init",__arclite_NSManagedObject_init,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSManagedObject_init);
        replaceMethod(poVar5,(objc_selector *)"allocWithEntity:",
                      __arclite_NSManagedObject_allocWithEntity,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSManagedObject_allocWithEntity);
        replaceMethod(poVar5,(objc_selector *)"allocBatch:withEntity:count:",
                      __arclite_NSManagedObject_allocBatch,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSManagedObject_allocBatch);
      }
      NSMutableDictionary_class = __stubs::_objc_getClass("NSMutableDictionary");
      NSConstantString_class = __stubs::_objc_getClass("NSConstantString");
      NSString_class = __stubs::_objc_getClass("NSString");
      CFStringGetCStringPtr_fn = __stubs::_dlsym(0xffffffffffffffff,"CFStringGetCStringPtr");
      poVar4 = (objc_class *)__stubs::_objc_getClass("NSKnownKeysMappingStrategy1");
      if (poVar4 != (objc_class *)0x0) {
        replaceMethod(poVar4,(objc_selector *)"fastIndexForKnownKey:",
                      __arclite_NSKKMS_fastIndexForKnownKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKMS_fastIndexForKnownKey);
        replaceMethod(poVar4,(objc_selector *)"indexForKey:",__arclite_NSKKMS_indexForKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKMS_indexForKey);
      }
      poVar4 = (objc_class *)__stubs::_objc_getClass("NSKnownKeysDictionary1");
      if (poVar4 != (objc_class *)0x0) {
        replaceMethod(poVar4,(objc_selector *)"objectForKey:",__arclite_NSKKsD_objectForKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_objectForKey);
        replaceMethod(poVar4,(objc_selector *)"removeObjectForKey:",
                      __arclite_NSKKsD_removeObjectForKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_removeObjectForKey);
        replaceMethod(poVar4,(objc_selector *)"setObject:forKey:",__arclite_NSKKsD_setObject_forKey,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_setObject_forKey);
        replaceMethod(poVar4,(objc_selector *)"addEntriesFromDictionary:",
                      __arclite_NSKKsD_addEntriesFromDictionary,
                      (_func_objc_object_ptr_objc_object_objc_selector____ *)
                      &original_NSKKsD_addEntriesFromDictionary);
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// add_image_hook_swiftV1(mach_header const*, long)

void add_image_hook_swiftV1(mach_header *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (add_image_hook_swiftV1(mach_header_const*,long)::dlh == '\0') {
    add_image_hook_swiftV1(mach_header_const*,long)::dlh =
         __stubs::_dlopen("/usr/lib/libobjc.A.dylib",0x111);
    add_image_hook_swiftV1(mach_header_const*,long)::dlh = '\x01';
  }
  if (add_image_hook_swiftV1(mach_header_const*,long)::patches == '\0') {
    _patches = "_objc_readClassPair";
    _DAT_100036cb8 = __arclite_objc_readClassPair;
    _DAT_100036cc0 = 0;
    _DAT_100036cc8 = "_objc_allocateClassPair";
    _DAT_100036cd0 = __arclite_objc_allocateClassPair;
    DAT_100036cd8 = &original_objc_allocateClassPair;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,
                            "objc_allocateClassPair");
    *DAT_100036cd8 = uVar1;
    _DAT_100036ce0 = "_object_getIndexedIvars";
    _DAT_100036ce8 = __arclite_object_getIndexedIvars;
    DAT_100036cf0 = &original_object_getIndexedIvars;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,
                            "object_getIndexedIvars");
    *DAT_100036cf0 = uVar1;
    _DAT_100036cf8 = "_objc_getClass";
    _DAT_100036d00 = __arclite_objc_getClass;
    DAT_100036d08 = &original_objc_getClass;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,"objc_getClass");
    *DAT_100036d08 = uVar1;
    _DAT_100036d10 = "_objc_getMetaClass";
    _DAT_100036d18 = __arclite_objc_getMetaClass;
    DAT_100036d20 = &original_objc_getMetaClass;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,"objc_getMetaClass"
                           );
    *DAT_100036d20 = uVar1;
    _DAT_100036d28 = "_objc_getRequiredClass";
    _DAT_100036d30 = __arclite_objc_getRequiredClass;
    DAT_100036d38 = &original_objc_getRequiredClass;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,
                            "objc_getRequiredClass");
    *DAT_100036d38 = uVar1;
    _DAT_100036d40 = "_objc_lookUpClass";
    _DAT_100036d48 = __arclite_objc_lookUpClass;
    DAT_100036d50 = &original_objc_lookUpClass;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,"objc_lookUpClass")
    ;
    *DAT_100036d50 = uVar1;
    _DAT_100036d58 = "_objc_getProtocol";
    _DAT_100036d60 = __arclite_objc_getProtocol;
    DAT_100036d68 = &original_objc_getProtocol;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,"objc_getProtocol")
    ;
    *DAT_100036d68 = uVar1;
    _DAT_100036d70 = "_class_getName";
    _DAT_100036d78 = __arclite_class_getName;
    DAT_100036d80 = &original_class_getName;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,"class_getName");
    *DAT_100036d80 = uVar1;
    _DAT_100036d88 = "_protocol_getName";
    _DAT_100036d90 = __arclite_protocol_getName;
    DAT_100036d98 = &original_protocol_getName;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,"protocol_getName")
    ;
    *DAT_100036d98 = uVar1;
    _DAT_100036da0 = "_objc_copyClassNamesForImage";
    _DAT_100036da8 = __arclite_objc_copyClassNamesForImage;
    DAT_100036db0 = &original_objc_copyClassNamesForImage;
    uVar1 = __stubs::_dlsym(add_image_hook_swiftV1(mach_header_const*,long)::dlh,
                            "objc_copyClassNamesForImage");
    *DAT_100036db0 = uVar1;
    add_image_hook_swiftV1(mach_header_const*,long)::patches = '\x01';
  }
  patch_lazy_pointers(param_1,(patch_t *)&add_image_hook_swiftV1(mach_header_const*,long)::patches,
                      0xb);
  return;
}



// __arclite_NSUndoManagerProxy_isKindOfClass(objc_object*, objc_selector*, objc_class*)

undefined8
__arclite_NSUndoManagerProxy_isKindOfClass
          (objc_object *param_1,objc_selector *param_2,objc_class *param_3)

{
  objc_class *poVar1;
  
  poVar1 = (objc_class *)__stubs::_object_getIvar(param_1,NSUndoManagerProxy_targetClass);
  while( true ) {
    if (poVar1 == (objc_class *)0x0) {
      return 0;
    }
    if (poVar1 == param_3) break;
    poVar1 = (objc_class *)__stubs::_class_getSuperclass(poVar1);
  }
  return 1;
}



// replaceMethod(objc_class*, objc_selector*, objc_object* (*)(objc_object, objc_selector, ...),
// objc_object* (*)(objc_object, objc_selector, ...))

void replaceMethod(objc_class *param_1,objc_selector *param_2,
                  _func_objc_object_ptr_objc_object_objc_selector____ *param_3,
                  _func_objc_object_ptr_objc_object_objc_selector____ *param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = __stubs::_class_getInstanceMethod();
  if (lVar1 == 0) {
    pcVar2 = arclite_uninitialized_function;
  }
  else {
    pcVar2 = (code *)__stubs::_method_setImplementation(lVar1,param_3);
  }
  *(code **)param_4 = pcVar2;
  return;
}



// __arclite_NSManagedObject_init(objc_object*, objc_selector*)

void __arclite_NSManagedObject_init(objc_object *param_1,objc_selector *param_2)

{
  objc_object *poVar1;
  
  poVar1 = (objc_object *)(*original_NSManagedObject_init)();
  cxxConstruct(poVar1);
  return;
}



// __arclite_NSManagedObject_allocWithEntity(objc_object*, objc_selector*, objc_object*)

void __arclite_NSManagedObject_allocWithEntity
               (objc_object *param_1,objc_selector *param_2,objc_object *param_3)

{
  objc_object *poVar1;
  
  poVar1 = (objc_object *)(*original_NSManagedObject_allocWithEntity)();
  cxxConstruct(poVar1);
  return;
}



// __arclite_NSManagedObject_allocBatch(objc_object*, objc_selector*, objc_object**, objc_object*,
// unsigned int)

int __arclite_NSManagedObject_allocBatch
              (objc_object *param_1,objc_selector *param_2,objc_object **param_3,
              objc_object *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*original_NSManagedObject_allocBatch)();
  for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
    cxxConstruct(*param_3);
    param_3 = param_3 + 1;
  }
  return iVar1;
}



// __arclite_NSKKMS_fastIndexForKnownKey(objc_object*, objc_selector*, objc_object*)

undefined8
__arclite_NSKKMS_fastIndexForKnownKey
          (objc_object *param_1,objc_selector *param_2,objc_object *param_3)

{
  objc_object *poVar1;
  undefined8 uVar2;
  
  poVar1 = (objc_object *)fixStringForCoreData(param_3);
  uVar2 = (*original_NSKKMS_fastIndexForKnownKey)(param_1,param_2,poVar1);
  if (poVar1 != param_3) {
    (*(code *)0x10002f0f0)(poVar1,"release");
  }
  return uVar2;
}



// __arclite_NSKKMS_indexForKey(objc_object*, objc_selector*, objc_object*)

undefined8
__arclite_NSKKMS_indexForKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3)

{
  objc_object *poVar1;
  undefined8 uVar2;
  
  poVar1 = (objc_object *)fixStringForCoreData(param_3);
  uVar2 = (*original_NSKKMS_indexForKey)(param_1,param_2,poVar1);
  if (poVar1 != param_3) {
    (*(code *)0x10002f0f0)(poVar1,"release");
  }
  return uVar2;
}



// __arclite_NSKKsD_objectForKey(objc_object*, objc_selector*, objc_object*)

undefined8
__arclite_NSKKsD_objectForKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3)

{
  objc_object *poVar1;
  undefined8 uVar2;
  
  poVar1 = (objc_object *)fixStringForCoreData(param_3);
  uVar2 = (*original_NSKKsD_objectForKey)(param_1,param_2,poVar1);
  if (poVar1 != param_3) {
    (*(code *)0x10002f0f0)(poVar1,"release");
  }
  return uVar2;
}



// __arclite_NSKKsD_removeObjectForKey(objc_object*, objc_selector*, objc_object*)

void __arclite_NSKKsD_removeObjectForKey
               (objc_object *param_1,objc_selector *param_2,objc_object *param_3)

{
  objc_object *poVar1;
  
  poVar1 = (objc_object *)fixStringForCoreData(param_3);
  (*original_NSKKsD_removeObjectForKey)(param_1,param_2,poVar1);
  if (poVar1 != param_3) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f0)(poVar1,"release");
    return;
  }
  return;
}



// __arclite_NSKKsD_setObject_forKey(objc_object*, objc_selector*, objc_object*, objc_object*)

void __arclite_NSKKsD_setObject_forKey
               (objc_object *param_1,objc_selector *param_2,objc_object *param_3,
               objc_object *param_4)

{
  objc_object *poVar1;
  
  poVar1 = (objc_object *)fixStringForCoreData(param_4);
  (*original_NSKKsD_setObject_forKey)(param_1,param_2,param_3,poVar1);
  if (poVar1 != param_4) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f0)(poVar1,"release");
    return;
  }
  return;
}



// __arclite_NSKKsD_addEntriesFromDictionary(objc_object*, objc_selector*, NSDictionary*)

void __arclite_NSKKsD_addEntriesFromDictionary
               (objc_object *param_1,objc_selector *param_2,NSDictionary *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  objc_object *poVar3;
  objc_object *poVar4;
  undefined8 uVar5;
  
  uVar1 = (*(code *)0x10002f0f0)(NSMutableDictionary_class,"alloc");
  uVar1 = (*(code *)0x10002f0f0)(uVar1,"init");
  uVar2 = (*(code *)0x10002f0f0)(param_3,"keyEnumerator");
  poVar3 = (objc_object *)(*(code *)0x10002f0f0)(uVar2,"nextObject");
  while (poVar3 != (objc_object *)0x0) {
    poVar4 = (objc_object *)fixStringForCoreData(poVar3);
    uVar5 = (*(code *)0x10002f0f0)(param_3,"objectForKey:",poVar3);
    (*(code *)0x10002f0f0)(uVar1,"setObject:forKey:",uVar5,poVar4);
    if (poVar4 != poVar3) {
      (*(code *)0x10002f0f0)(poVar4,"release");
    }
    poVar3 = (objc_object *)(*(code *)0x10002f0f0)(uVar2,"nextObject");
  }
  (*original_NSKKsD_addEntriesFromDictionary)(param_1,param_2,uVar1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(uVar1,"release");
  return;
}



// fixStringForCoreData(objc_object*)

objc_object * fixStringForCoreData(objc_object *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  lVar1 = __stubs::_object_getClass();
  if ((lVar1 != 0) && (lVar1 != NSConstantString_class)) {
    lVar1 = (*CFStringGetCStringPtr_fn)(param_1,0x600);
    if (lVar1 == 0) {
      lVar1 = (*(code *)0x10002f0f0)(param_1,"lengthOfBytesUsingEncoding:",4);
      pvVar2 = __stubs::_malloc(lVar1 + 1U);
      (*(code *)0x10002f0f0)(param_1,"getCString:maxLength:encoding:",pvVar2,lVar1 + 1U,4);
      uVar3 = (*(code *)0x10002f0f0)(NSString_class,"alloc");
      param_1 = (objc_object *)
                (*(code *)0x10002f0f0)(uVar3,"initWithBytes:length:encoding:",pvVar2,lVar1,4);
      __stubs::_free(pvVar2);
    }
  }
  return param_1;
}



// cxxConstruct(objc_object*)

undefined8 cxxConstruct(objc_object *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (objc_object *)0x0) {
    uVar1 = __stubs::_object_getClass(param_1);
    uVar1 = __stubs::_objc_constructInstance(uVar1,param_1);
    return uVar1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// arclite_uninitialized_function()

void arclite_uninitialized_function(void)

{
  do {
    invalidInstructionException();
  } while( true );
}



// __arclite_objc_readClassPair(objc_class*, objc_image_info const*)

objc_class * __arclite_objc_readClassPair(objc_class *param_1,objc_image_info *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  undefined8 uVar18;
  objc_class *poVar19;
  objc_class *poVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  int *piVar28;
  
  lVar1 = *(long *)__got::___stack_chk_guard;
  puVar2 = *(undefined8 **)param_1;
  uVar24 = *(ulong *)(param_1 + 0x20);
  piVar28 = (int *)(uVar24 & 0x7ffffffffff8);
  if (*piVar28 < 0) {
    piVar28 = *(int **)(piVar28 + 2);
  }
  uVar25 = puVar2[4];
  piVar17 = (int *)(uVar25 & 0x7ffffffffff8);
  if (*piVar17 < 0) {
    piVar17 = *(int **)(piVar17 + 2);
  }
  if ((*(long *)(param_1 + 8) != 0) || (poVar19 = (objc_class *)0x0, (*(byte *)piVar28 & 2) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)param_1;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar8 = puVar2[4];
    uVar9 = puVar2[3];
    uVar10 = puVar2[2];
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar18 = (*(code *)0x10002f0f0)(*(long *)(param_1 + 8),"self");
    __stubs::_bzero(param_1,0x28);
    __stubs::_bzero(puVar2,0x28);
    poVar19 = (objc_class *)
              __stubs::_objc_initializeClassPair(uVar18,*(undefined8 *)(piVar28 + 6),param_1,puVar2)
    ;
    if (poVar19 == (objc_class *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)param_1 = uVar6;
      puVar2[4] = uVar8;
      puVar2[3] = uVar9;
      puVar2[2] = uVar10;
      puVar2[1] = uVar12;
      *puVar2 = uVar11;
      poVar19 = (objc_class *)0x0;
    }
    else {
      poVar20 = (objc_class *)__stubs::_object_getClass();
      *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) | uVar24 & 0xffff800000000007;
      puVar2[4] = puVar2[4] | uVar25 & 0xffff800000000007;
      piVar27 = (int *)(*(ulong *)(poVar19 + 0x20) & 0x7ffffffffff8);
      if (*piVar27 < 0) {
        piVar27 = *(int **)(piVar27 + 2);
      }
      piVar13 = *(int **)(piVar28 + 0xc);
      if (piVar13 != (int *)0x0) {
        uVar21 = piVar13[1];
        uVar24 = 0;
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar26 = 0;
          uVar25 = 0;
          uVar15 = uVar21;
          do {
            iVar22 = *(int *)((long)piVar13 + uVar26 + 0x20);
            uVar23 = 1 << ((byte)iVar22 & 0x1f);
            if (iVar22 == -1) {
              uVar23 = 8;
            }
            uVar24 = (ulong)uVar23;
            if (uVar23 <= (uint)uVar25) {
              uVar24 = uVar25;
            }
            uVar26 = (ulong)(uint)((int)uVar26 + *piVar13);
            uVar15 = uVar15 - 1;
            uVar25 = uVar24;
            uVar23 = uVar21;
          } while (uVar15 != 0);
        }
        uVar21 = piVar27[1];
        iVar22 = (int)((ulong)uVar21 % uVar24);
        if (iVar22 != 0) {
          uVar21 = (uVar21 + (int)uVar24) - iVar22;
          piVar27[1] = uVar21;
        }
        uVar15 = piVar28[1];
        uVar16 = uVar15;
        if (uVar21 < uVar15) {
          piVar27[1] = uVar15;
          uVar16 = piVar28[1];
          uVar21 = uVar15;
        }
        piVar27[2] = piVar28[2] + (uVar21 - uVar16);
        if (uVar23 != 0) {
          uVar15 = 0;
          do {
            piVar14 = *(int **)((long)piVar13 + (ulong)(*piVar13 * uVar15) + 8);
            if (piVar14 != (int *)0x0) {
              *piVar14 = *piVar14 + (uVar21 - uVar16);
              uVar23 = piVar13[1];
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar23);
        }
        if ((*(byte *)piVar28 & 0x80) == 0) {
          *(char **)(piVar27 + 4) = "";
          *(char **)(piVar27 + 0xe) = "";
        }
        else {
          *(undefined8 *)(piVar27 + 4) = *(undefined8 *)(piVar28 + 4);
          *(undefined8 *)(piVar27 + 0xe) = *(undefined8 *)(piVar28 + 0xe);
          *(byte *)piVar27 = *(byte *)piVar27 | 0x80;
        }
        *(int **)(piVar27 + 0xc) = piVar13;
      }
      transcribeMethods(poVar19,(glue_class_ro_t *)piVar28);
      transcribeMethods(poVar20,(glue_class_ro_t *)piVar17);
      transcribeProtocols(poVar19,(glue_class_ro_t *)piVar28);
      transcribeProtocols(poVar20,(glue_class_ro_t *)piVar17);
      transcribeProperties(poVar19,(glue_class_ro_t *)piVar28);
      transcribeProperties(poVar20,(glue_class_ro_t *)piVar17);
      if ((*(byte *)piVar28 & 2) != 0) {
        __stubs::_class_addMethod(poVar20,"initialize",initialize_imp,"v@:");
      }
      __stubs::_objc_registerClassPair(poVar19);
    }
  }
  if (*(long *)__got::___stack_chk_guard != lVar1) {
    poVar19 = (objc_class *)__stubs::___stack_chk_fail();
    return poVar19;
  }
  return poVar19;
}



// __arclite_objc_allocateClassPair(glue_swift_class_t*, char const*, unsigned long)

void __arclite_objc_allocateClassPair(glue_swift_class_t *param_1,char *param_2,ulong param_3)

{
  glue_swift_class_t *pgVar1;
  long lVar2;
  long lVar3;
  
  pgVar1 = (glue_swift_class_t *)__stubs::_object_getClass();
  if ((((byte)param_1[0x20] & 1) == 0) && (((byte)pgVar1[0x20] & 1) == 0)) {
                    // WARNING: Could not recover jumptable at 0x00010001ae80. Too many branches
                    // WARNING: Treating indirect jump as call
    (*original_objc_allocateClassPair)(param_1,param_2,param_3);
    return;
  }
  lVar2 = allocateMaybeSwift(param_1,param_3);
  lVar3 = allocateMaybeSwift(pgVar1,param_3);
  __stubs::_objc_initializeClassPair(param_1,param_2,lVar2,lVar3);
  *(ulong *)(lVar2 + 0x20) = *(ulong *)(lVar2 + 0x20) | *(ulong *)(param_1 + 0x20) & 1;
  *(ulong *)(lVar3 + 0x20) = *(ulong *)(lVar3 + 0x20) | *(ulong *)(pgVar1 + 0x20) & 1;
  return;
}



// __arclite_object_getIndexedIvars(objc_object*)

objc_object * __arclite_object_getIndexedIvars(objc_object *param_1)

{
  char cVar1;
  undefined8 uVar2;
  objc_object *poVar3;
  
  poVar3 = (objc_object *)0x0;
  if (param_1 != (objc_object *)0x0) {
    uVar2 = __stubs::_object_getClass(param_1);
    cVar1 = __stubs::_class_isMetaClass(uVar2);
    if ((cVar1 == '\0') || (((byte)param_1[0x20] & 1) == 0)) {
                    // WARNING: Could not recover jumptable at 0x00010001aece. Too many branches
                    // WARNING: Treating indirect jump as call
      poVar3 = (objc_object *)(*original_object_getIndexedIvars)(param_1);
      return poVar3;
    }
    poVar3 = param_1 + ((ulong)(*(int *)(param_1 + 0x38) + 7U & 0xfffffff8) -
                       (ulong)*(uint *)(param_1 + 0x3c));
  }
  return poVar3;
}



// __arclite_objc_getClass(char const*)

long __arclite_objc_getClass(char *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)copySwiftV1MangledName(param_1,false);
  if (pvVar1 != (void *)0x0) {
    lVar2 = __stubs::_objc_getClass(pvVar1);
    __stubs::_free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00010001af23. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar2 = (*original_objc_getClass)(param_1);
  return lVar2;
}



// __arclite_objc_getMetaClass(char const*)

long __arclite_objc_getMetaClass(char *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)copySwiftV1MangledName(param_1,false);
  if (pvVar1 != (void *)0x0) {
    lVar2 = __stubs::_objc_getMetaClass(pvVar1);
    __stubs::_free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00010001af78. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar2 = (*original_objc_getMetaClass)(param_1);
  return lVar2;
}



// __arclite_objc_getRequiredClass(char const*)

long __arclite_objc_getRequiredClass(char *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)copySwiftV1MangledName(param_1,false);
  if (pvVar1 != (void *)0x0) {
    lVar2 = __stubs::_objc_getRequiredClass(pvVar1);
    __stubs::_free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00010001afcd. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar2 = (*original_objc_getRequiredClass)(param_1);
  return lVar2;
}



// __arclite_objc_lookUpClass(char const*)

long __arclite_objc_lookUpClass(char *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)copySwiftV1MangledName(param_1,false);
  if (pvVar1 != (void *)0x0) {
    lVar2 = __stubs::_objc_lookUpClass(pvVar1);
    __stubs::_free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00010001b022. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar2 = (*original_objc_lookUpClass)(param_1);
  return lVar2;
}



// __arclite_objc_getProtocol(char const*)

long __arclite_objc_getProtocol(char *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)copySwiftV1MangledName(param_1,true);
  if (pvVar1 != (void *)0x0) {
    lVar2 = __stubs::_objc_getProtocol(pvVar1);
    __stubs::_free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00010001b07a. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar2 = (*original_objc_getProtocol)(param_1);
  return lVar2;
}



// __arclite_class_getName(objc_class*)

void __arclite_class_getName(objc_class *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*original_class_getName)();
  demangledName(pcVar1,false);
  return;
}



// __arclite_protocol_getName(Protocol*)

void __arclite_protocol_getName(Protocol *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*original_protocol_getName)();
  demangledName(pcVar1,true);
  return;
}



// __arclite_objc_copyClassNamesForImage(void*, unsigned int*)

long __arclite_objc_copyClassNamesForImage(void *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_2c;
  
  lVar1 = (*original_objc_copyClassNamesForImage)();
  if ((lVar1 != 0) && (local_2c != 0)) {
    uVar3 = 0;
    do {
      uVar2 = demangledName(*(char **)(lVar1 + (ulong)uVar3 * 8),false);
      *(undefined8 *)(lVar1 + (ulong)uVar3 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_2c);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_2c;
  }
  return lVar1;
}



// patch_lazy_pointers(mach_header const*, patch_t*, unsigned long)

void patch_lazy_pointers(mach_header *param_1,patch_t *param_2,ulong param_3)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  mach_header *pmVar8;
  dword *pdVar9;
  mach_header *pmVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  dword dVar14;
  bool bVar15;
  long local_80;
  long local_68;
  long local_60;
  long local_50;
  
  dVar1 = param_1->ncmds;
  if (dVar1 != 0) {
    pmVar10 = param_1 + 1;
    lVar12 = 0;
    local_80 = 0;
    pmVar8 = pmVar10;
    dVar14 = dVar1;
    do {
      if (pmVar8->magic == 0x19) {
        iVar5 = __stubs::_strcmp((char *)&pmVar8->cpusubtype,"__TEXT");
        if (iVar5 == 0) {
          local_80 = (long)param_1 - *(long *)&pmVar8->flags;
        }
        else {
          iVar5 = __stubs::_strcmp((char *)&pmVar8->cpusubtype,"__LINKEDIT");
          if (iVar5 == 0) {
            lVar12 = (*(long *)&pmVar8->flags + local_80) - *(long *)&pmVar8[1].cpusubtype;
          }
        }
      }
      pmVar8 = (mach_header *)((long)&pmVar8->magic + (ulong)pmVar8->cputype);
      dVar14 = dVar14 - 1;
    } while (dVar14 != 0);
    local_50 = 0;
    if ((lVar12 != 0) && (dVar1 != 0)) {
      local_60 = 0;
      local_68 = 0;
      pmVar8 = pmVar10;
      dVar14 = dVar1;
      do {
        if (pmVar8->magic == 0xb) {
          local_50 = (ulong)pmVar8[1].flags + lVar12;
        }
        else if (pmVar8->magic == 2) {
          local_68 = (ulong)pmVar8->ncmds + lVar12;
          local_60 = (ulong)pmVar8->cpusubtype + lVar12;
        }
        pmVar8 = (mach_header *)((long)&pmVar8->magic + (ulong)pmVar8->cputype);
        dVar14 = dVar14 - 1;
      } while (dVar14 != 0);
      if ((((local_60 != 0) && (local_68 != 0)) && (local_50 != 0)) && (dVar1 != 0)) {
        dVar14 = 0;
        do {
          if (pmVar10->magic == 0x19) {
            uVar2 = pmVar10[2].magic;
            for (pdVar9 = &pmVar10[2].cpusubtype;
                pdVar9 < (undefined *)((long)pmVar10 + (ulong)uVar2 * 0x50 + 0x48);
                pdVar9 = pdVar9 + 0x14) {
              if (*(char *)(pdVar9 + 0x10) == '\a') {
                uVar4 = *(ulong *)(pdVar9 + 10);
                uVar11 = 0;
                if (uVar4 >> 3 != 0) {
                  lVar12 = *(long *)(pdVar9 + 8);
                  iVar5 = pdVar9[0x11];
                  do {
                    uVar3 = *(uint *)(local_50 + (ulong)(uint)((int)uVar11 + iVar5) * 4);
                    if ((((ulong)uVar3 != 0x80000000) && (uVar3 != 0x40000000)) &&
                       (uVar3 = *(uint *)(local_60 + (ulong)uVar3 * 0x10), param_3 != 0)) {
                      uVar7 = 0;
                      uVar13 = 1;
                      do {
                        iVar6 = __stubs::_strcmp(*(char **)(param_2 + uVar7 * 0x18),
                                                 (char *)((ulong)uVar3 + local_68));
                        if (iVar6 == 0) {
                          *(undefined8 *)(lVar12 + local_80 + uVar11 * 8) =
                               *(undefined8 *)(param_2 + uVar7 * 0x18 + 8);
                          break;
                        }
                        bVar15 = uVar13 < param_3;
                        uVar7 = uVar13;
                        uVar13 = (ulong)((int)uVar13 + 1);
                      } while (bVar15);
                    }
                    uVar11 = (ulong)((int)uVar11 + 1);
                  } while (uVar11 < uVar4 >> 3);
                }
              }
            }
          }
          pmVar10 = (mach_header *)((long)&pmVar10->magic + (ulong)pmVar10->cputype);
          dVar14 = dVar14 + 1;
        } while (dVar14 != dVar1);
      }
    }
  }
  return;
}



// demangledName(char const*, bool)

char * demangledName(char *param_1,bool param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *datum;
  size_t sVar4;
  char *pcVar5;
  char *local_58;
  uint local_4c;
  char *local_48;
  uint local_3c;
  char *local_38;
  char *local_30;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar5 = "_TtC";
  if (param_2) {
    pcVar5 = "_TtP";
  }
  iVar3 = __stubs::_strncmp(param_1,pcVar5,4);
  if (iVar3 != 0) {
    return param_1;
  }
  __stubs::_pthread_mutex_lock((pthread_mutex_t *)&demangleLock);
  if (Demangled == (hash_table *)0x0) {
    Demangled = __stubs::_hash_create(0);
  }
  datum = (char *)__stubs::_hash_search(Demangled,param_1,(void *)0x0,(replace_func *)0x0);
  if (datum != (char *)0x0) goto LAB_10001b506;
  local_30 = param_1;
  iVar3 = __stubs::_strncmp(param_1,pcVar5,4);
  datum = (char *)0x0;
  if (iVar3 == 0) {
    pcVar5 = param_1 + 4;
    local_30 = pcVar5;
    sVar4 = __stubs::_strlen(pcVar5);
    pcVar1 = param_1 + sVar4 + 4;
    iVar3 = __stubs::_strncmp(pcVar5,"Ss",2);
    if (iVar3 == 0) {
      local_38 = "Swift";
      local_3c = 5;
      local_30 = param_1 + 6;
    }
    else {
      cVar2 = scanMangledField(&local_30,pcVar1,&local_38,(int *)&local_3c);
      datum = (char *)0x0;
      if (cVar2 == '\0') goto LAB_10001b4eb;
    }
    cVar2 = scanMangledField(&local_30,pcVar1,&local_48,(int *)&local_4c);
    datum = (char *)0x0;
    if (cVar2 != '\0') {
      if (param_2) {
        iVar3 = __stubs::_strcmp(local_30,"_");
        datum = (char *)0x0;
        if (iVar3 == 0) {
LAB_10001b4c6:
          __stubs::_asprintf(&local_58,"%.*s.%.*s",(ulong)local_3c,local_38,(ulong)local_4c,local_48
                            );
          datum = local_58;
        }
      }
      else {
        datum = (char *)0x0;
        if (local_30 == pcVar1) goto LAB_10001b4c6;
      }
    }
  }
LAB_10001b4eb:
  if (datum == (char *)0x0) {
    datum = param_1;
  }
  __stubs::_hash_search(Demangled,param_1,datum,(replace_func *)0x0);
LAB_10001b506:
  __stubs::_pthread_mutex_unlock((pthread_mutex_t *)&demangleLock);
  return datum;
}



// scanMangledField(char const*&, char const*, char const*&, int&)

uint scanMangledField(char **param_1,char *param_2,char **param_3,int *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = *param_1;
  uVar4 = 0;
  if (*pcVar5 != '0') {
    *param_4 = 0;
    *param_3 = pcVar5;
    puVar2 = __got::__DefaultRuneLocale;
    while (((pcVar5 < param_2 && (cVar1 = *pcVar5, -1 < cVar1)) &&
           ((puVar2[(long)(int)cVar1 * 4 + 0x3d] & 4) != 0))) {
      *param_3 = pcVar5 + 1;
      iVar3 = (int)((long)(int)uVar4 * 10);
      *param_4 = iVar3;
      if ((long)iVar3 != (long)(int)uVar4 * 10) {
        return 0;
      }
      iVar6 = cVar1 + -0x30;
      uVar4 = iVar3 + iVar6;
      *param_4 = uVar4;
      if (SCARRY4(iVar3,iVar6)) {
        return 0;
      }
      pcVar5 = *param_3;
    }
    *param_1 = pcVar5 + (int)uVar4;
    uVar4 = uVar4 & 0xffffff00 | (uint)(pcVar5 + (int)uVar4 <= param_2 && 0 < (int)uVar4);
  }
  return uVar4;
}



// copySwiftV1MangledName(char const*, bool)

char * copySwiftV1MangledName(char *param_1,bool param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_R15;
  char *local_38;
  
  pcVar2 = (char *)0x0;
  if (param_1 != (char *)0x0) {
    lVar3 = 0;
    for (pcVar6 = param_1; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
      if (*pcVar6 == '.') {
        lVar3 = lVar3 + 1;
        unaff_R15 = pcVar6 + -(long)param_1;
      }
    }
    pcVar2 = (char *)0x0;
    if (((unaff_R15 != (char *)0x0) && (lVar3 == 1)) &&
       (pcVar2 = (char *)0x0, unaff_R15 < pcVar6 + (-1 - (long)param_1))) {
      pcVar2 = param_1 + (long)(unaff_R15 + 1);
      if ((unaff_R15 == (char *)0x5) && (iVar1 = __stubs::_memcmp(param_1,"Swift",5), iVar1 == 0)) {
        uVar5 = 0x43;
        if (param_2) {
          uVar5 = 0x50;
        }
        pcVar4 = "";
        if (param_2) {
          pcVar4 = "_";
        }
        pcVar7 = "_Tt%cSs%zu%.*s%s";
        unaff_R15 = pcVar6 + (-(long)(unaff_R15 + 1) - (long)param_1);
      }
      else {
        uVar5 = 0x43;
        if (param_2) {
          uVar5 = 0x50;
        }
        pcVar7 = "_Tt%c%zu%.*s%zu%.*s%s";
        pcVar2 = param_1;
        pcVar4 = pcVar6 + (-(long)(unaff_R15 + 1) - (long)param_1);
      }
      __stubs::_asprintf(&local_38,pcVar7,uVar5,unaff_R15,(ulong)unaff_R15 & 0xffffffff,pcVar2,
                         pcVar4);
      pcVar2 = local_38;
    }
  }
  return pcVar2;
}



// allocateMaybeSwift(glue_swift_class_t*, unsigned long)

void * allocateMaybeSwift(glue_swift_class_t *param_1,ulong param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (((byte)param_1[0x20] & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar3 = (ulong)*(uint *)(param_1 + 0x3c);
    pvVar2 = __stubs::_calloc(((ulong)uVar1 + 7 & 0x1fffffff8) + param_2,1);
    __stubs::_memcpy(pvVar2,param_1 + -uVar3,(ulong)uVar1);
    __stubs::_bzero((void *)((long)pvVar2 + uVar3),0x28);
    *(undefined8 *)((long)pvVar2 + uVar3 + 0x40) = 0;
    return (void *)((long)pvVar2 + uVar3);
  }
  pvVar2 = __stubs::_calloc(param_2 + 0x28,1);
  return pvVar2;
}



// transcribeMethods(objc_class*, glue_class_ro_t*)

void transcribeMethods(objc_class *param_1,glue_class_ro_t *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x20);
  if (piVar4 != (int *)0x0) {
    if (piVar4[1] != 0) {
      uVar3 = 0;
      do {
        uVar2 = (ulong)(*piVar4 * uVar3);
        uVar1 = __stubs::_sel_getUid(*(undefined8 *)((long)piVar4 + uVar2 + 8));
        __stubs::_class_addMethod
                  (param_1,uVar1,*(undefined8 *)((long)piVar4 + uVar2 + 0x18),
                   *(undefined8 *)((long)piVar4 + uVar2 + 0x10));
        uVar3 = uVar3 + 1;
        piVar4 = *(int **)(param_2 + 0x20);
      } while (uVar3 < (uint)piVar4[1]);
    }
    if (((byte)*param_2 & 4) != 0) {
      *(uint *)(*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) =
           *(uint *)(*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) | 0x180000;
    }
  }
  return;
}



// transcribeProtocols(objc_class*, glue_class_ro_t*)

void transcribeProtocols(objc_class *param_1,glue_class_ro_t *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  puVar1 = *(ulong **)(param_2 + 0x28);
  if ((puVar1 != (ulong *)0x0) && (*puVar1 != 0)) {
    uVar2 = 0;
    uVar3 = 1;
    do {
      __stubs::_class_addProtocol(param_1,puVar1[uVar2 + 1]);
      puVar1 = *(ulong **)(param_2 + 0x28);
      bVar4 = uVar3 < *puVar1;
      uVar2 = uVar3;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (bVar4);
  }
  return;
}



// transcribeProperties(objc_class*, glue_class_ro_t*)

void transcribeProperties(objc_class *param_1,glue_class_ro_t *param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_34;
  
  piVar4 = *(int **)(param_2 + 0x40);
  if ((piVar4 != (int *)0x0) && (piVar4[1] != 0)) {
    uVar3 = 0;
    do {
      iVar1 = *piVar4;
      pvVar2 = (void *)__stubs::_property_copyAttributeList
                                 ((long)piVar4 + (ulong)(iVar1 * uVar3) + 8,&local_34);
      __stubs::_class_addProperty
                (param_1,*(undefined8 *)((long)piVar4 + (ulong)(iVar1 * uVar3) + 8),pvVar2,local_34)
      ;
      if (pvVar2 != (void *)0x0) {
        __stubs::_free(pvVar2);
      }
      uVar3 = uVar3 + 1;
      piVar4 = *(int **)(param_2 + 0x40);
    } while (uVar3 < (uint)piVar4[1]);
  }
  return;
}



// initialize_imp(objc_object*, objc_selector*)

void initialize_imp(objc_object *param_1,objc_selector *param_2)

{
  return;
}



// __arclite_NSArray_objectAtIndexedSubscript(NSArray*, objc_selector*, unsigned long)

void __arclite_NSArray_objectAtIndexedSubscript
               (NSArray *param_1,objc_selector *param_2,ulong param_3)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"objectAtIndex:");
  return;
}



// __arclite_NSMutableArray_setObject_atIndexedSubscript(NSMutableArray*, objc_selector*,
// objc_object*, unsigned long)

void __arclite_NSMutableArray_setObject_atIndexedSubscript
               (NSMutableArray *param_1,objc_selector *param_2,objc_object *param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"count");
  if (uVar1 == param_4) {
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f0)(param_1,"addObject:",param_3);
    return;
  }
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"replaceObjectAtIndex:withObject:",param_4,param_3);
  return;
}



// __arclite_NSDictionary_objectForKeyedSubscript(NSDictionary*, objc_selector*, objc_object*)

void __arclite_NSDictionary_objectForKeyedSubscript
               (NSDictionary *param_1,objc_selector *param_2,objc_object *param_3)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"objectForKey:");
  return;
}



// __arclite_NSMutableDictionary__setObject_forKeyedSubscript(NSMutableDictionary*, objc_selector*,
// objc_object*, objc_object)

void __arclite_NSMutableDictionary__setObject_forKeyedSubscript
               (NSMutableDictionary *param_1,objc_selector *param_2,objc_object *param_3,
               objc_object param_4)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"setObject:forKey:");
  return;
}



// __arclite_NSOrderedSet_objectAtIndexedSubscript(NSOrderedSet*, objc_selector*, unsigned long)

void __arclite_NSOrderedSet_objectAtIndexedSubscript
               (NSOrderedSet *param_1,objc_selector *param_2,ulong param_3)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"objectAtIndex:");
  return;
}



// __arclite_NSMutableOrderedSet_setObject_atIndexedSubscript(NSMutableOrderedSet*, objc_selector*,
// objc_object*, unsigned long)

void __arclite_NSMutableOrderedSet_setObject_atIndexedSubscript
               (NSMutableOrderedSet *param_1,objc_selector *param_2,objc_object *param_3,
               ulong param_4)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"setObject:atIndex:");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// add_image_hook_ARC(mach_header const*, long)

void add_image_hook_ARC(mach_header *param_1,long param_2)

{
  if (NSAutoreleasePool_class == 0) {
    NSAutoreleasePool_class = __stubs::_objc_getClass("NSAutoreleasePool");
  }
  if (add_image_hook_ARC(mach_header_const*,long)::patches == '\0') {
    _patches = "_object_setInstanceVariable";
    _DAT_100036e68 = __arclite_object_setInstanceVariable;
    _DAT_100036e70 = 0;
    _DAT_100036e78 = "_object_setIvar";
    _DAT_100036e80 = __arclite_object_setIvar;
    _DAT_100036e88 = 0;
    _DAT_100036e90 = "_object_copy";
    _DAT_100036e98 = __arclite_object_copy;
    _DAT_100036ea0 = 0;
    _DAT_100036ea8 = "_objc_retain";
    _DAT_100036eb0 = __arclite_objc_retain;
    _DAT_100036eb8 = 0;
    _DAT_100036ec0 = "_objc_retainBlock";
    _DAT_100036ec8 = __arclite_objc_retainBlock;
    _DAT_100036ed0 = 0;
    _DAT_100036ed8 = "_objc_release";
    _DAT_100036ee0 = __arclite_objc_release;
    _DAT_100036ee8 = 0;
    _DAT_100036ef0 = "_objc_autorelease";
    _DAT_100036ef8 = __arclite_objc_autorelease;
    _DAT_100036f00 = 0;
    _DAT_100036f08 = "_objc_retainAutorelease";
    _DAT_100036f10 = __arclite_objc_retainAutorelease;
    _DAT_100036f18 = 0;
    _DAT_100036f20 = "_objc_autoreleaseReturnValue";
    _DAT_100036f28 = __arclite_objc_autoreleaseReturnValue;
    _DAT_100036f30 = 0;
    _DAT_100036f38 = "_objc_retainAutoreleaseReturnValue";
    _DAT_100036f40 = __arclite_objc_retainAutoreleaseReturnValue;
    _DAT_100036f48 = 0;
    _DAT_100036f50 = "_objc_retainAutoreleasedReturnValue";
    _DAT_100036f58 = __arclite_objc_retainAutoreleasedReturnValue;
    _DAT_100036f60 = 0;
    _DAT_100036f68 = "_objc_storeStrong";
    _DAT_100036f70 = __arclite_objc_storeStrong;
    _DAT_100036f78 = 0;
    _DAT_100036f80 = "_objc_autoreleasePoolPush";
    _DAT_100036f88 = __arclite_objc_autoreleasePoolPush;
    _DAT_100036f90 = 0;
    _DAT_100036f98 = "_objc_autoreleasePoolPop";
    _DAT_100036fa0 = __arclite_objc_autoreleasePoolPop;
    _DAT_100036fa8 = 0;
    add_image_hook_ARC(mach_header_const*,long)::patches = '\x01';
  }
  patch_lazy_pointers(param_1,(patch_t *)&add_image_hook_ARC(mach_header_const*,long)::patches,0xe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// add_image_hook_GC(mach_header const*, long)

void add_image_hook_GC(mach_header *param_1,long param_2)

{
  if (add_image_hook_GC(mach_header_const*,long)::patches == '\0') {
    _patches = "_objc_autoreleasePoolPush";
    _DAT_100036e28 = __arclite_objc_autoreleasePoolPush;
    _DAT_100036e30 = 0;
    _DAT_100036e38 = "_objc_autoreleasePoolPop";
    _DAT_100036e40 = __arclite_objc_autoreleasePoolPop;
    _DAT_100036e48 = 0;
    add_image_hook_GC(mach_header_const*,long)::patches = '\x01';
  }
  patch_lazy_pointers(param_1,(patch_t *)&add_image_hook_GC(mach_header_const*,long)::patches,2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// __arclite_objc_autoreleasePoolPush()

void __arclite_objc_autoreleasePoolPush(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(NSAutoreleasePool_class,"new");
  return;
}



// __arclite_objc_autoreleasePoolPop(void*)

void __arclite_objc_autoreleasePoolPop(void *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"drain");
  return;
}



// __arclite_object_setInstanceVariable(objc_object*, char const*, void*)

long __arclite_object_setInstanceVariable(objc_object *param_1,char *param_2,void *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_1 != (objc_object *)0x0) && (param_2 != (char *)0x0)) {
    uVar1 = __stubs::_object_getClass(param_1);
    lVar2 = __stubs::_class_getInstanceVariable(uVar1,param_2);
    lVar3 = 0;
    if (lVar2 != 0) {
      __stubs::_object_setIvar(param_1,lVar2,param_3);
      lVar3 = lVar2;
    }
  }
  return lVar3;
}



// __arclite_object_setIvar(objc_object*, objc_ivar*, objc_object*)

void __arclite_object_setIvar(objc_object *param_1,objc_ivar *param_2,objc_object *param_3)

{
  objc_object *poVar1;
  long lVar2;
  undefined8 uVar3;
  objc_ivar *poVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  
  if ((param_1 != (objc_object *)0x0) && (param_2 != (objc_ivar *)0x0)) {
    lVar2 = __stubs::_object_getClass(param_1);
    uVar3 = __stubs::_ivar_getName(param_2);
    lVar10 = 0;
    if (lVar2 != 0) {
      do {
        poVar4 = (objc_ivar *)__stubs::_class_getInstanceVariable(lVar2,uVar3);
        lVar10 = lVar2;
        if (poVar4 == param_2) break;
        lVar2 = __stubs::_class_getSuperclass(lVar2);
        lVar10 = 0;
      } while (lVar2 != 0);
    }
    lVar2 = __stubs::_ivar_getOffset(param_2);
    pbVar5 = *(byte **)((*(ulong *)(lVar10 + 0x20) & 0x7ffffffffff8) + 8);
    if ((*pbVar5 & 0x80) != 0) {
      iVar9 = *(int *)(pbVar5 + 4);
      pbVar5 = (byte *)__stubs::_class_getIvarLayout(lVar10);
      if (pbVar5 != (byte *)0x0) {
        uVar6 = iVar9 + 7U & 0xfffffff8;
        bVar8 = *pbVar5;
        if (bVar8 != 0) {
          uVar7 = 0;
          do {
            uVar7 = (bVar8 >> 4) + uVar7;
            if ((bVar8 & 0xf) != 0) {
              iVar9 = -(bVar8 & 0xf);
              do {
                if (lVar2 - (ulong)uVar6 >> 3 == uVar7) {
                  poVar1 = *(objc_object **)(param_1 + lVar2);
                  if (poVar1 == param_3) {
                    return;
                  }
                  (*(code *)0x10002f0f0)(param_3,"retain");
                  *(objc_object **)(param_1 + lVar2) = param_3;
                    // WARNING: Treating indirect jump as call
                  (*(code *)0x10002f0f0)(poVar1,"release");
                  return;
                }
                if ((long)(lVar2 - (ulong)uVar6 >> 3) < (long)uVar7) goto LAB_10001bddb;
                uVar7 = uVar7 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar9 != 0);
            }
            pbVar5 = pbVar5 + 1;
            bVar8 = *pbVar5;
          } while (bVar8 != 0);
        }
      }
    }
LAB_10001bddb:
    *(objc_object **)(param_1 + lVar2) = param_3;
  }
  return;
}



// __arclite_object_copy(objc_object*, unsigned long)

void * __arclite_object_copy(objc_object *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  byte *pbVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  
  pvVar6 = (void *)0x0;
  if (param_1 != (objc_object *)0x0) {
    lVar2 = __stubs::_object_getClass(param_1);
    lVar3 = __stubs::_class_getInstanceSize(lVar2);
    pvVar4 = __stubs::_calloc(1,lVar3 + param_2);
    pvVar6 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      __stubs::_memcpy(pvVar4,param_1,lVar3 + param_2);
      for (; pvVar6 = pvVar4, lVar2 != 0; lVar2 = __stubs::_class_getSuperclass(lVar2)) {
        if ((**(byte **)((*(ulong *)(lVar2 + 0x20) & 0x7ffffffffff8) + 8) & 0x80) != 0) {
          for (lVar2 = __stubs::_object_getClass(param_1); lVar2 != 0;
              lVar2 = __stubs::_class_getSuperclass(lVar2)) {
            if ((((**(byte **)((*(ulong *)(lVar2 + 0x20) & 0x7ffffffffff8) + 8) & 0x80) != 0) &&
                (pbVar5 = (byte *)__stubs::_class_getIvarLayout(lVar2), pbVar5 != (byte *)0x0)) &&
               (bVar1 = *pbVar5, bVar1 != 0)) {
              plVar7 = (long *)(((ulong)(*(int *)(*(long *)((*(ulong *)(lVar2 + 0x20) &
                                                            0x7ffffffffff8) + 8) + 4) + 7) &
                                0xfffffff8) + (long)pvVar4);
              do {
                plVar8 = plVar7 + (bVar1 >> 4);
                if ((bVar1 & 0xf) != 0) {
                  iVar9 = -(bVar1 & 0xf);
                  do {
                    if (*plVar8 != 0) {
                      (*(code *)0x10002f0f0)(*plVar8,"retain");
                    }
                    plVar8 = plVar8 + 1;
                    iVar9 = iVar9 + 1;
                  } while (iVar9 != 0);
                  plVar8 = plVar7 + (ulong)(bVar1 >> 4) +
                                    (((ulong)bVar1 & 0xf) + 0xffffffff & 0xffffffff) + 1;
                }
                plVar7 = plVar8;
                pbVar5 = pbVar5 + 1;
                bVar1 = *pbVar5;
              } while (bVar1 != 0);
            }
          }
          return pvVar4;
        }
      }
    }
  }
  return pvVar6;
}



// __arclite_objc_retain(objc_object*)

void __arclite_objc_retain(objc_object *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"retain");
  return;
}



// __arclite_objc_retainBlock(objc_object*)

void __arclite_objc_retainBlock(objc_object *param_1)

{
  __stubs::__Block_copy();
  return;
}



// __arclite_objc_release(objc_object*)

void __arclite_objc_release(objc_object *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"release");
  return;
}



// __arclite_objc_autorelease(objc_object*)

void __arclite_objc_autorelease(objc_object *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"autorelease");
  return;
}



// __arclite_objc_retainAutorelease(objc_object*)

void __arclite_objc_retainAutorelease(objc_object *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"retain");
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(uVar1,"autorelease");
  return;
}



// __arclite_objc_autoreleaseReturnValue(objc_object*)

void __arclite_objc_autoreleaseReturnValue(objc_object *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"autorelease");
  return;
}



// __arclite_objc_retainAutoreleaseReturnValue(objc_object*)

void __arclite_objc_retainAutoreleaseReturnValue(objc_object *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x10002f0f0)(param_1,"retain");
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(uVar1,"autorelease");
  return;
}



// __arclite_objc_retainAutoreleasedReturnValue(objc_object*)

void __arclite_objc_retainAutoreleasedReturnValue(objc_object *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f0f0)(param_1,"retain");
  return;
}



// __arclite_objc_storeStrong(objc_object**, objc_object*)

void __arclite_objc_storeStrong(objc_object **param_1,objc_object *param_2)

{
  objc_object *poVar1;
  
  poVar1 = *param_1;
  if (poVar1 != param_2) {
    (*(code *)0x10002f0f0)(param_2,"retain");
    *param_1 = param_2;
                    // WARNING: Treating indirect jump as call
    (*(code *)0x10002f0f0)(poVar1,"release");
    return;
  }
  return;
}



void __stubs::_LIBMTP_Clear_Errorstack(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c0f2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Clear_Errorstack)();
  return;
}



void __stubs::_LIBMTP_Create_Folder(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c0f8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Create_Folder)();
  return;
}



void __stubs::_LIBMTP_Delete_Object(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c0fe. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Delete_Object)();
  return;
}



void __stubs::_LIBMTP_Detect_Raw_Devices(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c104. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Detect_Raw_Devices)();
  return;
}



void __stubs::_LIBMTP_Dump_Errorstack(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c10a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Dump_Errorstack)();
  return;
}



void __stubs::_LIBMTP_Get_Deviceversion(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c110. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Deviceversion)();
  return;
}



void __stubs::_LIBMTP_Get_File_To_File(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c116. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_File_To_File)();
  return;
}



void __stubs::_LIBMTP_Get_Files_And_Folders(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c11c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Files_And_Folders)();
  return;
}



void __stubs::_LIBMTP_Get_Filetype_Description(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c122. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Filetype_Description)();
  return;
}



void __stubs::_LIBMTP_Get_Manufacturername(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c128. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Manufacturername)();
  return;
}



void __stubs::_LIBMTP_Get_Modelname(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c12e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Modelname)();
  return;
}



void __stubs::_LIBMTP_Get_Serialnumber(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c134. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Serialnumber)();
  return;
}



void __stubs::_LIBMTP_Get_Storage(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c13a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Get_Storage)();
  return;
}



void __stubs::_LIBMTP_Init(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c140. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Init)();
  return;
}



void __stubs::_LIBMTP_Open_Raw_Device_Uncached(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c146. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Open_Raw_Device_Uncached)();
  return;
}



void __stubs::_LIBMTP_Release_Device(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c14c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Release_Device)();
  return;
}



void __stubs::_LIBMTP_Send_File_From_File(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c152. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Send_File_From_File)();
  return;
}



void __stubs::_LIBMTP_Set_Device_Timeout(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c158. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Set_Device_Timeout)();
  return;
}



void __stubs::_LIBMTP_Set_File_Name(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c15e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Set_File_Name)();
  return;
}



void __stubs::_LIBMTP_Set_Folder_Name(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c164. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Set_Folder_Name)();
  return;
}



void __stubs::_LIBMTP_Set_Load_Cache_On_Demand(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c16a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_Set_Load_Cache_On_Demand)();
  return;
}



void __stubs::_LIBMTP_destroy_file_t(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c170. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_destroy_file_t)();
  return;
}



void __stubs::_LIBMTP_destroy_folder_t(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c176. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_destroy_folder_t)();
  return;
}



void __stubs::_LIBMTP_new_file_t(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c17c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_new_file_t)();
  return;
}



void __stubs::_LIBMTP_new_folder_t(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c182. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LIBMTP_new_folder_t)();
  return;
}



void __stubs::_BreakpadAddLogFile(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c188. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_BreakpadAddLogFile)();
  return;
}



void __stubs::_BreakpadCreate(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c18e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_BreakpadCreate)();
  return;
}



void __stubs::_BreakpadRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c194. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_BreakpadRelease)();
  return;
}



void __stubs::_NSDivideRect(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c19a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSDivideRect)();
  return;
}



void __stubs::_NSFileTypeForHFSTypeCode(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSFileTypeForHFSTypeCode)();
  return;
}



void __stubs::_NSLog(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1a6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSLog)();
  return;
}



void __stubs::_NSMouseInRect(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSMouseInRect)();
  return;
}



void __stubs::_NSSearchPathForDirectoriesInDomains(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1b2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSSearchPathForDirectoriesInDomains)();
  return;
}



void __stubs::_NSStringFromSelector(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSStringFromSelector)();
  return;
}



void __stubs::_class_addMethod(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1be. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_addMethod)();
  return;
}



void __stubs::_class_addProperty(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_addProperty)();
  return;
}



void __stubs::_class_addProtocol(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_addProtocol)();
  return;
}



void __stubs::_class_getInstanceMethod(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_getInstanceMethod)();
  return;
}



void __stubs::_class_getInstanceSize(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1d6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_getInstanceSize)();
  return;
}



void __stubs::_class_getInstanceVariable(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_getInstanceVariable)();
  return;
}



void __stubs::_class_getIvarLayout(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_getIvarLayout)();
  return;
}



void __stubs::_class_getSuperclass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_getSuperclass)();
  return;
}



void __stubs::_class_isMetaClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1ee. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_isMetaClass)();
  return;
}



void __stubs::_class_respondsToSelector(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_class_respondsToSelector)();
  return;
}



void __stubs::_ivar_getName(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c1fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_ivar_getName)();
  return;
}



void __stubs::_ivar_getOffset(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c200. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_ivar_getOffset)();
  return;
}



void __stubs::_method_setImplementation(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c206. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_method_setImplementation)();
  return;
}



void __stubs::_objc_autoreleasePoolPop(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c20c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_autoreleasePoolPop)();
  return;
}



void __stubs::_objc_autoreleasePoolPush(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c212. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_autoreleasePoolPush)();
  return;
}



void __stubs::_objc_autoreleaseReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c218. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_autoreleaseReturnValue)();
  return;
}



void __stubs::_objc_collectingEnabled(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c21e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_collectingEnabled)();
  return;
}



void __stubs::_objc_constructInstance(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c224. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_constructInstance)();
  return;
}



void __stubs::_objc_destroyWeak(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c22a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_destroyWeak)();
  return;
}



void __stubs::_objc_enumerationMutation(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c230. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_enumerationMutation)();
  return;
}



void __stubs::_objc_getClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c236. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_getClass)();
  return;
}



void __stubs::_objc_getMetaClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c23c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_getMetaClass)();
  return;
}



void __stubs::_objc_getProperty(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c242. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_getProperty)();
  return;
}



void __stubs::_objc_getProtocol(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c248. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_getProtocol)();
  return;
}



void __stubs::_objc_getRequiredClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c24e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_getRequiredClass)();
  return;
}



void __stubs::_objc_initializeClassPair(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c254. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_initializeClassPair)();
  return;
}



void __stubs::_objc_loadWeakRetained(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c25a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_loadWeakRetained)();
  return;
}



void __stubs::_objc_lookUpClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c260. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_lookUpClass)();
  return;
}



void __stubs::_objc_msgSendSuper2(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c266. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_msgSendSuper2)();
  return;
}



void __stubs::_objc_msgSendSuper2_stret(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c26c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_msgSendSuper2_stret)();
  return;
}



void __stubs::_objc_msgSend_stret(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c272. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_msgSend_stret)();
  return;
}



void __stubs::_objc_registerClassPair(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c278. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_registerClassPair)();
  return;
}



void __stubs::_objc_retainAutorelease(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c27e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_retainAutorelease)();
  return;
}



void __stubs::_objc_retainAutoreleaseReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c284. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_retainAutoreleaseReturnValue)();
  return;
}



void __stubs::_objc_retainAutoreleasedReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c28a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_retainAutoreleasedReturnValue)();
  return;
}



void __stubs::_objc_setProperty(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c290. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_setProperty)();
  return;
}



void __stubs::_objc_storeStrong(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c296. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_storeStrong)();
  return;
}



void __stubs::_objc_storeWeak(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c29c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_objc_storeWeak)();
  return;
}



void __stubs::_object_getClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_object_getClass)();
  return;
}



void __stubs::_object_getIvar(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_object_getIvar)();
  return;
}



void __stubs::_object_setIvar(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_object_setIvar)();
  return;
}



void __stubs::_property_copyAttributeList(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_property_copyAttributeList)();
  return;
}



void __stubs::_protocol_getMethodDescription(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_protocol_getMethodDescription)();
  return;
}



void __stubs::_sel_getUid(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_sel_getUid)();
  return;
}



void __stubs::__ZNKSs7compareEPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNKSs7compareEPKc)();
  return;
}



void __stubs::__ZNKSs7compareERKSs(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNKSs7compareERKSs)();
  return;
}



void __stubs::__ZNSs12_M_leak_hardEv(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2d2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSs12_M_leak_hardEv)();
  return;
}



void __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSs4_Rep10_M_destroyERKSaIcE)();
  return;
}



void __stubs::__ZNSs6appendEPKcm(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2de. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSs6appendEPKcm)();
  return;
}



void __stubs::__ZNSs6assignEPKcm(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSs6assignEPKcm)();
  return;
}



void __stubs::__ZNSs6assignERKSs(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2ea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSs6assignERKSs)();
  return;
}



void __stubs::__ZNSsC1EPKcRKSaIcE(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSsC1EPKcRKSaIcE)();
  return;
}



void __stubs::__ZNSsC1EPKcmRKSaIcE(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2f6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSsC1EPKcmRKSaIcE)();
  return;
}



void __stubs::__ZNSsC1ERKSs(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c2fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZNSsC1ERKSs)();
  return;
}



void __stubs::__ZSt17__throw_bad_allocv(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c302. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt17__throw_bad_allocv)();
  return;
}



void __stubs::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c308. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base)();
  return;
}



void __stubs::__ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c30e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base)();
  return;
}



void __stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c314. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base)();
  return;
}



void __stubs::__ZSt20__throw_length_errorPKc(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c31a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt20__throw_length_errorPKc)();
  return;
}



void __stubs::__ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c320. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_)();
  return;
}



void __stubs::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c326. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stubs::__ZSt9terminatev(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c32c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*___ZSt9terminatev)();
  return;
}



void __stubs::__ZdlPv(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c332. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__ZdlPv)();
  return;
}



void __stubs::__Znwm(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c338. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__Znwm)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stubs::___cxa_begin_catch(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c33e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*____cxa_begin_catch)();
  return;
}



void __stubs::___cxa_rethrow(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c350. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___cxa_rethrow)();
  return;
}



void __stubs::__Block_copy(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c356. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__Block_copy)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::__Block_object_assign(void *param_1,void *param_2,int param_3)

{
                    // WARNING: Could not recover jumptable at 0x00010001c35c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__Block_object_assign)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::__Block_object_dispose(void *param_1,int param_2)

{
                    // WARNING: Could not recover jumptable at 0x00010001c362. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__Block_object_dispose)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::__Unwind_Resume(_Unwind_Exception *exception_object)

{
                    // WARNING: Could not recover jumptable at 0x00010001c368. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__Unwind_Resume)();
  return;
}



void __stubs::___cxa_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c36e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___cxa_atexit)();
  return;
}



void __stubs::___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c374. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___stack_chk_fail)();
  return;
}



void __stubs::__dyld_register_func_for_add_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c37a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__dyld_register_func_for_add_image)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_asprintf(char **param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c380. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_asprintf)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stubs::_basename(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c386. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)__la_symbol_ptr::_basename)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::_bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x00010001c38c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_bzero)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stubs::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c392. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)();
  return pvVar1;
}



void __stubs::_ceil(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c398. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_ceil)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stubs::_dirname(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c39e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)__la_symbol_ptr::_dirname)();
  return pcVar1;
}



void __stubs::_dispatch_sync(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c3a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_dispatch_sync)();
  return;
}



void __stubs::_dlclose(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c3aa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_dlclose)();
  return;
}



void __stubs::_dlopen(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c3b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_dlopen)();
  return;
}



void __stubs::_dlsym(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c3b6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_dlsym)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_dup2(int param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3bc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_dup2)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00010001c3c2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_exit)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3c8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fclose)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_fileno(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3ce. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fileno)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * __stubs::_fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3d4. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)__la_symbol_ptr::_fopen)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3da. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fprintf)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00010001c3e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

hash_table * __stubs::_hash_create(int size)

{
  hash_table *phVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3e6. Too many branches
                    // WARNING: Treating indirect jump as call
  phVar1 = (hash_table *)(*(code *)__la_symbol_ptr::_hash_create)();
  return phVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stubs::_hash_search(hash_table *table,char *key,void *datum,replace_func *replace_func)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3ec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_hash_search)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * __stubs::_localtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3f2. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)__la_symbol_ptr::_localtime)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stubs::_malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3f8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_malloc)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c3fe. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_memcmp)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stubs::_memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c404. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_memcpy)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_pthread_mutex_destroy(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c40a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_pthread_mutex_destroy)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c410. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_pthread_mutex_init)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c416. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_pthread_mutex_lock)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c41c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_pthread_mutex_unlock)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_pthread_mutexattr_init(pthread_mutexattr_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c422. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_pthread_mutexattr_init)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_pthread_mutexattr_settype(pthread_mutexattr_t *param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c428. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_pthread_mutexattr_settype)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pthread_t __stubs::_pthread_self(void)

{
  pthread_t p_Var1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c42e. Too many branches
                    // WARNING: Treating indirect jump as call
  p_Var1 = (pthread_t)(*(code *)__la_symbol_ptr::_pthread_self)();
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_remove(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c434. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_remove)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_removexattr(char *path,char *name,int options)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c43a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_removexattr)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_rename(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c440. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_rename)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stubs::_rindex(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c446. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)__la_symbol_ptr::_rindex)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint __stubs::_sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c44c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)__la_symbol_ptr::_sleep)();
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_snprintf(char *param_1,size_t param_2,char *param_3,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c452. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_snprintf)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c458. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_sprintf)();
  return iVar1;
}



void __stubs::_stat_INODE64(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c45e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_stat_INODE64)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c464. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_strcasecmp)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stubs::_strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c46a. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)__la_symbol_ptr::_strchr)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c470. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_strcmp)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stubs::_strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c476. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)__la_symbol_ptr::_strdup)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t __stubs::_strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c47c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)__la_symbol_ptr::_strlen)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c482. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_strncmp)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stubs::_strncpy(char *param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c488. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)__la_symbol_ptr::_strncpy)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t __stubs::_time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c48e. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)__la_symbol_ptr::_time)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010001c494. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_vsnprintf)();
  return iVar1;
}



void __stubs::_CFArrayGetCount(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c49a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFArrayGetCount)();
  return;
}



void __stubs::_CFArrayGetValueAtIndex(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4a0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFArrayGetValueAtIndex)();
  return;
}



void __stubs::_CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4a6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRelease)();
  return;
}



void __stubs::_NSApplicationMain(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSApplicationMain)();
  return;
}



void __stubs::_NSGetAlertPanel(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4b2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSGetAlertPanel)();
  return;
}



void __stubs::_NSRectFill(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSRectFill)();
  return;
}



void __stubs::_NSReleaseAlertPanel(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4be. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_NSReleaseAlertPanel)();
  return;
}



void __stubs::_FSFindFolder(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_FSFindFolder)();
  return;
}



void __stubs::_FSRefMakePath(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_FSRefMakePath)();
  return;
}



void __stubs::_LSSharedFileListCopySnapshot(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LSSharedFileListCopySnapshot)();
  return;
}



void __stubs::_LSSharedFileListCreate(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4d6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LSSharedFileListCreate)();
  return;
}



void __stubs::_LSSharedFileListInsertItemURL(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LSSharedFileListInsertItemURL)();
  return;
}



void __stubs::_LSSharedFileListItemRemove(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LSSharedFileListItemRemove)();
  return;
}



void __stubs::_LSSharedFileListItemResolve(void)

{
                    // WARNING: Could not recover jumptable at 0x00010001c4e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_LSSharedFileListItemResolve)();
  return;
}



void FUN_10001c4f0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)0x10002f028)();
  return;
}



void __stub_helper::_LIBMTP_Clear_Errorstack(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Create_Folder(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Delete_Object(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Detect_Raw_Devices(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Dump_Errorstack(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Deviceversion(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_File_To_File(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Files_And_Folders(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Filetype_Description(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Manufacturername(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Modelname(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Serialnumber(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Get_Storage(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Init(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Open_Raw_Device_Uncached(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Release_Device(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Send_File_From_File(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Set_Device_Timeout(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Set_File_Name(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Set_Folder_Name(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_Set_Load_Cache_On_Demand(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_destroy_file_t(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_destroy_folder_t(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_new_file_t(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LIBMTP_new_folder_t(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_BreakpadAddLogFile(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_BreakpadCreate(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_BreakpadRelease(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSDivideRect(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSFileTypeForHFSTypeCode(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSLog(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSMouseInRect(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSSearchPathForDirectoriesInDomains(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSStringFromSelector(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_addMethod(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_addProperty(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_addProtocol(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_getInstanceMethod(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_getInstanceSize(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_getInstanceVariable(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_getIvarLayout(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_getSuperclass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_isMetaClass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_class_respondsToSelector(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_ivar_getName(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_ivar_getOffset(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_method_setImplementation(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_autoreleasePoolPop(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_autoreleasePoolPush(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_autoreleaseReturnValue(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_collectingEnabled(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_constructInstance(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_destroyWeak(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_enumerationMutation(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_getClass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_getMetaClass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_getProperty(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_getProtocol(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_getRequiredClass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_initializeClassPair(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_loadWeakRetained(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_lookUpClass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_msgSendSuper2(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_msgSendSuper2_stret(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_msgSend_stret(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_registerClassPair(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_retainAutorelease(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_retainAutoreleaseReturnValue(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_retainAutoreleasedReturnValue(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_setProperty(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_storeStrong(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_objc_storeWeak(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_object_getClass(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_object_getIvar(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_object_setIvar(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_property_copyAttributeList(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_protocol_getMethodDescription(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_sel_getUid(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNKSs7compareEPKc(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNKSs7compareERKSs(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSs12_M_leak_hardEv(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSs4_Rep10_M_destroyERKSaIcE(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSs6appendEPKcm(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSs6assignEPKcm(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSs6assignERKSs(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSsC1EPKcRKSaIcE(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSsC1EPKcmRKSaIcE(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZNSsC1ERKSs(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt17__throw_bad_allocv(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt20__throw_length_errorPKc(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__ZSt9terminatev(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::___cxa_begin_catch(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::___cxa_rethrow(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__Block_copy(void)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stub_helper::__Block_object_assign(void *param_1,void *param_2,int param_3)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stub_helper::__Block_object_dispose(void *param_1,int param_2)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stub_helper::__Unwind_Resume(_Unwind_Exception *exception_object)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::___cxa_atexit(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::___stack_chk_fail(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::__dyld_register_func_for_add_image(void)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_asprintf(char **param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stub_helper::_basename(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10001c4f0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stub_helper::_bzero(void *param_1,size_t param_2)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stub_helper::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10001c4f0();
  return pvVar1;
}



void __stub_helper::_ceil(void)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stub_helper::_dirname(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10001c4f0();
  return pcVar1;
}



void __stub_helper::_dispatch_sync(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_dlclose(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_dlopen(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_dlsym(void)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_dup2(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stub_helper::_exit(int param_1)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_fclose(FILE *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_fileno(FILE *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * __stub_helper::_fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)FUN_10001c4f0();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stub_helper::_free(void *param_1)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

hash_table * __stub_helper::_hash_create(int size)

{
  hash_table *phVar1;
  
  phVar1 = (hash_table *)FUN_10001c4f0();
  return phVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stub_helper::_hash_search
                 (hash_table *table,char *key,void *datum,replace_func *replace_func)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10001c4f0();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * __stub_helper::_localtime(time_t *param_1)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)FUN_10001c4f0();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stub_helper::_malloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10001c4f0();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stub_helper::_memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10001c4f0();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_pthread_mutex_destroy(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_pthread_mutexattr_init(pthread_mutexattr_t *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_pthread_mutexattr_settype(pthread_mutexattr_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pthread_t __stub_helper::_pthread_self(void)

{
  pthread_t p_Var1;
  
  p_Var1 = (pthread_t)FUN_10001c4f0();
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_remove(char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_removexattr(char *path,char *name,int options)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stub_helper::_rindex(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10001c4f0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint __stub_helper::_sleep(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10001c4f0();
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_snprintf(char *param_1,size_t param_2,char *param_3,...)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_sprintf(char *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



void __stub_helper::_stat_INODE64(void)

{
  FUN_10001c4f0();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stub_helper::_strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10001c4f0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stub_helper::_strdup(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10001c4f0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t __stub_helper::_strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = FUN_10001c4f0();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __stub_helper::_strncpy(char *param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_10001c4f0();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t __stub_helper::_time(time_t *param_1)

{
  time_t tVar1;
  
  tVar1 = FUN_10001c4f0();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stub_helper::_vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001c4f0();
  return iVar1;
}



void __stub_helper::_CFArrayGetCount(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_CFArrayGetValueAtIndex(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_CFRelease(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSApplicationMain(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSGetAlertPanel(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSRectFill(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_NSReleaseAlertPanel(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_FSFindFolder(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_FSRefMakePath(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LSSharedFileListCopySnapshot(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LSSharedFileListCreate(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LSSharedFileListInsertItemURL(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LSSharedFileListItemRemove(void)

{
  FUN_10001c4f0();
  return;
}



void __stub_helper::_LSSharedFileListItemResolve(void)

{
  FUN_10001c4f0();
  return;
}


