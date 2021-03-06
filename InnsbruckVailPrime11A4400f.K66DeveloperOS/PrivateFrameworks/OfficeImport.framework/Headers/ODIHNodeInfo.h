/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>


@interface ODIHNodeInfo : NSObject {
	int mTreeDepth;	// 4 = 0x4
	int mRow;	// 8 = 0x8
	ODIHRange mXRange;	// 12 = 0xc
	BOOL mConnectToVerticalSide;	// 20 = 0x14
	int mExtraRowsBetweenParentAndSelf;	// 24 = 0x18
	float mXOffsetRelativeToParent;	// 28 = 0x1c
	ODIHRangeVector *mXRanges;	// 32 = 0x20
}
@property(assign) BOOL connectToVerticalSide;	// G=0x3198563d; S=0x3198564d; converted property
@property(assign) int extraRowsBetweenParentAndSelf;	// G=0x3198565d; S=0x3198566d; converted property
@property(assign) int row;	// G=0x3198561d; S=0x3198562d; converted property
@property(assign) int treeDepth;	// G=0x319855fd; S=0x3198560d; converted property
@property(assign) float xOffsetRelativeToParent;	// G=0x3198567d; S=0x3198568d; converted property
@property(assign) ODIHRange xRange;	// G=0x319855d1; S=0x319855e9; converted property
- (id)init;	// 0x319854e1
- (id).cxx_construct;	// 0x319856d1
- (void)addToXOffsetRelativeToParent:(float)parent;	// 0x3198569d
// converted property getter: - (BOOL)connectToVerticalSide;	// 0x3198563d
- (void)dealloc;	// 0x31985585
// converted property getter: - (int)extraRowsBetweenParentAndSelf;	// 0x3198565d
// converted property getter: - (int)row;	// 0x3198561d
// converted property setter: - (void)setConnectToVerticalSide:(BOOL)verticalSide;	// 0x3198564d
// converted property setter: - (void)setExtraRowsBetweenParentAndSelf:(int)aSelf;	// 0x3198566d
// converted property setter: - (void)setRow:(int)row;	// 0x3198562d
// converted property setter: - (void)setTreeDepth:(int)depth;	// 0x3198560d
// converted property setter: - (void)setXOffsetRelativeToParent:(float)parent;	// 0x3198568d
// converted property setter: - (void)setXRange:(ODIHRange)range;	// 0x319855e9
// converted property getter: - (int)treeDepth;	// 0x319855fd
// converted property getter: - (float)xOffsetRelativeToParent;	// 0x3198567d
// converted property getter: - (ODIHRange)xRange;	// 0x319855d1
- (ODIHRangeVector *)xRanges;	// 0x319856c1
@end

