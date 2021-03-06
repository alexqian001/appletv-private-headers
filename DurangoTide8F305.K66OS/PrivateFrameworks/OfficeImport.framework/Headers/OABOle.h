/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABOle : NSObject {
}
+ (BOOL)isBiffCLSID:(id)clsid;	// 0x344dc5f9
+ (BOOL)isChart:(id)chart;	// 0x344dc5b1
+ (id)read4ByteFromStream:(SsrwOOStream *)stream;	// 0x34550f61
+ (id)readAnsiStringFromStream:(SsrwOOStream *)stream;	// 0x3452fde9
+ (id)readCLSIDFromStream:(SsrwOOStream *)stream;	// 0x344dc469
+ (id)readCompressedFromStream:(SsrwOOStream *)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;	// 0x3452fb69
+ (id)readFromData:(id)data cancel:(id)cancel;	// 0x34540339
+ (id)readFromFileName:(id)fileName cancel:(id)cancel;	// 0x344dbb65
+ (id)readFromParentStorage:(SsrwOOStorage *)parentStorage storageName:(id)name cancel:(id)cancel;	// 0x344d98b5
+ (id)readFromStream:(SsrwOOStream *)stream size:(unsigned long)size cancel:(id)cancel;	// 0x345e5cfd
+ (BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage *)storage;	// 0x344dbfc9
+ (id)readUnicodeStringFromStream:(SsrwOOStream *)stream;	// 0x3452ff2d
+ (id)stringForCLSID:(SsrwOO_GUID)clsid;	// 0x344dc501
@end

