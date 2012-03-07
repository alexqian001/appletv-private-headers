/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import <BRMediaMenuController.h> // Unknown library

@class NSString, ATVFlickrProvider, ATVFlickrSearchAgent;

@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 136 = 0x88
	ATVFlickrSearchAgent *_searchAgent;	// 140 = 0x8c
	BOOL _searching;	// 144 = 0x90
	NSString *_activeSearchTerm;	// 148 = 0x94
	ATVFlickrProvider *_persistentAccountProvider;	// 152 = 0x98
}
+ (void)initialize;	// 0x3369aa91
+ (id)menuController;	// 0x3369ab61
+ (id)screenSaverMenuController;	// 0x3369ab25
- (id)init;	// 0x3369aa79
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x3369b805
- (void)_accountLoaded:(id)loaded;	// 0x3369ac79
- (void)_handleAccountSelection:(id)selection;	// 0x3369a93d
- (void)_handleAddSelection:(id)selection;	// 0x3369aee9
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x3369a759
- (void)_handleSearchSelection:(id)selection;	// 0x3369b331
- (void)_searchComplete:(id)complete;	// 0x3369b061
- (id)accessibilityLabel;	// 0x3369b04d
- (void)dealloc;	// 0x3369abe5
- (long)defaultIndex;	// 0x3369aa45
- (BOOL)isNetworkDependent;	// 0x3369a6f9
- (float)listVerticalOffset;	// 0x3369bca5
- (void)textDidChange:(id)text;	// 0x3369a6f5
- (void)textDidEndEditing:(id)text;	// 0x3369b4bd
@end
