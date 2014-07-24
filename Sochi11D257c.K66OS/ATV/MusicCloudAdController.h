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
@property(retain, nonatomic) MusicCloudAdView *adView;	// G=0x2ba779; S=0x2ba789; @synthesize=_adView
@property(retain, nonatomic) NSString *movieURL;	// G=0x2ba7b1; S=0x2ba7c1; @synthesize=movirURL
@property(copy, nonatomic) id selectionHandler;	// G=0x2ba7e9; S=0x2ba7fd; @synthesize=_selectionHandler
- (id)init;	// 0x2ba2fd
- (id)initWithDescription:(id)description;	// 0x2ba311
- (id)initWithDescription:(id)description prompt:(id)prompt;	// 0x2ba325
- (void).cxx_destruct;	// 0x2ba80d
// declared property getter: - (id)adView;	// 0x2ba779
- (BOOL)brEventAction:(id)action;	// 0x2ba635
- (void)layoutSubcontrols;	// 0x2ba719
// declared property getter: - (id)movieURL;	// 0x2ba7b1
// declared property getter: - (id)selectionHandler;	// 0x2ba7e9
// declared property setter: - (void)setAdView:(id)view;	// 0x2ba789
// declared property setter: - (void)setMovieURL:(id)url;	// 0x2ba7c1
// declared property setter: - (void)setSelectionHandler:(id)handler;	// 0x2ba7fd
- (void)wasPushed;	// 0x2ba3e1
@end
