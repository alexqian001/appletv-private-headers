/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

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
@property(copy, nonatomic) NSArray *_activeCommentViews;	// G=0xfef7d; S=0xfef91; @synthesize=__activeCommentViews
@property(retain, nonatomic) ATVFadeLayer *_bottomFade;	// G=0xfefd9; S=0xfefe9; @synthesize=__bottomFade
@property(assign, nonatomic) BOOL _shouldAnimateWithConstVelocity;	// G=0xfef5d; S=0xfef6d; @synthesize=__shouldAnimateWithConstVelocity
@property(assign, nonatomic) float _snapOffset;	// G=0xfef3d; S=0xfef4d; @synthesize=__snapOffset
@property(retain, nonatomic) ATVFadeLayer *_topFade;	// G=0xfefa1; S=0xfefb1; @synthesize=__topFade
@property(retain, nonatomic) NSObject<OS_dispatch_source> *axScrollingCommentTimer;	// G=0xff011; S=0xff021; @synthesize=_axScrollingCommentTimer
@property(retain, nonatomic) NSArray *commentViews;	// G=0xfeeb9; S=0xfeec9; @synthesize=_commentViews
@property(assign, nonatomic) int currentIndex;	// G=0xfeef1; S=0xfef01; @synthesize=_currentIndex
@property(assign, nonatomic) XXStruct_qlg9jA pageOverlap;	// G=0xfef11; S=0xfef2d; @synthesize=_pageOverlap
+ (id)commentsViewWithCommentViews:(id)commentViews initialIndex:(int)index;	// 0xfdad9
- (id)init;	// 0xfdb2d
- (id)initWithCommentViews:(id)commentViews initialIndex:(int)index;	// 0xfdb45
- (void).cxx_destruct;	// 0xff049
- (void)_accessibilityAnnounceCommentChanges;	// 0xff58d
// declared property getter: - (id)_activeCommentViews;	// 0xfef7d
// declared property getter: - (id)_bottomFade;	// 0xfefd9
- (BOOL)_goBackward;	// 0xff3e9
- (BOOL)_goForward;	// 0xff129
- (CGSize)_maxCommentSize;	// 0xff0b9
// declared property getter: - (BOOL)_shouldAnimateWithConstVelocity;	// 0xfef5d
// declared property getter: - (float)_snapOffset;	// 0xfef3d
// declared property getter: - (id)_topFade;	// 0xfefa1
- (id)accessibilityControls;	// 0xfeea9
- (id)accessibilityLabel;	// 0xfece5
// declared property getter: - (id)axScrollingCommentTimer;	// 0xff011
- (BOOL)brEventAction:(id)action;	// 0xfec01
// declared property getter: - (id)commentViews;	// 0xfeeb9
// declared property getter: - (int)currentIndex;	// 0xfeef1
- (void)layoutSubcontrols;	// 0xfde51
// declared property getter: - (XXStruct_qlg9jA)pageOverlap;	// 0xfef11
// declared property setter: - (void)setAxScrollingCommentTimer:(id)timer;	// 0xff021
// declared property setter: - (void)setCommentViews:(id)views;	// 0xfeec9
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0xfef01
// declared property setter: - (void)setPageOverlap:(XXStruct_qlg9jA)overlap;	// 0xfef2d
// declared property setter: - (void)set_activeCommentViews:(id)views;	// 0xfef91
// declared property setter: - (void)set_bottomFade:(id)fade;	// 0xfefe9
// declared property setter: - (void)set_shouldAnimateWithConstVelocity:(BOOL)constVelocity;	// 0xfef6d
// declared property setter: - (void)set_snapOffset:(float)offset;	// 0xfef4d
// declared property setter: - (void)set_topFade:(id)fade;	// 0xfefb1
@end
