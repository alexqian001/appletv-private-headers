/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSCoding> {
	int primaryType;	// 4 = 0x4
	NSCountedSet *_additionalAttachments;	// 8 = 0x8
	NSMutableDictionary *_clientSideComposedImageInfos;	// 12 = 0xc
}
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x300c36fd; S=0x300c370d; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x300c371d; S=0x300c372d; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x300c36dd; S=0x300c36ed; @synthesize
- (id)initWithCoder:(id)coder;	// 0x300c35bd
- (void)addAttachmentOfType:(int)type;	// 0x300c3395
// declared property getter: - (id)additionalAttachments;	// 0x300c36fd
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x300c371d
- (id)copyWithZone:(NSZone *)zone;	// 0x300c350d
- (void)dealloc;	// 0x300c3331
- (void)encodeWithCoder:(id)coder;	// 0x300c3671
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x300c349d
- (unsigned)numberOfAdditionalAttachments;	// 0x300c3421
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x300c3455
// declared property getter: - (int)primaryType;	// 0x300c36dd
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x300c370d
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x300c372d
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x300c36ed
@end
