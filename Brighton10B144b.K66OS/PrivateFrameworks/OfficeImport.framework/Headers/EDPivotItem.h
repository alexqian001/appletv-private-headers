/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

@interface EDPivotItem : NSObject {
	unsigned mRepeatedItemCounts;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDCollection *mItemIndexes;	// 12 = 0xc
}
@property(assign) unsigned repeatedItemCounts;	// G=0x349bcfcd; S=0x349bd095; converted property
@property(assign) int type;	// G=0x349bcfdd; S=0x349bb52d; converted property
+ (id)pivotItem;	// 0x349bb461
- (id)init;	// 0x349bb4a9
- (void)dealloc;	// 0x349bd359
- (id)itemIndexes;	// 0x349bb53d
// converted property getter: - (unsigned)repeatedItemCounts;	// 0x349bcfcd
// converted property setter: - (void)setRepeatedItemCounts:(unsigned)counts;	// 0x349bd095
// converted property setter: - (void)setType:(int)type;	// 0x349bb52d
// converted property getter: - (int)type;	// 0x349bcfdd
@end

