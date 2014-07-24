/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
 */

#import </libobjc.A.h>


@interface IMTransferServicesController : NSObject {
}
+ (id)sharedInstance;	// 0x31257f05
- (void)_receiveFileTransfer:(id)transfer path:(id)path requestURLString:(id)string ownerID:(id)anId signature:(id)signature decryptionKey:(id)key retries:(int)retries fileSize:(unsigned long long)size progressBlock:(id)block completionBlock:(id)block10;	// 0x31258b99
- (void)_sendFilePath:(id)path transferID:(id)anId encryptFile:(BOOL)file retries:(int)retries progressBlock:(id)block completionBlock:(id)block6;	// 0x31257fb9
- (void)receiveFileTransfer:(id)transfer path:(id)path requestURLString:(id)string ownerID:(id)anId signature:(id)signature decryptionKey:(id)key fileSize:(unsigned long long)size progressBlock:(id)block completionBlock:(id)block9;	// 0x3125949d
- (void)sendFilePath:(id)path transferID:(id)anId encryptFile:(BOOL)file progressBlock:(id)block completionBlock:(id)block5;	// 0x31258b61
@end
