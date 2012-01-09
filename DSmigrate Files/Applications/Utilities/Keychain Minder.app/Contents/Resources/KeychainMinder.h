/* KeychainMinder */

#import <Cocoa/Cocoa.h>
#import <Security/Security.h>
#import "CryptNoMore.c"
#import <DirectoryService/DirectoryService.h>

@interface KeychainMinder : NSObject
{
    IBOutlet NSTextField *newPass;
    IBOutlet NSTextField *oldPass;
	SecKeychainRef myDefaultKeychain;
	IBOutlet NSWindow *appWindow;
}
- (IBAction)change:(id)sender;
- (IBAction)ignore:(id)sender;
- (IBAction)newKeychain:(id)sender;

@end
