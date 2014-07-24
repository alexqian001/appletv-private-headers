/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0xede9d
- (id)initWithController:(id)controller;	// 0xedef5
- (void).cxx_destruct;	// 0xee0f1
- (long)cacheSize;	// 0xee0e5
- (BOOL)handlePlayForObject:(id)object;	// 0xee0ed
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0xedf4d
- (BOOL)showRecentSearches;	// 0xee0e9
@end
