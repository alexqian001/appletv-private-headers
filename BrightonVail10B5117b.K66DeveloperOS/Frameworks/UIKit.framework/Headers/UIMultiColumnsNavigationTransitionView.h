/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSArray, UIColor;

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {
	id _delegate;	// 84 = 0x54
	int _transition;	// 88 = 0x58
	UIView *_firstResponderViewToRestore;	// 92 = 0x5c
	unsigned _isTransitioning : 1;	// 96 = 0x60
	float _columnWidth;	// 100 = 0x64
	int _columnCount;	// 104 = 0x68
	NSArray *_fromViews;	// 108 = 0x6c
	NSArray *_toViews;	// 112 = 0x70
	NSArray *_viewsToRemove;	// 116 = 0x74
	NSArray *_viewsToAdd;	// 120 = 0x78
	NSArray *_displayedViews;	// 124 = 0x7c
	CFDictionaryRef _dividerViews;	// 128 = 0x80
	CFDictionaryRef _containerViews;	// 132 = 0x84
	UIColor *_dividersColor;	// 136 = 0x88
	float _dividersWidth;	// 140 = 0x8c
}
@property(assign, nonatomic) int columnCount;	// G=0x32f7e83d; S=0x32f7e84d; @synthesize=_columnCount
@property(assign, nonatomic) float columnWidth;	// G=0x32f7e81d; S=0x32f7e82d; @synthesize=_columnWidth
@property(assign, nonatomic) id delegate;	// G=0x32f7e7fd; S=0x32f7e80d; @synthesize=_delegate
+ (double)defaultDurationForTransition:(int)transition;	// 0x32f7d651
- (id)initWithCoder:(id)coder;	// 0x32f7d3c5
- (id)initWithFrame:(CGRect)frame;	// 0x32f7d2e9
- (id)_containerViewForView:(id)view;	// 0x32f7e665
- (id)_dividerViewForView:(id)view;	// 0x32f7e4b1
- (BOOL)_isTransitioningFromView:(id)view;	// 0x32f7e235
- (void)_navigationTransitionDidStop;	// 0x32f7e2b1
- (void)_removeContainerViewForView:(id)view;	// 0x32f7e7b9
- (void)_removeDividerViewForView:(id)view;	// 0x32f7e621
// declared property getter: - (int)columnCount;	// 0x32f7e83d
// declared property getter: - (float)columnWidth;	// 0x32f7e81d
- (void)dealloc;	// 0x32f7d5c5
// declared property getter: - (id)delegate;	// 0x32f7e7fd
- (void)encodeWithCoder:(id)coder;	// 0x32f7d4e5
- (BOOL)isTransitioning;	// 0x32f7e221
// declared property setter: - (void)setColumnCount:(int)count;	// 0x32f7e84d
// declared property setter: - (void)setColumnWidth:(float)width;	// 0x32f7e82d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f7e80d
- (BOOL)transition:(int)transition fromViews:(id)views toViews:(id)views3;	// 0x32f7d6a1
- (BOOL)transition:(int)transition toViews:(id)views;	// 0x32f7d681
@end
