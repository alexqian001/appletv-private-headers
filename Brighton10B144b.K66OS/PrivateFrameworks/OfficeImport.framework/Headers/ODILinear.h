/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState;

@interface ODILinear : NSObject {
	BOOL mIsHorizontal;	// 4 = 0x4
	BOOL mWithConnectors;	// 5 = 0x5
	BOOL mStretch;	// 6 = 0x6
	float mPointHeight;	// 8 = 0x8
	float mConnectorWidth;	// 12 = 0xc
	float mPadding;	// 16 = 0x10
	BOOL mIsTextCenteredHorizontally;	// 20 = 0x14
	BOOL mIsTextCenteredVertically;	// 21 = 0x15
	unsigned mMaxPointCount;	// 24 = 0x18
	ODIState *mState;	// 28 = 0x1c
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x34aed451
+ (void)mapUnknownWithState:(id)state;	// 0x34aee589
- (id)initWithState:(id)state;	// 0x34aee5a5
- (void)map;	// 0x34aee71d
- (void)mapPoint:(id)point bounds:(CGRect)bounds;	// 0x34aeeb75
- (void)mapStyleFromPoint:(id)point shape:(id)shape;	// 0x34aeec49
- (void)mapStyleFromTransition:(id)transition shape:(id)shape;	// 0x34aeedf5
- (void)mapTransition:(id)transition pointBounds:(CGRect)bounds;	// 0x34aeec89
- (void)nextPointBounds:(CGRect *)bounds;	// 0x34aeeae1
- (void)setConnectorWidth:(float)width;	// 0x34aee6ad
- (void)setIsHorizontal:(BOOL)horizontal;	// 0x34aee66d
- (void)setIsTextCentered:(BOOL)centered;	// 0x34aee6cd
- (void)setIsTextCenteredHorizontally:(BOOL)horizontally;	// 0x34aee6ed
- (void)setIsTextCenteredVertically:(BOOL)vertically;	// 0x34aee6fd
- (void)setLogicalBounds;	// 0x34aee8d5
- (void)setMaxPointCount:(unsigned)count;	// 0x34aee70d
- (void)setPadding:(float)padding;	// 0x34aee6bd
- (void)setPointHeight:(float)height;	// 0x34aee69d
- (void)setStretch:(BOOL)stretch;	// 0x34aee68d
- (void)setWithConnectors:(BOOL)connectors;	// 0x34aee67d
@end
