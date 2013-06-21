/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (NSDictionary)
+ (id)dictionaryWithContentsOfFile:(id)file;	// 0x31957c35
+ (id)dictionaryWithContentsOfURL:(id)url;	// 0x319b512d
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x31957c75
+ (BOOL)supportsSecureCoding;	// 0x319b4ea9
- (id)initWithCoder:(id)coder;	// 0x31969d8d
- (id)initWithContentsOfFile:(id)file;	// 0x319b516d
- (id)initWithContentsOfURL:(id)url;	// 0x319b51a9
- (id)_stringToWrite;	// 0x319b4ead
- (Class)classForCoder;	// 0x3199d1f9
- (id)descriptionInStringsFileFormat;	// 0x31971d45
- (void)encodeWithCoder:(id)coder;	// 0x31995081
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x319b4f0d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x319b501d
@end

@interface NSDictionary (NSFileAttributes)
- (id)fileCreationDate;	// 0x319bb0d1
- (BOOL)fileExtensionHidden;	// 0x319bafd9
- (id)fileGroupOwnerAccountID;	// 0x319bb0f1
- (id)fileGroupOwnerAccountName;	// 0x319baf51
- (unsigned)fileGroupOwnerAccountNumber;	// 0x319baf6d
- (unsigned long)fileHFSCreatorCode;	// 0x319bb009
- (unsigned long)fileHFSTypeCode;	// 0x319bb03d
- (BOOL)fileIsAppendOnly;	// 0x319bb0a1
- (BOOL)fileIsImmutable;	// 0x319bb071
- (id)fileModificationDate;	// 0x319baec5
- (id)fileOwnerAccountID;	// 0x31977ba5
- (id)fileOwnerAccountName;	// 0x319baf31
- (unsigned)fileOwnerAccountNumber;	// 0x319baf4d
- (unsigned)filePosixPermissions;	// 0x319baefd
- (unsigned long long)fileSize;	// 0x319bae91
- (unsigned)fileSystemFileNumber;	// 0x319bafa5
- (int)fileSystemNumber;	// 0x319baf71
- (id)fileType;	// 0x319baee1
@end

@interface NSDictionary (NSKeyValueCoding)
- (id)valueForKey:(id)key;	// 0x3194b589
- (id)valueForKeyPath:(id)keyPath;	// 0x319ce055
@end

@interface NSDictionary (NSURLExtras)
- (int)_web_intForKey:(id)key;	// 0x31a0aa55
- (id)_web_numberForKey:(id)key;	// 0x31a0aab9
- (id)_web_objectForMIMEType:(id)mimetype;	// 0x31a0aaed
- (id)_web_stringForKey:(id)key;	// 0x31a0aa85
@end

@interface NSDictionary (NSDictionaryPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31aa3495
@end
