/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRHeaderControl, BRListControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaListControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	BRControl *_preview;	// 88 = 0x58
	float _previewDelay;	// 92 = 0x5c
	NSTimer *_previewDelayTimer;	// 96 = 0x60
	BOOL _shareItemArtwork;	// 100 = 0x64
	BRHeaderControl *_header;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x380511; @synthesize=_header
@property(readonly, assign, nonatomic) BRListControl *list;	// G=0x380551; @synthesize=_list
@property(retain) id listProviders;	// G=0x3800e5; S=0x3800a9; converted property
@property(readonly, assign, nonatomic) BRControl *preview;	// G=0x380561; @synthesize=_preview
@property(assign) long selection;	// G=0x38043d; S=0x380401; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x380521; S=0x380539; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x38022d; S=0x3801e9; converted property
@property(retain) id title;	// G=0x380149; S=0x380105; converted property
@property(retain) id titleImage;	// G=0x3801c9; S=0x380169; converted property
+ (BOOL)_wantsHeader;	// 0x380571
- (id)init;	// 0x37fb89
- (void)_cleanupPreviewDelayTimer;	// 0x380635
- (void)_previewDelayTimerHandler:(id)handler;	// 0x380661
- (void)_scrollWillStart:(id)_scroll;	// 0x380575
- (void)_scrollWillStop:(id)_scroll;	// 0x380585
- (void)_updatePreviewWithDelay;	// 0x380595
- (id)accessibilityLabel;	// 0x3804d1
- (id)accessibilityScreenContent;	// 0x3804f1
- (void)controlWasActivated;	// 0x37ff31
- (void)controlWasDeactivated;	// 0x37fff1
- (void)dealloc;	// 0x37fcb9
// declared property getter: - (id)header;	// 0x380511
- (long)itemCount;	// 0x38045d
- (void)layoutSubcontrols;	// 0x37fd5d
// declared property getter: - (id)list;	// 0x380551
- (id)listProviderRequester;	// 0x3803f1
// converted property getter: - (id)listProviders;	// 0x3800e5
// declared property getter: - (id)preview;	// 0x380561
- (void)reload;	// 0x380495
// converted property getter: - (long)selection;	// 0x38043d
// converted property setter: - (void)setListProviders:(id)providers;	// 0x3800a9
// converted property setter: - (void)setSelection:(long)selection;	// 0x380401
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x380539
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3801e9
// converted property setter: - (void)setTitle:(id)title;	// 0x380105
// converted property setter: - (void)setTitleImage:(id)image;	// 0x380169
// declared property getter: - (BOOL)shareItemArtwork;	// 0x380521
// converted property getter: - (id)subtitle;	// 0x38022d
// converted property getter: - (id)title;	// 0x380149
// converted property getter: - (id)titleImage;	// 0x3801c9
- (void)updatePreview;	// 0x38024d
@end
