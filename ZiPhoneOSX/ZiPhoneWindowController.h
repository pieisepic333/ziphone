//
//  ZiPhoneWindowController.h
//  ZiPhoneOSX

#import <Cocoa/Cocoa.h>


@interface ZiPhoneWindowController : NSWindowController {
  IBOutlet NSButton *m_btnDowngrade;
  IBOutlet NSButton *m_btnUnlock;
  IBOutlet NSButton *m_btnActivate;
  IBOutlet NSButton *m_btnJailbreak;
  
  IBOutlet NSButton *m_btnEnterRecovery;
  IBOutlet NSButton *m_btnExitRecovery;
  IBOutlet NSButton *m_btnEnterDFU;
  IBOutlet NSButton *m_btnChangeImei;
  IBOutlet NSButton *m_btnErase;
  
  IBOutlet NSMenuItem *m_mnuTestMode;
  IBOutlet NSMenuItem *m_mnuCoffee;
  
  IBOutlet NSButton *m_btnStart;
  IBOutlet NSButton *m_btnStop;
  
  IBOutlet NSTextView *m_txtProgress;
  
  IBOutlet NSTextField *m_txtImei;
    
  IBOutlet NSWindow *m_wndAbout;
  IBOutlet NSTextView *m_txtAbout;
  IBOutlet NSTextView *m_txtTrouble;
  
  NSTask *m_processTask;
 
  NSDictionary *m_dctButtonStates;
  NSArray *m_arControls;
}

- (void)awakeFromNib;
- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication *)sender;
- (void)killAlertDidEnd:(NSAlert*) p_lert returnCode:(int) p_ret contextInfo:(void*)p_ctx;
- (void)windowWillClose:(NSNotification *)notification;

- (void)loadFile:(NSString*)p_file toTextView:(NSTextView*)p_tv;

- (IBAction)startProcess:(id)sender;
- (IBAction)stopProcess:(id)sender;
- (IBAction)quitApplication:(id)sender;
- (IBAction)showAbout:(id)sender;
- (IBAction)checkboxClicked:(id)sender;

- (IBAction)mnuTestSelected:(id)sender;

- (IBAction)mnuCoffeeSelected:(id)sender;
- (IBAction)btnDonateClicked:(id)sender;


@end
