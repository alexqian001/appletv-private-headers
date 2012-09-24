/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSURL, NSString, NSMutableDictionary;
@protocol MZKeyValueStoreTransactionProcessing;

@interface MZKeyValueStoreTransaction : NSObject {
	NSString *_domain;	// 4 = 0x4
	NSString *_sinceDomainVersion;	// 8 = 0x8
	NSURL *_URL;	// 12 = 0xc
	id<MZKeyValueStoreTransactionProcessing> _processor;	// 16 = 0x10
	NSMutableDictionary *_userInfo;	// 20 = 0x14
	int _type;	// 24 = 0x18
	NSArray *_keys;	// 28 = 0x1c
}
@property(retain) NSURL *URL;	// G=0x35f84c01; S=0x35f84c15; @synthesize=_URL
@property(copy) NSString *domain;	// G=0x35f84bb9; S=0x35f84bcd; @synthesize=_domain
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x35f84c8d; @synthesize=_keys
@property(retain) id<MZKeyValueStoreTransactionProcessing> processor;	// G=0x35f84c25; S=0x35f84c39; @synthesize=_processor
@property(copy) NSString *sinceDomainVersion;	// G=0x35f84bdd; S=0x35f84bf1; @synthesize=_sinceDomainVersion
@property(assign, nonatomic) int type;	// G=0x35f84c6d; S=0x35f84c7d; @synthesize=_type
@property(retain) NSMutableDictionary *userInfo;	// G=0x35f84c49; S=0x35f84c5d; @synthesize=_userInfo
- (id)initWithType:(int)type domain:(id)domain URL:(id)url keys:(id)keys;	// 0x35f84691
// declared property getter: - (id)URL;	// 0x35f84c01
- (void)dealloc;	// 0x35f8474d
- (id)description;	// 0x35f84a15
// declared property getter: - (id)domain;	// 0x35f84bb9
// declared property getter: - (id)keys;	// 0x35f84c8d
// declared property getter: - (id)processor;	// 0x35f84c25
// declared property setter: - (void)setDomain:(id)domain;	// 0x35f84bcd
// declared property setter: - (void)setProcessor:(id)processor;	// 0x35f84c39
// declared property setter: - (void)setSinceDomainVersion:(id)version;	// 0x35f84bf1
// declared property setter: - (void)setType:(int)type;	// 0x35f84c7d
// declared property setter: - (void)setURL:(id)url;	// 0x35f84c15
// declared property setter: - (void)setUserInfo:(id)info;	// 0x35f84c5d
- (void)setUserInfoValue:(id)value forKey:(id)key;	// 0x35f84825
// declared property getter: - (id)sinceDomainVersion;	// 0x35f84bdd
// declared property getter: - (int)type;	// 0x35f84c6d
// declared property getter: - (id)userInfo;	// 0x35f84c49
- (id)userInfoValueForKey:(id)key;	// 0x35f84941
@end
