/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class NSDictionary, ATVURLDocument, BRWaitPromptControl, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoviePreviewController : BRController {
	BRWaitPromptControl *_waitPrompt;	// 100 = 0x64
	NSTimer *_timer;	// 104 = 0x68
	NSDictionary *_dictionary;	// 108 = 0x6c
	ATVURLDocument *_document;	// 112 = 0x70
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x203e85
- (id)init;	// 0x203ed1
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x203ed5
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x204449
- (void)_showPromptTimer:(id)timer;	// 0x20478d
- (BOOL)brEventAction:(id)action;	// 0x2047c5
- (void)controlWasActivated;	// 0x20422d
- (void)controlWasDeactivated;	// 0x204719
- (void)dealloc;	// 0x204189
@end
