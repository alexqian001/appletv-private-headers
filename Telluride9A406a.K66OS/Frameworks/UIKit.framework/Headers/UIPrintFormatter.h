/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {
@private
	UIPrintPageRenderer *_printPageRenderer;	// 4 = 0x4
	float _maximumContentHeight;	// 8 = 0x8
	float _maximumContentWidth;	// 12 = 0xc
	UIEdgeInsets _contentInsets;	// 16 = 0x10
	int _startPage;	// 32 = 0x20
	int _pageCount;	// 36 = 0x24
	BOOL _needsRecalc;	// 40 = 0x28
}
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// G=0x359c96e1; S=0x359c930d; @synthesize=_contentInsets
@property(assign, nonatomic) float maximumContentHeight;	// G=0x359c96c1; S=0x359c92d1; @synthesize=_maximumContentHeight
@property(assign, nonatomic) float maximumContentWidth;	// G=0x359c96d1; S=0x359c9295; @synthesize=_maximumContentWidth
@property(readonly, assign, nonatomic) int pageCount;	// G=0x359c9419; @synthesize=_pageCount
@property(assign, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x359c96b1; S=0x359c9399; @synthesize=_printPageRenderer
@property(assign, nonatomic) int startPage;	// G=0x359c9705; S=0x359c9715; @synthesize=_startPage
- (id)init;	// 0x359c9191
- (CGRect)_pageContentRect:(BOOL)rect;	// 0x359c9445
- (void)_recalcIfNecessary;	// 0x359c93d9
- (int)_recalcPageCount;	// 0x359c9441
- (void)_setNeedsRecalc;	// 0x359c93c5
// declared property getter: - (UIEdgeInsets)contentInsets;	// 0x359c96e1
- (id)copyWithZone:(NSZone *)zone;	// 0x359c920d
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x359c96ad
// declared property getter: - (float)maximumContentHeight;	// 0x359c96c1
// declared property getter: - (float)maximumContentWidth;	// 0x359c96d1
// declared property getter: - (int)pageCount;	// 0x359c9419
// declared property getter: - (id)printPageRenderer;	// 0x359c96b1
- (CGRect)rectForPageAtIndex:(int)index;	// 0x359c95f5
- (void)removeFromPrintPageRenderer;	// 0x359c9245
// declared property setter: - (void)setContentInsets:(UIEdgeInsets)insets;	// 0x359c930d
// declared property setter: - (void)setMaximumContentHeight:(float)height;	// 0x359c92d1
// declared property setter: - (void)setMaximumContentWidth:(float)width;	// 0x359c9295
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x359c9399
// declared property setter: - (void)setStartPage:(int)page;	// 0x359c9715
// declared property getter: - (int)startPage;	// 0x359c9705
@end

