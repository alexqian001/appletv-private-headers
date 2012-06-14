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
@property(readonly, retain) NSMutableArray *regions;	// G=0x313e4569; converted property
- (id)initWithTask:(unsigned)task;	// 0x313e44f1
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x313e333d
- (void)dealloc;	// 0x313e4505
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned)options;	// 0x313e4799
- (id)descriptionForRange:(VMURange)range;	// 0x313e4579
- (id)descriptionForRange:(VMURange)range options:(unsigned)options;	// 0x313e45a5
- (id)descriptionForRegionTotalsWithOptions:(unsigned)options;	// 0x313e5069
// converted property getter: - (id)regions;	// 0x313e4569
@end
