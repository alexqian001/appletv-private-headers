/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUCryptoKey.h"


@interface SFUTangierCryptoKey : SFUCryptoKey {
	char *mKey;	// 8 = 0x8
	unsigned long mKeyLength;	// 12 = 0xc
}
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length;	// 0x35d6a11d
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length iterationCount:(unsigned)count;	// 0x35d6a141
- (void)dealloc;	// 0x35d6a1e5
- (const char *)keyData;	// 0x35d6a22d
- (unsigned long)keyLength;	// 0x35d6a23d
@end

