/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject {
@private
	int mType;	// 4 = 0x4
	int mPresetType;	// 8 = 0x8
	NSMutableArray *mAdjustments;	// 12 = 0xc
}
@property(assign) int presetType;	// G=0x31248489; S=0x31248499; converted property
@property(assign) int type;	// G=0x31248469; S=0x31248479; converted property
- (id)init;	// 0x312483b9
- (void)addAdjustment:(id)adjustment;	// 0x312484b9
- (id)adjustments;	// 0x312484a9
- (void)dealloc;	// 0x3124841d
// converted property getter: - (int)presetType;	// 0x31248489
// converted property setter: - (void)setPresetType:(int)type;	// 0x31248499
// converted property setter: - (void)setType:(int)type;	// 0x31248479
// converted property getter: - (int)type;	// 0x31248469
@end

