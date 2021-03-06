/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UITableViewIndex, UIKeyboardCandidateScrollViewController;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollView : UIScrollView {
	UIKeyboardCandidateScrollViewController *_parentViewController;	// 464 = 0x1d0
	UIView *_headerView;	// 468 = 0x1d4
	float _previousGroupBarStartingY;	// 472 = 0x1d8
	UITableViewIndex *_index;	// 476 = 0x1dc
}
@property(retain, nonatomic) UIView *headerView;	// G=0x33da2e31; S=0x33da2c21; @synthesize=_headerView
@property(retain, nonatomic) UITableViewIndex *index;	// G=0x33da2e61; S=0x33da2d39; @synthesize=_index
@property(assign, nonatomic) UIKeyboardCandidateScrollViewController *parentViewController;	// G=0x33da2e11; S=0x33da2e21; @synthesize=_parentViewController
@property(assign, nonatomic) float previousGroupBarStartingY;	// G=0x33da2e41; S=0x33da2e51; @synthesize=_previousGroupBarStartingY
- (id)initWithFrame:(CGRect)frame;	// 0x33da1d69
- (void)addSubview:(id)subview;	// 0x33da2ba9
- (void)dealloc;	// 0x33da1df5
- (void)drawRect:(CGRect)rect;	// 0x33da2009
- (float)groupBarStartingY;	// 0x33da26c1
// declared property getter: - (id)headerView;	// 0x33da2e31
// declared property getter: - (id)index;	// 0x33da2e61
- (BOOL)isCellVisible:(id)visible;	// 0x33da1f6d
// declared property getter: - (id)parentViewController;	// 0x33da2e11
// declared property getter: - (float)previousGroupBarStartingY;	// 0x33da2e41
- (void)scrollToBottomWithAnimation:(BOOL)animation;	// 0x33da1eed
- (void)scrollToOffsetFromTop:(float)top withAnimation:(BOOL)animation;	// 0x33da1e6d
- (void)scrollToTopWithAnimation:(BOOL)animation;	// 0x33da1e59
- (void)setContentOffset:(CGPoint)offset;	// 0x33da285d
// declared property setter: - (void)setHeaderView:(id)view;	// 0x33da2c21
// declared property setter: - (void)setIndex:(id)index;	// 0x33da2d39
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x33da2e21
// declared property setter: - (void)setPreviousGroupBarStartingY:(float)y;	// 0x33da2e51
- (void)updateIndexFrame;	// 0x33da2761
@end

