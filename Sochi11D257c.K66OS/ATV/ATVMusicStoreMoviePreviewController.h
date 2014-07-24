/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class ATVURLDocument, BRWaitPromptControl, NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoviePreviewController : BRController {
	BRWaitPromptControl *_waitPrompt;	// 100 = 0x64
	NSTimer *_timer;	// 104 = 0x68
	NSDictionary *_dictionary;	// 108 = 0x6c
	ATVURLDocument *_document;	// 112 = 0x70
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x20bce9
- (id)init;	// 0x20bd35
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x20bd39
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x20c2b5
- (void)_showPromptTimer:(id)timer;	// 0x20c599
- (BOOL)brEventAction:(id)action;	// 0x20c5d1
- (void)controlWasActivated;	// 0x20c099
- (void)controlWasDeactivated;	// 0x20c525
- (void)dealloc;	// 0x20bff5
@end
