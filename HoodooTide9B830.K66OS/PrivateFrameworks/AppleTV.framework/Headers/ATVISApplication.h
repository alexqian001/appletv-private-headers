/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMercantile.h"
#import <NSObject.h> // Unknown library

@class NSNumber, BRMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVISApplication : NSObject <BRMercantile> {
@private
	BRMerchant *_merchant;	// 4 = 0x4
	NSString *_accountIdentifier;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
	NSString *_bundleVersion;	// 16 = 0x10
	NSNumber *_itemIdentifier;	// 20 = 0x14
	NSNumber *_storeFrontIdentifier;	// 24 = 0x18
	NSNumber *_versionIdentifier;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSNumber *accountDSID;	// G=0x32b37101; @dynamic
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x32b371b1; S=0x32b371c1; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x32b371e5; S=0x32b371f5; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x32b37219; S=0x32b37229; @synthesize=_bundleVersion
@property(retain, nonatomic) NSNumber *itemIdentifier;	// G=0x32b3724d; S=0x32b3725d; @synthesize=_itemIdentifier
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x32b3717d; S=0x32b3718d; @synthesize=_merchant
@property(retain, nonatomic) NSNumber *storeFrontIdentifier;	// G=0x32b37281; S=0x32b37291; @synthesize=_storeFrontIdentifier
@property(retain, nonatomic) NSNumber *versionIdentifier;	// G=0x32b372b5; S=0x32b372c5; @synthesize=_versionIdentifier
+ (id)applicationWithMerchant:(id)merchant;	// 0x32b36dd5
+ (void)initialize;	// 0x32b36d81
+ (void)removeApplicationWithMerchant:(id)merchant;	// 0x32b36e11
- (id)initWithMerchant:(id)merchant;	// 0x32b36e4d
// declared property getter: - (id)accountDSID;	// 0x32b37101
// declared property getter: - (id)accountIdentifier;	// 0x32b371b1
// declared property getter: - (id)bundleIdentifier;	// 0x32b371e5
// declared property getter: - (id)bundleVersion;	// 0x32b37219
- (void)dealloc;	// 0x32b37059
// declared property getter: - (id)itemIdentifier;	// 0x32b3724d
// declared property getter: - (id)merchant;	// 0x32b3717d
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x32b371c1
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x32b371f5
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x32b37229
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x32b3725d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32b3718d
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x32b37291
// declared property setter: - (void)setVersionIdentifier:(id)identifier;	// 0x32b372c5
// declared property getter: - (id)storeFrontIdentifier;	// 0x32b37281
// declared property getter: - (id)versionIdentifier;	// 0x32b372b5
@end
