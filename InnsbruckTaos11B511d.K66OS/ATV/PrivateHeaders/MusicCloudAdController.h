/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSString, MusicCloudAdView;

__attribute__((visibility("hidden")))
@interface MusicCloudAdController : BRViewController {
	MusicCloudAdView *_adView;	// 104 = 0x68
	NSString *movirURL;	// 108 = 0x6c
	id _selectionHandler;	// 112 = 0x70
}
@property(retain, nonatomic) MusicCloudAdView *adView;	// G=0x2abb2d; S=0x2abb3d; @synthesize=_adView
@property(retain, nonatomic) NSString *movieURL;	// G=0x2abb65; S=0x2abb75; @synthesize=movirURL
@property(copy, nonatomic) id selectionHandler;	// G=0x2abb9d; S=0x2abbb1; @synthesize=_selectionHandler
- (id)init;	// 0x2ab6b1
- (id)initWithDescription:(id)description;	// 0x2ab6c5
- (id)initWithDescription:(id)description prompt:(id)prompt;	// 0x2ab6d9
- (void).cxx_destruct;	// 0x2abbc1
// declared property getter: - (id)adView;	// 0x2abb2d
- (BOOL)brEventAction:(id)action;	// 0x2ab9e9
- (void)layoutSubcontrols;	// 0x2abacd
// declared property getter: - (id)movieURL;	// 0x2abb65
// declared property getter: - (id)selectionHandler;	// 0x2abb9d
// declared property setter: - (void)setAdView:(id)view;	// 0x2abb3d
// declared property setter: - (void)setMovieURL:(id)url;	// 0x2abb75
// declared property setter: - (void)setSelectionHandler:(id)handler;	// 0x2abbb1
- (void)wasPushed;	// 0x2ab795
@end
