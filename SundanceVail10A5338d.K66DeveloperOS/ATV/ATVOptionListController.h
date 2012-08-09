/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVOptionListController : ATVFeedController {
	BOOL _eventHandled;	// 100 = 0x64
	BOOL _shouldDismissAfterEvent;	// 101 = 0x65
}
- (id)initWithDictionary:(id)dictionary;	// 0x1126c5
- (id)initWithFeedElement:(id)feedElement;	// 0x1123d5
- (BOOL)brEventAction:(id)action;	// 0x112a55
- (void)controlWasActivated;	// 0x112b09
- (void)controlWasDeactivated;	// 0x112a95
@end
