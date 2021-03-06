/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSFileManager.h>


@interface IMFileManager : NSFileManager {
}
+ (id)defaultHFSFileManager;	// 0x3120d14d
+ (id)defaultManager;	// 0x3120d13d
- (id)MIMETypeOfPath:(id)path;	// 0x3120d421
- (id)MIMETypeOfPathExtension:(id)pathExtension;	// 0x3120d3b9
- (id)UTITypeOfMimeType:(id)mimeType;	// 0x3120d321
- (id)UTITypeOfPath:(id)path;	// 0x3120d55d
- (id)UTITypeOfPathExtension:(id)pathExtension;	// 0x3120d671
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x3120d201
- (id)displayNameOfFileWithName:(id)name hfsFlags:(unsigned short)flags;	// 0x3120d231
- (id)pathExtensionForMIMEType:(id)mimetype;	// 0x3120d289
- (id)pathExtensionForUTIType:(id)utitype;	// 0x3120d4a5
@end

