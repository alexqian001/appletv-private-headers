/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVFeedController.h"

@class NSString, ATVNavigationBarController;

__attribute__((visibility("hidden")))
@interface ATVFeedNavigationBarViewController : ATVFeedController {
	ATVNavigationBarController *_navigationBarController;	// 100 = 0x64
	NSString *_onNavigate;	// 104 = 0x68
}
- (id)initWithDictionary:(id)dictionary;	// 0x379e6d
- (id)initWithFeedElement:(id)feedElement;	// 0x379db1
- (void).cxx_destruct;	// 0x37a255
- (void)controlWasActivated;	// 0x379ef1
@end

