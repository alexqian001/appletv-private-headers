/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface BRListControlMonitor : XXUnknownSuperclass {
	BRListControl *_listControl;	// 4 = 0x4
	NSRange _loadingRange;	// 8 = 0x8
	long _dataCount;	// 16 = 0x10
}
- (void)_cancelLoads;	// 0x472739
- (void)_listSelectionFinalized:(id)finalized;	// 0x47280d
- (void)_loadImagesForOnScreenRows;	// 0x47281d
- (void)cancelCurrentLoads;	// 0x472729
- (void)dealloc;	// 0x4725f9
- (void)setListControl:(id)control;	// 0x472655
@end
