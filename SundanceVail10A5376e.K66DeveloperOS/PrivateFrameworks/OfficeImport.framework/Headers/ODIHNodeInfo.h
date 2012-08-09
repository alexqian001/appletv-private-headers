/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface ODIHNodeInfo : NSObject {
	int mTreeDepth;	// 4 = 0x4
	int mRow;	// 8 = 0x8
	ODIHRange mXRange;	// 12 = 0xc
	BOOL mConnectToVerticalSide;	// 20 = 0x14
	int mExtraRowsBetweenParentAndSelf;	// 24 = 0x18
	float mXOffsetRelativeToParent;	// 28 = 0x1c
	ODIHRangeVector *mXRanges;	// 32 = 0x20
}
@property(assign) BOOL connectToVerticalSide;	// G=0x371e711d; S=0x371e712d; converted property
@property(assign) int extraRowsBetweenParentAndSelf;	// G=0x371e713d; S=0x371e714d; converted property
@property(assign) int row;	// G=0x371e70fd; S=0x371e710d; converted property
@property(assign) int treeDepth;	// G=0x371e70dd; S=0x371e70ed; converted property
@property(assign) float xOffsetRelativeToParent;	// G=0x371e715d; S=0x371e716d; converted property
@property(assign) ODIHRange xRange;	// G=0x371e70b1; S=0x371e70c9; converted property
- (id)init;	// 0x371e6fc1
- (id).cxx_construct;	// 0x371e71b1
- (void)addToXOffsetRelativeToParent:(float)parent;	// 0x371e717d
// converted property getter: - (BOOL)connectToVerticalSide;	// 0x371e711d
- (void)dealloc;	// 0x371e7065
// converted property getter: - (int)extraRowsBetweenParentAndSelf;	// 0x371e713d
// converted property getter: - (int)row;	// 0x371e70fd
// converted property setter: - (void)setConnectToVerticalSide:(BOOL)verticalSide;	// 0x371e712d
// converted property setter: - (void)setExtraRowsBetweenParentAndSelf:(int)aSelf;	// 0x371e714d
// converted property setter: - (void)setRow:(int)row;	// 0x371e710d
// converted property setter: - (void)setTreeDepth:(int)depth;	// 0x371e70ed
// converted property setter: - (void)setXOffsetRelativeToParent:(float)parent;	// 0x371e716d
// converted property setter: - (void)setXRange:(ODIHRange)range;	// 0x371e70c9
// converted property getter: - (int)treeDepth;	// 0x371e70dd
// converted property getter: - (float)xOffsetRelativeToParent;	// 0x371e715d
// converted property getter: - (ODIHRange)xRange;	// 0x371e70b1
- (ODIHRangeVector *)xRanges;	// 0x371e71a1
@end
