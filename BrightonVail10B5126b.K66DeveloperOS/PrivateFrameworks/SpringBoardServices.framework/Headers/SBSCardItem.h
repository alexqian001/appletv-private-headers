/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import "SpringBoardServices-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

@interface SBSCardItem : NSObject <NSCopying, NSCoding> {
	NSString *_identifier;	// 4 = 0x4
	NSData *_iconData;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSString *_body;	// 16 = 0x10
	BOOL _requiresPasscode;	// 20 = 0x14
	NSString *_bundleName;	// 24 = 0x18
	NSDictionary *_userInfo;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *body;	// G=0x3546a859; S=0x3546a86d; @synthesize=_body
@property(copy, nonatomic) NSString *bundleName;	// G=0x3546a89d; S=0x3546a8b1; @synthesize=_bundleName
@property(copy, nonatomic) NSData *iconData;	// G=0x3546a811; S=0x3546a825; @synthesize=_iconData
@property(copy, nonatomic) NSString *identifier;	// G=0x3546a7ed; S=0x3546a801; @synthesize=_identifier
@property(assign, nonatomic) BOOL requiresPasscode;	// G=0x3546a87d; S=0x3546a88d; @synthesize=_requiresPasscode
@property(copy, nonatomic) NSString *title;	// G=0x3546a835; S=0x3546a849; @synthesize=_title
@property(copy, nonatomic) NSDictionary *userInfo;	// G=0x3546a8c1; S=0x3546a8d5; @synthesize=_userInfo
- (id)initWithCoder:(id)coder;	// 0x3546a279
- (id)initWithIdentifier:(id)identifier iconData:(id)data title:(id)title body:(id)body classification:(int)classification bundleName:(id)name userInfo:(id)info;	// 0x3546a241
- (id)initWithIdentifier:(id)identifier iconData:(id)data title:(id)title body:(id)body requiresPasscode:(BOOL)passcode bundleName:(id)name userInfo:(id)info;	// 0x3546a07d
// declared property getter: - (id)body;	// 0x3546a859
// declared property getter: - (id)bundleName;	// 0x3546a89d
- (id)copyWithZone:(NSZone *)zone;	// 0x3546a4c1
- (void)dealloc;	// 0x3546a199
- (id)description;	// 0x3546a715
- (void)encodeWithCoder:(id)coder;	// 0x3546a395
- (unsigned)hash;	// 0x3546a649
// declared property getter: - (id)iconData;	// 0x3546a811
// declared property getter: - (id)identifier;	// 0x3546a7ed
- (BOOL)isEqual:(id)equal;	// 0x3546a695
// declared property getter: - (BOOL)requiresPasscode;	// 0x3546a87d
// declared property setter: - (void)setBody:(id)body;	// 0x3546a86d
// declared property setter: - (void)setBundleName:(id)name;	// 0x3546a8b1
// declared property setter: - (void)setIconData:(id)data;	// 0x3546a825
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3546a801
// declared property setter: - (void)setRequiresPasscode:(BOOL)passcode;	// 0x3546a88d
// declared property setter: - (void)setTitle:(id)title;	// 0x3546a849
// declared property setter: - (void)setUserInfo:(id)info;	// 0x3546a8d5
- (id)sortDate;	// 0x3546a60d
// declared property getter: - (id)title;	// 0x3546a835
// declared property getter: - (id)userInfo;	// 0x3546a8c1
@end
