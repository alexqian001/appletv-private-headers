/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"

@class ATVFlickrSearchAgent, ATVFlickrProvider, NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
	int _mode;	// 176 = 0xb0
	ATVFlickrSearchAgent *_searchAgent;	// 180 = 0xb4
	BOOL _searching;	// 184 = 0xb8
	NSString *_activeSearchTerm;	// 188 = 0xbc
	ATVFlickrProvider *_persistentAccountProvider;	// 192 = 0xc0
	id _screenSaverSelectionBlock;	// 196 = 0xc4
	id _photoSelectionBlock;	// 200 = 0xc8
}
@property(copy, nonatomic) id photoSelectionBlock;	// G=0x1a3e21; S=0x1a3e35; @synthesize=_photoSelectionBlock
@property(copy, nonatomic) id screenSaverSelectionBlock;	// G=0x1a3dfd; S=0x1a3e11; @synthesize=_screenSaverSelectionBlock
+ (void)initialize;	// 0x1a31f9
- (id)init;	// 0x1a329d
- (id)initWithMode:(int)mode;	// 0x1a32b1
- (void)_accountLoaded:(id)loaded;	// 0x1a45d5
- (void)_handleAccountSelection:(id)selection;	// 0x1a4171
- (void)_handleAddSelection:(id)selection;	// 0x1a3e45
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x1a42bd
- (void)_handleSearchSelection:(id)selection;	// 0x1a3fc9
- (void)_searchComplete:(id)complete;	// 0x1a487d
- (void)_searchTermRemoved:(id)removed;	// 0x1a4e75
- (id)accessibilityLabel;	// 0x1a3d65
- (BOOL)brEventAction:(id)action;	// 0x1a3d75
- (void)dealloc;	// 0x1a38ad
- (long)defaultIndex;	// 0x1a3999
- (BOOL)isNetworkDependent;	// 0x1a3d61
- (float)listVerticalOffset;	// 0x1a3979
// declared property getter: - (id)photoSelectionBlock;	// 0x1a3e21
// declared property getter: - (id)screenSaverSelectionBlock;	// 0x1a3dfd
// declared property setter: - (void)setPhotoSelectionBlock:(id)block;	// 0x1a3e35
// declared property setter: - (void)setScreenSaverSelectionBlock:(id)block;	// 0x1a3e11
- (void)textDidChange:(id)text;	// 0x1a39cd
- (void)textDidEndEditing:(id)text;	// 0x1a39d1
@end
