/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCoding> {
@private
	BBBulletin *_bulletin;	// 4 = 0x4
	unsigned _transactionID;	// 8 = 0x8
	int _updateType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BBBulletin *bulletin;	// G=0x36e24681; @synthesize=_bulletin
@property(readonly, assign, nonatomic) unsigned transactionID;	// G=0x36e24691; @synthesize=_transactionID
@property(readonly, assign, nonatomic) int updateType;	// G=0x36e246a1; @synthesize=_updateType
- (id)initWithBulletin:(id)bulletin updateType:(int)type transactionID:(unsigned)anId;	// 0x36e24461
- (id)initWithCoder:(id)coder;	// 0x36e24551
// declared property getter: - (id)bulletin;	// 0x36e24681
- (void)dealloc;	// 0x36e24505
- (void)encodeWithCoder:(id)coder;	// 0x36e245ed
// declared property getter: - (unsigned)transactionID;	// 0x36e24691
// declared property getter: - (int)updateType;	// 0x36e246a1
@end
