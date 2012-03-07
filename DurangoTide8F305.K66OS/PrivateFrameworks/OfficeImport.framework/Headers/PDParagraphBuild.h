/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDBuild.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild {
@private
	NSMutableArray *mTimeNodeDataList;	// 12 = 0xc
	double mAutoAdvanceTime;	// 16 = 0x10
	BOOL mIsReversedParagraphOrder;	// 24 = 0x18
	int mBuildLevel;	// 28 = 0x1c
	int mType;	// 32 = 0x20
}
@property(assign) double autoAdvanceTime;	// G=0x345cb279; S=0x345305d5; converted property
@property(assign) int buildLevel;	// G=0x345cb299; S=0x345305f9; converted property
@property(assign) BOOL isReversedParagraphOrder;	// G=0x345cb289; S=0x345305e9; converted property
@property(assign) int type;	// G=0x345cb2a9; S=0x34530609; converted property
- (id)init;	// 0x3453052d
- (id)addTimeNodeData;	// 0x345cb559
// converted property getter: - (double)autoAdvanceTime;	// 0x345cb279
// converted property getter: - (int)buildLevel;	// 0x345cb299
- (void)dealloc;	// 0x34530901
// converted property getter: - (BOOL)isReversedParagraphOrder;	// 0x345cb289
// converted property setter: - (void)setAutoAdvanceTime:(double)time;	// 0x345305d5
// converted property setter: - (void)setBuildLevel:(int)level;	// 0x345305f9
// converted property setter: - (void)setIsReversedParagraphOrder:(BOOL)order;	// 0x345305e9
// converted property setter: - (void)setType:(int)type;	// 0x34530609
- (id)timeNodeDataAtIndex:(int)index;	// 0x345cb5a9
- (id)timeNodeDataList;	// 0x345cb269
- (int)timeNodeDataListCount;	// 0x345cb5c9
// converted property getter: - (int)type;	// 0x345cb2a9
@end
