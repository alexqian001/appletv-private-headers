/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BackRow-Structs.h"

@class BRMerchantInfo, NSString;

@interface BRMerchant : NSObject <NSCopying, NSCoding> {
@private
	NSString *_boundFeatureName;	// 4 = 0x4
	BOOL __instance_initialized;	// 8 = 0x8
	BRMerchantInfo *info;	// 12 = 0xc
}
@property(readonly, retain) NSString *boundFeatureName;	// G=0x32a174d5; converted property
@property(retain) BRMerchantInfo *info;	// G=0x32a179bd; S=0x32a179d5; @synthesize
+ (id)accountType;	// 0x32a174a9
+ (id)allocWithZone:(NSZone *)zone;	// 0x32a17961
+ (id)identifier;	// 0x32a17a69
+ (id)merchant;	// 0x32a17915
+ (id)merchantForControl:(id)control;	// 0x32a178b1
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x32a17875
+ (id)merchantForObject:(id)object;	// 0x32a178c9
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x32a17a81
+ (id)merchantWithIdentifier:(id)identifier;	// 0x32a178e1
+ (void)registerMerchant:(Class)merchant withIdentifier:(id)identifier;	// 0x32a17a01
- (id)init;	// 0x32a177d5
- (id)initWithCoder:(id)coder;	// 0x32a174c1
- (void)_updateMerchantInfo:(id)info;	// 0x32a174ed
- (void)assignToControl:(id)control;	// 0x32a17655
- (BOOL)assignToObject:(id)object;	// 0x32a17689
- (void)bindToFeature:(id)feature;	// 0x32a17779
// converted property getter: - (id)boundFeatureName;	// 0x32a174d5
- (id)brandingImage;	// 0x32a174e9
- (id)copyWithZone:(NSZone *)zone;	// 0x32a174bd
- (id)description;	// 0x32a174c9
- (void)encodeWithCoder:(id)coder;	// 0x32a174c5
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x32a1756d
- (id)identifier;	// 0x32a177b1
// declared property getter: - (id)info;	// 0x32a179bd
- (id)localizedStringForKey:(id)key;	// 0x32a179b1
- (id)merchantErrorForError:(id)error;	// 0x32a174e5
- (void)release;	// 0x32a174b1
- (id)retain;	// 0x32a174ad
- (unsigned)retainCount;	// 0x32a174b5
// declared property setter: - (void)setInfo:(id)info;	// 0x32a179d5
@end
