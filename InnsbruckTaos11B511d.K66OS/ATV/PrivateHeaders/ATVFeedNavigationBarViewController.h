/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVNavigationBarController, BRController;

__attribute__((visibility("hidden")))
@interface ATVFeedNavigationBarViewController : ATVFeedController {
	ATVNavigationBarController *_navigationBarController;	// 104 = 0x68
	BRController *_selectedController;	// 108 = 0x6c
}
@property(retain, nonatomic) BRController *selectedController;	// G=0x1268e5; S=0x1268f5; @synthesize=_selectedController
- (id)initWithDictionary:(id)dictionary;	// 0x1264b5
- (id)initWithFeedElement:(id)feedElement;	// 0x126449
- (void).cxx_destruct;	// 0x12691d
- (void)controlWasActivated;	// 0x12652d
// declared property getter: - (id)selectedController;	// 0x1268e5
// declared property setter: - (void)setSelectedController:(id)controller;	// 0x1268f5
@end
