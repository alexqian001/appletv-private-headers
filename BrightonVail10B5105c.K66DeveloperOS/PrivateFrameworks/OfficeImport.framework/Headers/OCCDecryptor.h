/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface OCCDecryptor : NSObject {
	NSString *mOutputFilename;	// 4 = 0x4
	NSString *mBaseStringForOutputFilename;	// 8 = 0x8
	OCCStreamer *mStreamer;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *outputFilename;	// G=0x37b04b99; @synthesize=mOutputFilename
+ (id)agileDescriptorNamespace;	// 0x37b04ba9
+ (id)agilePasswordKeyEncryptorNamespace;	// 0x37b04bf9
+ (id)allocTempFileWithBase:(id)base outFilename:(id *)filename;	// 0x37b04a31
- (id)initWithStreamer:(OCCStreamer *)streamer;	// 0x37b0472d
- (void)dealloc;	// 0x37b046b9
- (BOOL)decrypt;	// 0x37b04871
- (BOOL)decryptIntoOutputFile;	// 0x37b049d5
- (void)deleteOutputFile;	// 0x37b04809
- (BOOL)isReadProtectedUsingDefaultPassphrase;	// 0x37b047b1
// declared property getter: - (id)outputFilename;	// 0x37b04b99
- (BOOL)verifyPassphrase:(id)passphrase;	// 0x37b04979
@end
