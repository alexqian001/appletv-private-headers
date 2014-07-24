/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRCursorControl, BRAlertControl, NSArray, BRScrollControl, BRPanelControl, BRMovieTrailersProvider, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface ATVMovieTrailersController : BRController {
	NSArray *_trailers;	// 100 = 0x64
	BRPanelControl *_panel;	// 104 = 0x68
	BRMovieTrailersProvider *_trailersProvider;	// 108 = 0x6c
	BRWaitPromptControl *_loadingControl;	// 112 = 0x70
	BRScrollControl *_scroller;	// 116 = 0x74
	BRCursorControl *_cursor;	// 120 = 0x78
	BRAlertControl *_errorControl;	// 124 = 0x7c
}
- (id)init;	// 0xb300d
- (void)_addErrorControlWithError:(id)error;	// 0xb3c1d
- (void)_addLoadingControl;	// 0xb36a5
- (void)_addTrailersMediaControl;	// 0xb37c1
- (id)_movieTrailers:(id *)trailers;	// 0xb35d1
- (void)_movieTrailersLoadFailed:(id)failed;	// 0xb3fb9
- (void)_movieTrailersLoaded:(id)loaded;	// 0xb3d81
- (void)_movieTrailersLoading:(id)loading;	// 0xb3f49
- (id)_movieTrailersTitle;	// 0xb35b1
- (void)_objectSelected:(id)selected;	// 0xb406d
- (void)_passErrorControlWithError:(id)error;	// 0xb3c9d
- (void)_passLoadingControl:(id)control;	// 0xb37b1
- (void)_passRemoveControls:(id)controls;	// 0xb3691
- (void)_passTrailersMediaControl:(id)control;	// 0xb3c0d
- (id)_providers;	// 0xb3cad
- (void)_removeControls;	// 0xb35e1
- (id)accessibilityLabel;	// 0xb35c1
- (BOOL)brEventAction:(id)action;	// 0xb3439
- (void)controlWasActivated;	// 0xb3265
- (void)dealloc;	// 0xb3151
- (BOOL)isNetworkDependent;	// 0xb32cd
- (void)layoutSubcontrols;	// 0xb32d1
@end
