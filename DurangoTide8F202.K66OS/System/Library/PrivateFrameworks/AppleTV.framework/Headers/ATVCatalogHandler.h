/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : NSObject <BRSelectionHandler> {
@private
	NSDictionary *_item;	// 4 = 0x4
}
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x336aa6b1
- (void)_confirmActionResponse:(id)response;	// 0x336a72fd
- (void)_downloadItem:(id)item;	// 0x336aa511
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x336adc9d
- (BOOL)_handleStoreOfferItemSelection:(id)selection;	// 0x336a7725
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x336a71e5
- (void)_playOrPauseAsset:(id)asset;	// 0x336a7b75
- (void)_podcastItemSelected:(id)selected;	// 0x336a7a51
- (void)_previewItemSelected:(id)selected;	// 0x336a7ae1
- (void)_transactionConfirmedForItem:(id)item;	// 0x336a7375
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x336ac4cd
- (void)_warningForActionResponse:(id)actionResponse;	// 0x336a7665
- (void)dealloc;	// 0x336adc2d
- (BOOL)handlePlayForControl:(id)control;	// 0x336a7bed
- (BOOL)handleSelectionForControl:(id)control;	// 0x336a7da5
@end
