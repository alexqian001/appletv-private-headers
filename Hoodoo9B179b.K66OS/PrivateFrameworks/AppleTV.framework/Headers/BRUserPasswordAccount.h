/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAccount.h"

@class NSString;

@interface BRUserPasswordAccount : BRAccount {
@private
	NSString *_password;	// 36 = 0x24
}
@property(retain) NSString *password;	// G=0x303343b5; S=0x303343c5; converted property
- (void)_readProtectedInfo:(id)info;	// 0x303344f5
- (void)_writeProtectedInfo:(id)info;	// 0x303344a9
- (void)dealloc;	// 0x30334369
// converted property getter: - (id)password;	// 0x303343b5
// converted property setter: - (void)setPassword:(id)password;	// 0x303343c5
@end
