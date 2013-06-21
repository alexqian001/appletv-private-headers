/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDReader.h"

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader {
	OCCDecryptor *mDecryptor;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) OCCDecryptor *decryptor;	// G=0x34a6165d; @synthesize=mDecryptor
- (void)dealloc;	// 0x3488b4e1
// declared property getter: - (id)decryptor;	// 0x34a6165d
- (void)restartReaderToUseDecryptedDocument;	// 0x34a6166d
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x34a61651
- (void)useUnencryptedDocument;	// 0x348036d1
@end
