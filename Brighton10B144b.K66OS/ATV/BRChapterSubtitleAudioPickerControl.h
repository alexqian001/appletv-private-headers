/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRTabControlDelegate.h"

@class BRImageControl, BRImage, BRVideoChapterProvider, BRCoverArtPreviewControl, BRReflectionControl, BRWaitPromptControl, BRMediaPlayer, BRTabControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
	BRImage *_currentVideoFrame;	// 84 = 0x54
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 88 = 0x58
	BRImageControl *_screenShotPreviewControl;	// 92 = 0x5c
	BRReflectionControl *_reflectionToPreviewControl;	// 96 = 0x60
	BRVideoChapterProvider *_chapterProvider;	// 100 = 0x64
	BRCoverArtPreviewControl *_preview;	// 104 = 0x68
	BRControl *_csaPicker;	// 108 = 0x6c
	BRTabControl *_tabControl;	// 112 = 0x70
	BRTextControl *_titleControl;	// 116 = 0x74
	BRMediaPlayer *_player;	// 120 = 0x78
	BRControl *_currentContentControl;	// 124 = 0x7c
	BRControl *_chapterPicker;	// 128 = 0x80
	BRWaitPromptControl *_spinner;	// 132 = 0x84
	BOOL _controlWasActivated;	// 136 = 0x88
	BOOL _controlWasDeactivated;	// 137 = 0x89
	BOOL _playbackShouldRemainPaused;	// 138 = 0x8a
}
+ (id)controlWithPlayer:(id)player;	// 0x2cf179
- (id)init;	// 0x2cf1d5
- (void)_addCSAPicker;	// 0x2d15a5
- (void)_addFullScreenVideoSnapshot;	// 0x2d1285
- (void)_animatePreviewBackToScreenshot;	// 0x2d128d
- (void)_animateScreenshotToPreview;	// 0x2d1289
- (BOOL)_chapterPreviewsAvailable;	// 0x2d0185
- (void)_createCSAPicker;	// 0x2d1339
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x2d15e5
- (void)_loadAudioList;	// 0x2d09dd
- (void)_loadCaptionsList;	// 0x2d0a69
- (void)_loadChapters;	// 0x2d046d
- (void)_loadGraphicalChapterList;	// 0x2d0621
- (void)_loadMediaOptionList:(id)list selectedOption:(id)option selectionHandler:(id)handler;	// 0x2d0c41
- (void)_loadMediaOptionList:(id)list selectedOption:(id)option selectionHandler:(id)handler isSubtitleOptionsList:(BOOL)list4;	// 0x2d0c65
- (void)_loadSpeakersList;	// 0x2d10cd
- (void)_loadSubtitleList;	// 0x2d094d
- (void)_loadTextualChapterList;	// 0x2d04ad
- (void)_selectSpeaker:(id)speaker;	// 0x2d0261
- (void)_setAudioOption:(id)option;	// 0x2d010d
- (void)_setChapter:(id)chapter;	// 0x2cfd45
- (void)_setSubtitleOption:(id)option;	// 0x2cfeb9
- (id)_titleControlItemLabelAttributes;	// 0x2d16a5
- (void)_toggleClosedCaptions:(id)captions;	// 0x2d0071
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2cfcad
- (BOOL)brEventAction:(id)action;	// 0x2cfb6d
- (void)controlWasActivated;	// 0x2cf931
- (void)dealloc;	// 0x2cf275
- (void)layoutSubcontrols;	// 0x2cf989
- (void)orderOut;	// 0x2cf8dd
- (void)setPlayer:(id)player;	// 0x2cf3f5
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x2cfc25
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x2cfca5
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x2cfca9
@end
