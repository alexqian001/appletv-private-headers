/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSMutableDictionary, NSDictionary, NSString;

@interface APSMessage : NSObject <NSCoding> {
	NSMutableDictionary *_plist;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned identifier;	// G=0x33494925; S=0x33494959; 
@property(retain, nonatomic) NSString *topic;	// G=0x334948b5; S=0x334948d1; 
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x334948ed; S=0x33494909; 
- (id)initWithCoder:(id)coder;	// 0x33494815
- (id)initWithDictionary:(id)dictionary;	// 0x33494645
- (id)initWithTopic:(id)topic userInfo:(id)info;	// 0x334946bd
- (void)dealloc;	// 0x334947c9
- (id)dictionaryRepresentation;	// 0x334949dd
- (void)encodeWithCoder:(id)coder;	// 0x33494885
// declared property getter: - (unsigned)identifier;	// 0x33494925
- (id)objectForKey:(id)key;	// 0x3349499d
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x33494959
- (void)setObject:(id)object forKey:(id)key;	// 0x334949bd
// declared property setter: - (void)setTopic:(id)topic;	// 0x334948d1
// declared property setter: - (void)setUserInfo:(id)info;	// 0x33494909
// declared property getter: - (id)topic;	// 0x334948b5
// declared property getter: - (id)userInfo;	// 0x334948ed
@end
