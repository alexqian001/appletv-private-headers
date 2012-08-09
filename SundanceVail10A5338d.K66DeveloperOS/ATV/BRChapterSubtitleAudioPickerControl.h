/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"
#import "BRControl.h"

@class BRReflectionControl, BRWaitPromptControl, BRMediaPlayer, BRTabControl, BRTextControl, BRImageControl, BRImage, BRVideoChapterProvider, BRCoverArtPreviewControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
	BRImage *_currentVideoFrame;	// 80 = 0x50
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 84 = 0x54
	BRImageControl *_screenShotPreviewControl;	// 88 = 0x58
	BRReflectionControl *_reflectionToPreviewControl;	// 92 = 0x5c
	BRVideoChapterProvider *_chapterProvider;	// 96 = 0x60
	BRCoverArtPreviewControl *_preview;	// 100 = 0x64
	BRControl *_csaPicker;	// 104 = 0x68
	BRTabControl *_tabControl;	// 108 = 0x6c
	BRTextControl *_titleControl;	// 112 = 0x70
	BRMediaPlayer *_player;	// 116 = 0x74
	BRControl *_currentContentControl;	// 120 = 0x78
	BRControl *_chapterPicker;	// 124 = 0x7c
	BRWaitPromptControl *_spinner;	// 128 = 0x80
	BOOL _controlWasActivated;	// 132 = 0x84
	BOOL _controlWasDeactivated;	// 133 = 0x85
}
+ (id)controlWithPlayer:(id)player;	// 0x294b51
- (id)init;	// 0x294bad
- (void)_addCSAPicker;	// 0x29658d
- (void)_addFullScreenVideoSnapshot;	// 0x2962d5
- (void)_animatePreviewBackToScreenshot;	// 0x2962dd
- (void)_animateScreenshotToPreview;	// 0x2962d9
- (BOOL)_chapterPreviewsAvailable;	// 0x295905
- (void)_createCSAPicker;	// 0x296321
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x2965cd
- (void)_loadAudioList;	// 0x295f4d
- (void)_loadChapters;	// 0x2959e1
- (void)_loadGraphicalChapterList;	// 0x295b95
- (void)_loadMediaOptionList:(id)list selectedOption:(id)option selectionHandler:(id)handler;	// 0x295fd9
- (void)_loadSubtitleList;	// 0x295ec1
- (void)_loadTextualChapterList;	// 0x295a21
- (void)_setAudioOption:(id)option;	// 0x29588d
- (void)_setChapter:(id)chapter;	// 0x295561
- (void)_setSubtitleOption:(id)option;	// 0x2956d5
- (id)_titleControlItemLabelAttributes;	// 0x29668d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2954c9
- (BOOL)brEventAction:(id)action;	// 0x2953a5
- (void)controlWasActivated;	// 0x295169
- (void)dealloc;	// 0x294c4d
- (void)layoutSubcontrols;	// 0x2951c1
- (void)orderOut;	// 0x295115
- (void)setPlayer:(id)player;	// 0x294d9d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x29545d
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x2954c1
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x2954c5
@end
