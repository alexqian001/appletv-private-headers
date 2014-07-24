/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class NSArray, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {
	unsigned _permittedArrowDirections;	// 24 = 0x18
	NSArray *_passthroughViews;	// 28 = 0x1c
	UIBarButtonItem *_anchorBarButtonItem;	// 32 = 0x20
	UIView *_anchorView;	// 36 = 0x24
}
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;	// G=0x2f824ddd; S=0x2f824ded; @synthesize=_anchorBarButtonItem
@property(retain, nonatomic) UIView *anchorView;	// G=0x2f824dfd; S=0x2f824e0d; @synthesize=_anchorView
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x2f824db9; S=0x2f824dcd; @synthesize=_passthroughViews
@property(assign, nonatomic) unsigned permittedArrowDirections;	// G=0x2f824d99; S=0x2f824da9; @synthesize=_permittedArrowDirections
- (id)initWithCoder:(id)coder;	// 0x2f824a81
// declared property getter: - (id)anchorBarButtonItem;	// 0x2f824ddd
// declared property getter: - (id)anchorView;	// 0x2f824dfd
- (void)dealloc;	// 0x2f824a09
- (id)defaultSegueClassName;	// 0x2f824c49
- (void)encodeWithCoder:(id)coder;	// 0x2f824b81
// declared property getter: - (id)passthroughViews;	// 0x2f824db9
// declared property getter: - (unsigned)permittedArrowDirections;	// 0x2f824d99
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x2f824c55
// declared property setter: - (void)setAnchorBarButtonItem:(id)item;	// 0x2f824ded
// declared property setter: - (void)setAnchorView:(id)view;	// 0x2f824e0d
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x2f824dcd
// declared property setter: - (void)setPermittedArrowDirections:(unsigned)directions;	// 0x2f824da9
@end
