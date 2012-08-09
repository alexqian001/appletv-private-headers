/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {
	NSMutableArray *_regions;	// 4 = 0x4
	NSMapTable *_mallocZoneStatisticsMap;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *regions;	// G=0x32242535; converted property
- (id)initWithTask:(unsigned)task;	// 0x322424bd
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x32241309
- (void)dealloc;	// 0x322424d1
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned)options;	// 0x32242765
- (id)descriptionForRange:(VMURange)range;	// 0x32242545
- (id)descriptionForRange:(VMURange)range options:(unsigned)options;	// 0x32242571
- (id)descriptionForRegionTotalsWithOptions:(unsigned)options;	// 0x32243039
// converted property getter: - (id)regions;	// 0x32242535
@end
