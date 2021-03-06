/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSObject, ATVFadeLayer, NSArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ATVScrollingCommentsView : BRControl {
	BOOL __shouldAnimateWithConstVelocity;	// 84 = 0x54
	NSArray *_commentViews;	// 88 = 0x58
	int _currentIndex;	// 92 = 0x5c
	XXStruct_qlg9jA _pageOverlap;	// 96 = 0x60
	float __snapOffset;	// 100 = 0x64
	NSArray *__activeCommentViews;	// 104 = 0x68
	ATVFadeLayer *__topFade;	// 108 = 0x6c
	ATVFadeLayer *__bottomFade;	// 112 = 0x70
	NSObject<OS_dispatch_source> *_axScrollingCommentTimer;	// 116 = 0x74
}
@property(copy, nonatomic) NSArray *_activeCommentViews;	// G=0x102ec5; S=0x102ed9; @synthesize=__activeCommentViews
@property(retain, nonatomic) ATVFadeLayer *_bottomFade;	// G=0x102f21; S=0x102f31; @synthesize=__bottomFade
@property(assign, nonatomic) BOOL _shouldAnimateWithConstVelocity;	// G=0x102ea5; S=0x102eb5; @synthesize=__shouldAnimateWithConstVelocity
@property(assign, nonatomic) float _snapOffset;	// G=0x102e85; S=0x102e95; @synthesize=__snapOffset
@property(retain, nonatomic) ATVFadeLayer *_topFade;	// G=0x102ee9; S=0x102ef9; @synthesize=__topFade
@property(retain, nonatomic) NSObject<OS_dispatch_source> *axScrollingCommentTimer;	// G=0x102f59; S=0x102f69; @synthesize=_axScrollingCommentTimer
@property(retain, nonatomic) NSArray *commentViews;	// G=0x102e01; S=0x102e11; @synthesize=_commentViews
@property(assign, nonatomic) int currentIndex;	// G=0x102e39; S=0x102e49; @synthesize=_currentIndex
@property(assign, nonatomic) XXStruct_qlg9jA pageOverlap;	// G=0x102e59; S=0x102e75; @synthesize=_pageOverlap
+ (id)commentsViewWithCommentViews:(id)commentViews initialIndex:(int)index;	// 0x101a21
- (id)init;	// 0x101a75
- (id)initWithCommentViews:(id)commentViews initialIndex:(int)index;	// 0x101a8d
- (void).cxx_destruct;	// 0x102f91
- (void)_accessibilityAnnounceCommentChanges;	// 0x1034d5
// declared property getter: - (id)_activeCommentViews;	// 0x102ec5
// declared property getter: - (id)_bottomFade;	// 0x102f21
- (BOOL)_goBackward;	// 0x103331
- (BOOL)_goForward;	// 0x103071
- (CGSize)_maxCommentSize;	// 0x103001
// declared property getter: - (BOOL)_shouldAnimateWithConstVelocity;	// 0x102ea5
// declared property getter: - (float)_snapOffset;	// 0x102e85
// declared property getter: - (id)_topFade;	// 0x102ee9
- (id)accessibilityControls;	// 0x102df1
- (id)accessibilityLabel;	// 0x102c2d
// declared property getter: - (id)axScrollingCommentTimer;	// 0x102f59
- (BOOL)brEventAction:(id)action;	// 0x102b49
// declared property getter: - (id)commentViews;	// 0x102e01
// declared property getter: - (int)currentIndex;	// 0x102e39
- (void)layoutSubcontrols;	// 0x101d99
// declared property getter: - (XXStruct_qlg9jA)pageOverlap;	// 0x102e59
// declared property setter: - (void)setAxScrollingCommentTimer:(id)timer;	// 0x102f69
// declared property setter: - (void)setCommentViews:(id)views;	// 0x102e11
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x102e49
// declared property setter: - (void)setPageOverlap:(XXStruct_qlg9jA)overlap;	// 0x102e75
// declared property setter: - (void)set_activeCommentViews:(id)views;	// 0x102ed9
// declared property setter: - (void)set_bottomFade:(id)fade;	// 0x102f31
// declared property setter: - (void)set_shouldAnimateWithConstVelocity:(BOOL)constVelocity;	// 0x102eb5
// declared property setter: - (void)set_snapOffset:(float)offset;	// 0x102e95
// declared property setter: - (void)set_topFade:(id)fade;	// 0x102ef9
@end

