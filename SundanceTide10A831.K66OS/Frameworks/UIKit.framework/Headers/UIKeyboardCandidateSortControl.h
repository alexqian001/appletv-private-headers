/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISegmentedControl, UIKeyboardCandidateBarSegmentControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortControl : UIView {
	UIKeyboardCandidateBarSegmentControl *_segmentedControl;	// 84 = 0x54
	int _visualStyle;	// 88 = 0x58
}
@property(readonly, assign) UISegmentedControl *segmentedControl;	// G=0x31fa4305; @synthesize=_segmentedControl
- (id)initWithFrame:(CGRect)frame visualStyle:(int)style;	// 0x31fa3cb5
- (void)addSegmentedControlWithFrame:(CGRect)frame;	// 0x31fa3689
- (void)dealloc;	// 0x31fa3d99
- (void)layoutSubviews;	// 0x31fa3de5
// declared property getter: - (id)segmentedControl;	// 0x31fa4305
- (void)selectNextSegment;	// 0x31fa4121
- (void)selectPreviousSegment;	// 0x31fa40c1
- (void)setSortControlTitles:(id)titles;	// 0x31fa419d
- (void)updateTitleTextAttributes;	// 0x31fa3a39
@end
