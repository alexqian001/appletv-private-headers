/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


@interface NSRTFD : NSMutableDictionary {
	NSMutableDictionary *dict;	// 4 = 0x4
}
+ (void)initialize;	// 0x35608be5
- (id)init;	// 0x35608c25
- (unsigned)initFromDocument:(id)document;	// 0x356090f9
- (id)initFromElement:(id)element ofDocument:(id)document;	// 0x3560a995
- (id)initFromSerialized:(id)serialized;	// 0x3560c0e5
- (unsigned)initUnixFile:(id)file;	// 0x356090e9
- (id)initWithCapacity:(unsigned)capacity;	// 0x35608dad
- (id)initWithContentsOfFile:(id)file;	// 0x35608d61
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x35609a51
- (id)initWithDictionary:(id)dictionary;	// 0x35608d15
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x35608cc5
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x35608c6d
- (id)initWithPasteboardDataRepresentation:(id)pasteboardDataRepresentation;	// 0x3560c151
- (id)_getDocInfoForKey:(id)key;	// 0x3560a069
- (BOOL)_isLink:(id)link;	// 0x3560c239
- (id)addCommon:(id)common docInfo:(id)info value:(id)value zone:(NSZone *)zone;	// 0x35609fe9
- (id)addData:(id)data name:(id)name;	// 0x3560a655
- (unsigned)addDirNamed:(id)named lazy:(BOOL)lazy;	// 0x3560afe1
- (id)addFile:(id)file;	// 0x3560a099
- (unsigned)addFileNamed:(id)named fileAttributes:(id)attributes;	// 0x3560aba5
- (id)addLink:(id)link;	// 0x3560a191
- (id)copy;	// 0x3560a641
- (id)copy:(id)copy into:(id)into;	// 0x3560a3cd
- (id)copyWithZone:(NSZone *)zone;	// 0x3560a4c1
- (unsigned)count;	// 0x35608e45
- (id)createRandomKey:(id)key;	// 0x35609b1d
- (id)createUniqueKey:(id)key;	// 0x35609c2d
- (id)dataForFile:(id)file;	// 0x3560a2b9
- (id)dataRepresentation;	// 0x35609901
- (void)dealloc;	// 0x35608df9
- (id)freeSerialized:(void *)serialized length:(unsigned)length;	// 0x3560c015
- (id)getDirInfo:(BOOL)info;	// 0x3560aaf9
- (id)getDocument:(id)document docInfo:(id)info;	// 0x35609cb1
- (unsigned)insertItem:(id)item path:(id)path dirInfo:(id)info zone:(NSZone *)zone plist:(id)plist;	// 0x3560acdd
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x35609861
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler temp:(id)temp backup:(id)backup5;	// 0x35609665
- (unsigned)internalWritePath:(id)path errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path4;	// 0x35609569
- (BOOL)isPackage;	// 0x35608ff9
- (id)keyEnumerator;	// 0x35608e85
- (id)nameFromPath:(id)path extra:(id)extra;	// 0x356097a5
- (id)objectForKey:(id)key;	// 0x35608e65
- (id)pasteboardDataRepresentation;	// 0x3560c0f5
- (unsigned)realAddDirNamed:(id)named;	// 0x3560ae4d
- (id)removeFile:(id)file;	// 0x3560a381
- (void)removeObjectForKey:(id)key;	// 0x35608fd9
- (id)replaceFile:(id)file data:(id)data;	// 0x35609e01
- (id)replaceFile:(id)file path:(id)path;	// 0x35609e7d
- (unsigned)saveToDocument:(id)document removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x356098f1
- (id)serialize:(void **)serialize length:(unsigned *)length;	// 0x3560be85
- (void)setObject:(id)object forKey:(id)key;	// 0x35608ea5
- (id)setPackage:(BOOL)package;	// 0x35609025
- (id)tmpNameFromPath:(id)path;	// 0x35609845
- (id)tmpNameFromPath:(id)path extension:(id)extension;	// 0x356097b9
- (id)uniqueKey:(id)key;	// 0x35609ca1
- (int)validatePath:(id)path ignore:(id)ignore;	// 0x3560a6f9
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x35609531
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents markBusy:(BOOL)busy hardLinkPath:(id)path6;	// 0x356091f9
@end

