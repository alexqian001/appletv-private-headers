/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary, NSString;

@interface NSFileWrapper : NSObject <NSCoding> {
	NSDictionary *_fileAttributes;	// 4 = 0x4
	NSString *_preferredFileName;	// 8 = 0x8
	NSString *_fileName;	// 12 = 0xc
	id _contents;	// 16 = 0x10
	id _icon;	// 20 = 0x14
	id _moreVars;	// 24 = 0x18
}
@property(retain) NSDictionary *fileAttributes;	// G=0x31a4debd; S=0x31a4ddd5; converted property
@property(retain) id filename;	// G=0x31a4dd9d; S=0x31a4dd59; converted property
@property(retain) id preferredFilename;	// G=0x31a4dd21; S=0x31a4dbc1; converted property
+ (BOOL)_canSafelyMapFilesAtPath:(id)path;	// 0x31a4e495
+ (BOOL)_finishWritingToURL:(id)url byMovingItemAtURL:(id)url2 addingAttributes:(id)attributes error:(id *)error;	// 0x31a51c7d
+ (BOOL)_finishWritingToURL:(id)url byTakingContentsFromItemAtURL:(id)url2 addingAttributes:(id)attributes usingTemporaryDirectoryAtURL:(id)url4 backupFileName:(id)name error:(id *)error;	// 0x31a51d41
+ (BOOL)_forPath:(id)path getItemKind:(id *)kind modificationDate:(id *)date;	// 0x31a4dfe1
+ (id)_newContentsAtURL:(id)url path:(id)path itemKind:(id)kind oldChildrenByUniqueFileName:(id)name options:(unsigned)options error:(id *)error;	// 0x31a4e679
+ (id)_pathForURL:(id)url reading:(BOOL)reading error:(id *)error;	// 0x31a51a49
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x31a51db9
+ (id)_temporaryDirectoryURLForWritingToURL:(id)url error:(id *)error;	// 0x31a51b7d
+ (void)_writeAttributes:(id)attributes toURL:(id)url;	// 0x31a51bc5
+ (void)initialize;	// 0x31a4cf15
- (id)init;	// 0x31a4cf55
- (id)initDirectoryWithFileWrappers:(id)fileWrappers;	// 0x31a4d251
- (id)initRegularFileWithContents:(id)contents;	// 0x31a4d429
- (id)initSymbolicLinkWithDestinationURL:(id)destinationURL;	// 0x31a4d561
- (id)initWithCoder:(id)coder;	// 0x31a519c9
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x31a4d63d
- (id)initWithURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31a4cfcd
- (id)_addChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x31a50c79
- (void)_addParent:(id)parent;	// 0x31a50ac1
- (id)_attributesToWrite;	// 0x31a4f83d
- (void)_forWritingToURL:(id)url returnContentsLazyReadingError:(id *)error;	// 0x31a4f15d
- (id)_fullDescription:(BOOL)description;	// 0x31a51e39
- (id)_init;	// 0x31a4cf69
- (void)_initDirectoryContents;	// 0x31a50bb1
- (id)_initWithImpl:(id)impl preferredFileName:(id)name uniqueFileName:(id)name3 docInfo:(id)info iconData:(id)data;	// 0x31a4fe91
- (BOOL)_matchesItemKind:(id)kind modificationDate:(id)date;	// 0x31a4e105
- (id)_newImpl;	// 0x31a50591
- (void)_observePreferredFileNameOfChild:(id)child;	// 0x31a4db15
- (BOOL)_readContentsFromURL:(id)url path:(id)path itemKind:(id)kind options:(unsigned)options error:(id *)error;	// 0x31a4ebb9
- (void)_removeChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x31a5123d
- (void)_removeParent:(id)parent;	// 0x31a50b61
- (void)_resetFileModificationDate;	// 0x31a50d89
- (id)_uniqueFileNameOfChild:(id)child;	// 0x31a51161
- (void)_updateDescendantFileNames;	// 0x31a4fabd
- (BOOL)_writeContentsToURL:(id)url path:(id)path originalContentsURL:(id)url3 tryHardLinking:(BOOL)linking didHardLinking:(BOOL *)linking5 error:(id *)error;	// 0x31a4f1e9
- (id)addFileWrapper:(id)wrapper;	// 0x31a50e1d
- (id)addRegularFileWithContents:(id)contents preferredFilename:(id)filename;	// 0x31a51075
- (void)dealloc;	// 0x31a4d831
- (void)encodeWithCoder:(id)coder;	// 0x31a5195d
// converted property getter: - (id)fileAttributes;	// 0x31a4debd
- (id)fileWrappers;	// 0x31a5135d
// converted property getter: - (id)filename;	// 0x31a4dd9d
- (BOOL)isDirectory;	// 0x31a4da49
- (BOOL)isRegularFile;	// 0x31a4da8d
- (BOOL)isSymbolicLink;	// 0x31a4dad1
- (id)keyForFileWrapper:(id)fileWrapper;	// 0x31a51545
- (BOOL)matchesContentsOfURL:(id)url;	// 0x31a4e249
// converted property getter: - (id)preferredFilename;	// 0x31a4dd21
- (BOOL)readFromURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31a4eea1
- (id)regularFileContents;	// 0x31a515cd
- (void)removeFileWrapper:(id)wrapper;	// 0x31a5127d
- (id)serializedRepresentation;	// 0x31a50829
// converted property setter: - (void)setFileAttributes:(id)attributes;	// 0x31a4ddd5
// converted property setter: - (void)setFilename:(id)filename;	// 0x31a4dd59
// converted property setter: - (void)setPreferredFilename:(id)filename;	// 0x31a4dbc1
- (id)symbolicLinkDestinationURL;	// 0x31a51795
- (BOOL)writeToURL:(id)url options:(unsigned)options originalContentsURL:(id)url3 error:(id *)error;	// 0x31a4fbcd
@end
