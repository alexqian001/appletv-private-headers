/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRAlertControl.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface BRErrorControl : BRAlertControl {
	NSError *_error;	// 112 = 0x70
}
- (id)initWithError:(id)error;	// 0x2c2e25
- (void)controlWasDeactivated;	// 0x2c2f71
- (void)dealloc;	// 0x2c2f25
@end
