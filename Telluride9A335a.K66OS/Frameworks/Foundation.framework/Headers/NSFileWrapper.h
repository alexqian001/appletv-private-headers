/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface NSFileWrapper : NSObject <NSCoding> {
@private
	NSDictionary *_fileAttributes;	// 4 = 0x4
	NSString *_preferredFileName;	// 8 = 0x8
	NSString *_fileName;	// 12 = 0xc
	id _contents;	// 16 = 0x10
	id _icon;	// 20 = 0x14
	id _moreVars;	// 24 = 0x18
}
@property(retain) NSDictionary *fileAttributes;	// G=0x320f9985; S=0x320f989d; converted property
@property(retain) id filename;	// G=0x320f9865; S=0x320f9821; converted property
@property(retain) id preferredFilename;	// G=0x320f97e9; S=0x320f96a1; converted property
+ (BOOL)_canSafelyMapFilesAtPath:(id)path;	// 0x320f9f1d
+ (BOOL)_finishWritingToURL:(id)url byMovingItemAtURL:(id)url2 addingAttributes:(id)attributes error:(id *)error;	// 0x320fd76d
+ (BOOL)_finishWritingToURL:(id)url byTakingContentsFromItemAtURL:(id)url2 addingAttributes:(id)attributes usingTemporaryDirectoryAtURL:(id)url4 backupFileName:(id)name error:(id *)error;	// 0x320fd831
+ (BOOL)_forPath:(id)path getItemKind:(id *)kind modificationDate:(id *)date;	// 0x320f9aa9
+ (id)_newContentsAtURL:(id)url path:(id)path itemKind:(id)kind oldChildrenByUniqueFileName:(id)name options:(unsigned)options error:(id *)error;	// 0x320fa105
+ (id)_pathForURL:(id)url reading:(BOOL)reading error:(id *)error;	// 0x320fd541
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x320fd8b5
+ (id)_temporaryDirectoryURLForWritingToURL:(id)url error:(id *)error;	// 0x320fd66d
+ (void)_writeAttributes:(id)attributes toURL:(id)url;	// 0x320fd6b5
+ (void)initialize;	// 0x320f8a55
- (id)init;	// 0x320f8a95
- (id)initDirectoryWithFileWrappers:(id)fileWrappers;	// 0x320f8d75
- (id)initRegularFileWithContents:(id)contents;	// 0x320f8f21
- (id)initSymbolicLinkWithDestinationURL:(id)destinationURL;	// 0x320f9059
- (id)initWithCoder:(id)coder;	// 0x320fd4c1
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x320f9135
- (id)initWithURL:(id)url options:(unsigned)options error:(id *)error;	// 0x320f8b0d
- (id)_addChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x320fc769
- (void)_addParent:(id)parent;	// 0x320fc5ad
- (id)_attributesToWrite;	// 0x320fb269
- (void)_forWritingToURL:(id)url returnContentsLazyReadingError:(id *)error;	// 0x320fab89
- (id)_fullDescription:(BOOL)description;	// 0x320fd935
- (id)_init;	// 0x320f8aa9
- (void)_initDirectoryContents;	// 0x320fc699
- (id)_initWithImpl:(id)impl preferredFileName:(id)name uniqueFileName:(id)name3 docInfo:(id)info iconData:(id)data;	// 0x320fb899
- (BOOL)_matchesItemKind:(id)kind modificationDate:(id)date;	// 0x320f9bd1
- (id)_newImpl;	// 0x320fc061
- (void)_observePreferredFileNameOfChild:(id)child;	// 0x320f95f5
- (BOOL)_readContentsFromURL:(id)url path:(id)path itemKind:(id)kind options:(unsigned)options error:(id *)error;	// 0x320fa635
- (void)_removeChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x320fcd11
- (void)_removeParent:(id)parent;	// 0x320fc649
- (void)_resetFileModificationDate;	// 0x320fc871
- (id)_uniqueFileNameOfChild:(id)child;	// 0x320fcc49
- (void)_updateDescendantFileNames;	// 0x320fb4f9
- (BOOL)_writeContentsToURL:(id)url path:(id)path originalContentsURL:(id)url3 tryHardLinking:(BOOL)linking didHardLinking:(BOOL *)linking5 error:(id *)error;	// 0x320fac19
- (id)addFileWrapper:(id)wrapper;	// 0x320fc905
- (id)addRegularFileWithContents:(id)contents preferredFilename:(id)filename;	// 0x320fcb5d
- (void)dealloc;	// 0x320f9339
- (void)encodeWithCoder:(id)coder;	// 0x320fd459
// converted property getter: - (id)fileAttributes;	// 0x320f9985
- (id)fileWrappers;	// 0x320fce35
// converted property getter: - (id)filename;	// 0x320f9865
- (BOOL)isDirectory;	// 0x320f9529
- (BOOL)isRegularFile;	// 0x320f956d
- (BOOL)isSymbolicLink;	// 0x320f95b1
- (id)keyForFileWrapper:(id)fileWrapper;	// 0x320fd029
- (BOOL)matchesContentsOfURL:(id)url;	// 0x320f9d11
// converted property getter: - (id)preferredFilename;	// 0x320f97e9
- (BOOL)readFromURL:(id)url options:(unsigned)options error:(id *)error;	// 0x320fa8dd
- (id)regularFileContents;	// 0x320fd0b1
- (void)removeFileWrapper:(id)wrapper;	// 0x320fcd51
- (id)serializedRepresentation;	// 0x320fc2d9
// converted property setter: - (void)setFileAttributes:(id)attributes;	// 0x320f989d
// converted property setter: - (void)setFilename:(id)filename;	// 0x320f9821
// converted property setter: - (void)setPreferredFilename:(id)filename;	// 0x320f96a1
- (id)symbolicLinkDestinationURL;	// 0x320fd285
- (BOOL)writeToURL:(id)url options:(unsigned)options originalContentsURL:(id)url3 error:(id *)error;	// 0x320fb5ed
@end

