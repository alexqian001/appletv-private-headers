/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIYTHistoryManager;

__attribute__((visibility("hidden")))
@interface MEYTControllerSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling> {
	RUIYTHistoryManager *_historyManager;	// 4 = 0x4
}
- (id)init;	// 0x27c121
- (void).cxx_destruct;	// 0x27c4ed
- (id)_accountController;	// 0x27c459
- (id)itemForIndex:(id)index;	// 0x27c199
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x27c325
@end
