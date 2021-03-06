/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRAccountType, NSString;

__attribute__((visibility("hidden")))
@interface BRAuthenticationErrorResolutionController : BRController {
	BRAccountType *_accountType;	// 96 = 0x60
	NSString *_title;	// 100 = 0x64
	NSString *_instructions;	// 104 = 0x68
}
+ (id)errorResolutionControllerWithAccountType:(id)accountType title:(id)title instructions:(id)instructions;	// 0x25952d
- (id)initWithAccountType:(id)accountType title:(id)title instructions:(id)instructions;	// 0x259575
- (void)controlWasActivated;	// 0x2596b9
- (void)dealloc;	// 0x259641
@end

