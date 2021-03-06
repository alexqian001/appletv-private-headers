/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVUpdatable.h"
#import "BRViewController.h"

@class NSDictionary, BRBackgroundTask, ATVFeedDocument, NSString, ATVMerchant, NSURL, ATVFeedRootElement;

__attribute__((visibility("hidden")))
@interface ATVFeedController : BRViewController <ATVUpdatable> {
	BRBackgroundTask *_updateTask;	// 104 = 0x68
	BOOL _everWasActivated;	// 108 = 0x6c
	BOOL _isVolatile;	// 109 = 0x6d
	BOOL _isDirty;	// 110 = 0x6e
	NSString *_onReload;	// 112 = 0x70
	NSString *_onRefresh;	// 116 = 0x74
	ATVMerchant *_merchant;	// 120 = 0x78
	NSDictionary *_data;	// 124 = 0x7c
	ATVFeedRootElement *_feedElement;	// 128 = 0x80
	NSURL *_currentURL;	// 132 = 0x84
	ATVFeedDocument *_feedDocument;	// 136 = 0x88
}
@property(readonly, assign) NSString *_inlineJavaScriptSourceURL;	// G=0x150f69; 
@property(retain) NSURL *currentURL;	// G=0x150d0d; S=0x150d21; @synthesize=_currentURL
@property(retain) NSDictionary *data;	// G=0x150cc5; S=0x150cd9; @synthesize=_data
@property(retain) ATVFeedDocument *feedDocument;	// G=0x150d31; S=0x150d45; @synthesize=_feedDocument
@property(retain) ATVFeedRootElement *feedElement;	// G=0x150ce9; S=0x150cfd; @synthesize=_feedElement
@property(retain) ATVMerchant *merchant;	// G=0x150ca1; S=0x150cb5; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x150941
- (id)initWithFeedElement:(id)feedElement;	// 0x15082d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x150f11
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x150dbd
- (void)_cancelUpdateTask;	// 0x150f19
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x150f15
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x150dc1
- (void)_handleWindowMaxBoundsChanged;	// 0x150c51
- (id)_initWithMerchant:(id)merchant;	// 0x150775
// declared property getter: - (id)_inlineJavaScriptSourceURL;	// 0x150f69
- (void)_markAsDirtyAndReloadIfActive;	// 0x151165
- (void)_purchaseAcquired:(id)acquired;	// 0x15160d
- (void)_reloadPage;	// 0x150fb1
- (void)_updateFromExhumeOrPush;	// 0x15112d
- (void)_updateRefreshInterval;	// 0x1511c5
- (void)_updateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x150dc5
- (void)_updateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x150d55
- (void)controlWasActivated;	// 0x150bb9
// declared property getter: - (id)currentURL;	// 0x150d0d
// declared property getter: - (id)data;	// 0x150cc5
- (void)dealloc;	// 0x150ab1
// declared property getter: - (id)feedDocument;	// 0x150d31
// declared property getter: - (id)feedElement;	// 0x150ce9
- (BOOL)isNetworkDependent;	// 0x150c61
- (void)markAsDirty;	// 0x150c65
// declared property getter: - (id)merchant;	// 0x150ca1
// declared property setter: - (void)setCurrentURL:(id)url;	// 0x150d21
// declared property setter: - (void)setData:(id)data;	// 0x150cd9
// declared property setter: - (void)setFeedDocument:(id)document;	// 0x150d45
// declared property setter: - (void)setFeedElement:(id)element;	// 0x150cfd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x150cb5
- (void)updateWithFeedElement:(id)feedElement;	// 0x150c8d
- (void)updateWithPropertyList:(id)propertyList;	// 0x150c79
@end

