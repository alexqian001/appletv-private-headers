/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIFloatArray : NSObject {
@private
	int _count;	// 4 = 0x4
	int _gapCount;	// 8 = 0x8
	int *_gaps;	// 12 = 0xc
	float _gapValue;	// 16 = 0x10
	float _minValue;	// 20 = 0x14
	union {
		float singleton;
		float *array;
	} _values;	// 24 = 0x18
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	} _floatArrayFlags;	// 28 = 0x1c
}
@property(readonly, assign) float minValue;	// G=0x3309a9b9; converted property
- (id)init;	// 0x3309a7bd
- (XXStruct_7U_TLD)_indexesViaArrayFromOffset:(float)offset toOffset:(float)offset2;	// 0x3309b0e1
- (XXStruct_7U_TLD)_indexesViaSingletonFromOffset:(float)offset toOffset:(float)offset2;	// 0x3309ae0d
- (BOOL)_setupGapIndexesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x3309a645
- (BOOL)_setupValuesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x3309a4c5
- (BOOL)_setupValuesWithCount:(int)count singleValue:(float)value isRefresh:(BOOL)refresh;	// 0x3309a3e9
- (BOOL)_setupWithDataProvider:(id)dataProvider valueIsSingleton:(BOOL)singleton singletonValue:(float)value isRefresh:(BOOL)refresh;	// 0x3309a719
- (id)copyWithZone:(NSZone *)zone;	// 0x3309a809
- (void)dealloc;	// 0x3309a8b9
- (void)hideGaps:(BOOL)gaps;	// 0x3309b2dd
- (int)indexForGapIndex:(int)gapIndex;	// 0x3309b2ad
- (XXStruct_7U_TLD)indexesFromOffset:(float)offset toOffset:(float)offset2;	// 0x3309b261
// converted property getter: - (float)minValue;	// 0x3309a9b9
- (CGPoint)offsetsForGapIndex:(int)gapIndex;	// 0x3309ac81
- (CGPoint)offsetsForIndex:(int)index;	// 0x3309aae1
- (BOOL)refreshWithDataProvider:(id)dataProvider;	// 0x3309a94d
- (BOOL)refreshWithDataProvider:(id)dataProvider singleValue:(float)value;	// 0x3309a929
- (float)singleValue;	// 0x3309a971
- (float)sum;	// 0x3309a9d9
- (int)valueCount;	// 0x3309a9c9
@end
