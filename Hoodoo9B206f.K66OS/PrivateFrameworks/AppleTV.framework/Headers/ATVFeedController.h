/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVUpdatable.h"
#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSURL, ATVFeedRootElement, BRBackgroundTask, ATVMerchant, NSDictionary, NSString, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedController : BRViewController <ATVUpdatable> {
@private
	BRBackgroundTask *_updateTask;	// 88 = 0x58
	BOOL _isVolatile;	// 92 = 0x5c
	BOOL _isDirty;	// 93 = 0x5d
	NSString *_onReload;	// 96 = 0x60
	NSString *_onRefresh;	// 100 = 0x64
	ATVMerchant *_merchant;	// 104 = 0x68
	NSDictionary *_data;	// 108 = 0x6c
	ATVFeedRootElement *_feedElement;	// 112 = 0x70
	NSURL *_currentURL;	// 116 = 0x74
	ATVFeedDocument *_feedDocument;	// 120 = 0x78
}
@property(retain) NSURL *currentURL;	// G=0x3678be8d; S=0x3678bea1; @synthesize=_currentURL
@property(retain) NSDictionary *data;	// G=0x3678be1d; S=0x3678be31; @synthesize=_data
@property(retain) ATVFeedDocument *feedDocument;	// G=0x3678bec5; S=0x3678bed9; @synthesize=_feedDocument
@property(retain) ATVFeedRootElement *feedElement;	// G=0x3678be55; S=0x3678be69; @synthesize=_feedElement
@property(retain) ATVMerchant *merchant;	// G=0x3678bde5; S=0x3678bdf9; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x3678ba31
- (id)initWithFeedElement:(id)feedElement;	// 0x3678b91d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x3678c0ad
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x3678bf65
- (void)_cancelUpdateTask;	// 0x3678c0b5
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x3678c0b1
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x3678bf69
- (void)_handleWindowMaxBoundsChanged;	// 0x3678bd99
- (id)_initWithMerchant:(id)merchant;	// 0x3678b865
- (void)_markAsDirtyAndReloadIfActive;	// 0x3678c27d
- (void)_purchaseAcquired:(id)acquired;	// 0x3678c705
- (void)_reloadPage;	// 0x3678c109
- (void)_updateRefreshInterval;	// 0x3678c2dd
- (void)_updateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x3678bf6d
- (void)_updateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x3678befd
// declared property getter: - (id)currentURL;	// 0x3678be8d
// declared property getter: - (id)data;	// 0x3678be1d
- (void)dealloc;	// 0x3678bbb1
// declared property getter: - (id)feedDocument;	// 0x3678bec5
// declared property getter: - (id)feedElement;	// 0x3678be55
- (void)markAsDirty;	// 0x3678bda9
// declared property getter: - (id)merchant;	// 0x3678bde5
// declared property setter: - (void)setCurrentURL:(id)url;	// 0x3678bea1
// declared property setter: - (void)setData:(id)data;	// 0x3678be31
// declared property setter: - (void)setFeedDocument:(id)document;	// 0x3678bed9
// declared property setter: - (void)setFeedElement:(id)element;	// 0x3678be69
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3678bdf9
- (void)updateWithFeedElement:(id)feedElement;	// 0x3678bdd1
- (void)updateWithPropertyList:(id)propertyList;	// 0x3678bdbd
- (void)wasExhumed;	// 0x3678bcb5
- (void)wasPopped;	// 0x3678bd59
- (void)wasPushed;	// 0x3678bd19
@end

