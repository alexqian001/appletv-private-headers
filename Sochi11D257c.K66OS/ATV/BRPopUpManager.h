/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSMutableArray, BRWindow;

__attribute__((visibility("hidden")))
@interface BRPopUpManager : BRSingleton {
	NSMutableArray *_queuedPopUps;	// 4 = 0x4
	BRWindow *_popUpContainerWindow;	// 8 = 0x8
	double _lastUpdate;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x440129
+ (id)singleton;	// 0x440139
- (id)init;	// 0x440149
- (void)_addControlToQueue:(id)queue;	// 0x440c19
- (void)_animateRemovePopupWithIdentifier:(id)identifier;	// 0x440541
- (BOOL)_canDisplay;	// 0x440b91
- (void)_displayPopUp:(id)up;	// 0x440951
- (id)_popUpForIdentifier:(id)identifier;	// 0x440ae1
- (void)_processPopUps;	// 0x4408b1
- (void)_removeAnimationFinished:(id)finished;	// 0x4407f5
- (void)_removeControlFromQueue:(id)queue;	// 0x440c85
- (void)_removePopup:(id)popup;	// 0x440715
- (void)_removePopupWithIdentifier:(id)identifier;	// 0x4406c9
- (void)_updateActivity;	// 0x440bd1
- (void)dealloc;	// 0x4401e5
- (void)postPopUpWithControl:(id)control identifier:(id)identifier position:(unsigned)position size:(CGSize)size options:(id)options;	// 0x440289
- (void)removePopUpWithIdentifier:(id)identifier;	// 0x44052d
@end
