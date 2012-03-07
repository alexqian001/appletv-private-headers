/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class BRURLDocument, BRMerchant, NSOperationQueue, NSURL;
@protocol ATVUpdatable;

@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
@private
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	BRURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x35d557e1; S=0x35d557f5; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x35d55261; S=0x35d55251; 
@property(retain) NSURL *url;	// G=0x35d557a9; S=0x35d557bd; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x35d55131
- (void)_urlDocReady:(id)ready;	// 0x35d55401
- (void)dealloc;	// 0x35d551ad
// declared property getter: - (id)merchant;	// 0x35d557e1
- (BOOL)perform:(id)perform;	// 0x35d55271
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x35d557f5
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x35d55251
// declared property setter: - (void)setUrl:(id)url;	// 0x35d557bd
// declared property getter: - (id)updatableItem;	// 0x35d55261
// declared property getter: - (id)url;	// 0x35d557a9
@end
