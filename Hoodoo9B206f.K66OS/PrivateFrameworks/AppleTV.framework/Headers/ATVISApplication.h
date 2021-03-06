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
@property(readonly, assign, nonatomic) NSNumber *accountDSID;	// G=0x367f315d; @dynamic
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x367f320d; S=0x367f321d; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x367f3241; S=0x367f3251; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x367f3275; S=0x367f3285; @synthesize=_bundleVersion
@property(retain, nonatomic) NSNumber *itemIdentifier;	// G=0x367f32a9; S=0x367f32b9; @synthesize=_itemIdentifier
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x367f31d9; S=0x367f31e9; @synthesize=_merchant
@property(retain, nonatomic) NSNumber *storeFrontIdentifier;	// G=0x367f32dd; S=0x367f32ed; @synthesize=_storeFrontIdentifier
@property(retain, nonatomic) NSNumber *versionIdentifier;	// G=0x367f3311; S=0x367f3321; @synthesize=_versionIdentifier
+ (id)applicationWithMerchant:(id)merchant;	// 0x367f2e31
+ (void)initialize;	// 0x367f2ddd
+ (void)removeApplicationWithMerchant:(id)merchant;	// 0x367f2e6d
- (id)initWithMerchant:(id)merchant;	// 0x367f2ea9
// declared property getter: - (id)accountDSID;	// 0x367f315d
// declared property getter: - (id)accountIdentifier;	// 0x367f320d
// declared property getter: - (id)bundleIdentifier;	// 0x367f3241
// declared property getter: - (id)bundleVersion;	// 0x367f3275
- (void)dealloc;	// 0x367f30b5
// declared property getter: - (id)itemIdentifier;	// 0x367f32a9
// declared property getter: - (id)merchant;	// 0x367f31d9
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x367f321d
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x367f3251
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x367f3285
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x367f32b9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x367f31e9
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x367f32ed
// declared property setter: - (void)setVersionIdentifier:(id)identifier;	// 0x367f3321
// declared property getter: - (id)storeFrontIdentifier;	// 0x367f32dd
// declared property getter: - (id)versionIdentifier;	// 0x367f3311
@end

