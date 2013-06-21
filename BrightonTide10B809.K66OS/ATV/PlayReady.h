/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"


@interface PlayReady : XXUnknownSuperclass {
}
+ (id)PlayReadyErrorToString:(int)string;	// 0x5186a5
+ (char *)apiSecret;	// 0x5184d5
+ (void)cleanup;	// 0x5185f9
+ (id)getKey:(int *)key;	// 0x518645
+ (void)parseNetflixContentHeader:(id)header keyEnvelope:(id)envelope drmHeader:(vector<unsigned char, std::allocator<unsigned char> > *)header3 ivData:(vector<unsigned char, std::allocator<unsigned char> > *)data cryptoData:(vector<unsigned char, std::allocator<unsigned char> > *)data5;	// 0x518999
+ (void)setUniqueId:(char *)anId :(unsigned long)arg2;	// 0x51869d
+ (void)startWithId:(const char *)anId;	// 0x5184d9
+ (void)triggerKeyRetrieval:(id)retrieval :(id)arg2 :(int)arg3;	// 0x518529
- (id)init;	// 0x5186c5
- (int)decryptData:(char *)data :(unsigned long)arg2;	// 0x518941
- (void)doGetKey:(id)key;	// 0x518701
- (int)generateChallenge:(const char *)challenge :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x518921
- (int)getPRKey:(char *)key :(unsigned long)arg2;	// 0x518931
- (int)isInitialized;	// 0x518995
- (int)sendRequest:(const char *)request :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x51891d
- (int)setIv:(char *)iv :(unsigned long)arg2;	// 0x518939
- (void)unInitialize;	// 0x518949
@end
