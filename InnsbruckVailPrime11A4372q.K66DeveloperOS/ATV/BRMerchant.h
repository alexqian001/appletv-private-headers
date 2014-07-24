/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRMerchantInfo;

__attribute__((visibility("hidden")))
@interface BRMerchant : XXUnknownSuperclass {
	BRMerchantInfo *_info;	// 4 = 0x4
}
@property(assign) BOOL enabled;	// G=0x40ee01; S=0x40ee29; 
@property(retain) BRMerchantInfo *info;	// G=0x40ed89; S=0x40ed99; @dynamic
+ (id)flagstaff;	// 0x1c1585
+ (id)itms;	// 0x1c1501
+ (id)merchantForControl:(id)control;	// 0x40e911
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x40e925
+ (id)merchantForObject:(id)object;	// 0x40e5d1
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x40e5e5
+ (id)merchantWithClosestAffinityToURL:(id)url;	// 0x40e981
+ (id)sedona;	// 0x1c1541
- (id)initWithCoder:(id)coder;	// 0x40ebe5
- (id)initWithIdentifier:(id)identifier;	// 0x40eb4d
- (id)initWithVendorBag:(id)vendorBag;	// 0x40eabd
- (id)accountType;	// 0x40edfd
- (void)assignToControl:(id)control;	// 0x40ef71
- (BOOL)assignToObject:(id)object;	// 0x40ee55
- (Class)catalogAgent;	// 0x1c15c5
- (id)copyWithZone:(NSZone *)zone;	// 0x40ebe1
- (void)dealloc;	// 0x40ebed
- (void)decorateRequestProperties:(id)properties;	// 0x40efa9
- (id)description;	// 0x40ec69
// declared property getter: - (BOOL)enabled;	// 0x40ee01
- (void)encodeWithCoder:(id)coder;	// 0x40ebe9
- (id)evaluatePlist:(id)plist;	// 0x40f209
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x40f08d
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x40f0b1
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body timeout:(double)timeout;	// 0x40f0e5
- (BOOL)hasAffinityToURL:(id)url;	// 0x40f211
- (id)identifier;	// 0x40edd5
// declared property getter: - (id)info;	// 0x40ed89
- (id)localizedStringForKey:(id)key;	// 0x40f1fd
- (id)merchantErrorForError:(id)error;	// 0x40f205
- (id)playerDelegate;	// 0x40f20d
- (oneway void)release;	// 0x40ebd5
- (id)retain;	// 0x40ebd1
- (unsigned)retainCount;	// 0x40ebd9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x40ee29
// declared property setter: - (void)setInfo:(id)info;	// 0x40ed99
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x40ed05
@end
